#include "database.h"
#include "constants.h"
#include <QDesktopServices>

static const QString dbName = QLatin1String(Constants::UNIX_NAME) + ".db";
static Database *databaseInstance = 0;

Database::Database() {

    QString dataLocation = QDesktopServices::storageLocation(QDesktopServices::DataLocation);
    QDir().mkpath(dataLocation);
    dbLocation = dataLocation + "/" + dbName;

    QMutexLocker locker(&lock);

    if(QFile::exists(dbLocation)) {

        // qDebug() << "Database found in" << dbLocation;

        // check db version
        int databaseVersion = getAttribute("version").toInt();
        if (databaseVersion != Constants::DATABASE_VERSION) {
            qDebug("Wrong database version: %d", databaseVersion);
        }

    } else createDatabase();

    maybeCreateDownloadsTable();

}

Database::~Database() {
    closeConnections();
}

void Database::createDatabase() {

    qDebug() << "Creating the database";

    const QSqlDatabase db = getConnection();

    QSqlQuery("create table artists ("
              "id integer primary key autoincrement,"
              "hash varchar(32),"
              "name varchar(255),"
              // "mbid varchar(50),"
              // "lifeBegin integer,"
              // "lifeEnd integer,"
              "albumCount integer,"
              "trackCount integer)", db);

    QSqlQuery("create table albums ("
              "id integer primary key autoincrement,"
              "hash varchar(32),"
              "title varchar(255),"
              "year integer,"
              // "language varchar(5),"
              "artist integer,"
              "trackCount integer)"
              , db);

    QSqlQuery(
            "create table tracks ("
            "id integer primary key autoincrement,"
            "path varchar(255)," // path is NOT unique: .cue files
            "title varchar(255),"
            // "start integer, end integer," // cue files
            "duration integer,"
            "track integer,"
            "year integer,"
            "artist integer,"
            "album integer,"
            "tstamp integer)"
            , db);

    QSqlQuery(
            "create table nontracks ("
            "path varchar(255),"
            "tstamp integer)"
            , db);
    QSqlQuery("create unique index idx_path on nontracks(path)", db);

    QSqlQuery("create table attributes (name varchar(255), value)", db);
    QSqlQuery("insert into attributes (name, value) values ('version', " + QString::number(Constants::DATABASE_VERSION) + ")", db);
    QSqlQuery("insert into attributes (name, value) values ('status', " + QString::number(ScanIncomplete) + ")", db);
    QSqlQuery("insert into attributes (name, value) values ('lastUpdate', 0)", db);
    QSqlQuery("insert into attributes (name, value) values ('root', '')", db);

}

void Database::maybeCreateDownloadsTable() {
    const QSqlDatabase db = getConnection();

    bool createTable = false;

    QSqlQuery query(db);
    if (!query.exec("SELECT name FROM sqlite_master WHERE type='table' AND name='downloads'")) {
        qWarning() << query.lastQuery() << query.lastError().text();
        createTable = true;
    } else if (query.next()) return;

    QSqlQuery("create table downloads ("
              "id integer primary key autoincrement,"
              "objectid integer,"
              "type integer,"
              "status integer,"
              "errors integer,"
              "url varchar(255))"
              , db);

    qDebug() << "Downloads table created";
}

Database& Database::instance() {
    static QMutex mutex;
    QMutexLocker locker(&mutex);
    if (!databaseInstance) databaseInstance = new Database();
    return *databaseInstance;
}

QSqlDatabase Database::getConnection() {
    QThread *currentThread = QThread::currentThread();
    if (!currentThread) {
        qDebug() << "current thread is null";
        return QSqlDatabase();
    }

    const QString threadName = currentThread->objectName();
    // qDebug() << "threadName" << threadName << currentThread;
    if (connections.contains(currentThread)) {
        return connections.value(currentThread);
    } else {
        qDebug() << "Creating db connection for" << threadName;
        QSqlDatabase connection = QSqlDatabase::addDatabase("QSQLITE", threadName);
        connection.setDatabaseName(dbLocation);
        if(!connection.open()) {
            qWarning() << QString("Cannot connect to database %1 in thread %2").arg(dbLocation, threadName);
        }
        connections.insert(currentThread, connection);
        return connection;
    }
}

int Database::status() {
    QVariant status = getAttribute("status");
    if (status.isValid()) return status.toInt();
    else return ScanIncomplete;
}

void Database::setStatus(int status) {
    setAttribute("status", QVariant(status));
}

uint Database::lastUpdate() {
    return getAttribute("lastUpdate").toUInt();
}

void Database::setLastUpdate(uint date) {
    setAttribute("lastUpdate", QVariant(date));
}

QString Database::collectionRoot() {
    return getAttribute("root").toString();
}

void Database::setCollectionRoot(QString dir) {
    setAttribute("root", QVariant(dir));
}

QVariant Database::getAttribute(QString name) {
    QSqlQuery query("select value from attributes where name=?", getConnection());
    query.bindValue(0, name);

    bool success = query.exec();
    if (!success) qDebug() << query.lastQuery() << query.boundValues().values() << query.lastError().text();
    if (query.next())
        return query.value(0);
    return QVariant();
}

void Database::setAttribute(QString name, QVariant value) {
    QSqlQuery query(getConnection());
    query.prepare("update attributes set value=? where name=?");
    query.bindValue(0, value);
    query.bindValue(1, name);
    bool success = query.exec();
    if (!success) qDebug() << query.lastError().text();
}


/**
  * After calling this method you have to reacquire a valid instance using instance()
  */
void Database::drop() {
    /// closeConnections();
    if (!QFile::remove(dbLocation)) {
        qWarning() << "Cannot delete database" << dbLocation;

        // fallback to delete records in tables
        const QSqlDatabase db = getConnection();
        QSqlQuery query(db);
        if (!query.exec("select name from sqlite_master where type='table'")) {
            qWarning() << query.lastQuery() << query.lastError().text();
        }

        while (query.next()) {
            QString tableName = query.value(0).toString();
            if (tableName.startsWith("sqlite_") || tableName == "attributes") continue;
            QString dropSQL = "delete from " + tableName;
            qWarning() << "dropSQL" << dropSQL;
            QSqlQuery query2(db);
            if (!query2.exec(dropSQL)) {
                qWarning() << query2.lastQuery() << query2.lastError().text();
            }
        }

        query.exec("delete from sqlite_sequence");

    }
    if (databaseInstance) delete databaseInstance;
    databaseInstance = 0;
}

void Database::closeConnections() {
    foreach(QSqlDatabase connection, connections.values()) {
        qDebug() << "Closing connection" << connection;
        connection.close();
    }
    connections.clear();
}

void Database::closeConnection() {
    QThread *currentThread = QThread::currentThread();
    if (!connections.contains(currentThread)) return;
    QSqlDatabase connection = connections.take(currentThread);
    qDebug() << "Closing connection" << connection;
    connection.close();
}
