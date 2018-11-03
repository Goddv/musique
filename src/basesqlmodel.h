/* $BEGIN_LICENSE

This file is part of Musique.
Copyright 2013, Flavio Tordini <flavio.tordini@gmail.com>

Musique is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Musique is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Musique.  If not, see <http://www.gnu.org/licenses/>.

$END_LICENSE */

#ifndef BASESQLMODEL_H
#define BASESQLMODEL_H

#include <QtSql>

class Item;

class BaseSqlModel : public QSqlQueryModel {
    Q_OBJECT

public:
    BaseSqlModel(QObject *parent = nullptr);
    void setQuery(const QSqlQuery &query);
    void setQuery(const QString &query, const QSqlDatabase &db);
    void restoreQuery();

public slots:
    void refreshIndex(const QModelIndex &index) { emit dataChanged(index, index); }

protected:
    // drag and drop
    Qt::ItemFlags flags(const QModelIndex &index) const;
    QStringList mimeTypes() const;
    Qt::DropActions supportedDropActions() const;
    QMimeData *mimeData(const QModelIndexList &indexes) const;

    virtual Item *itemAt(const QModelIndex &index) const = 0;

    QString lastQuery;
};

#endif // BASESQLMODEL_H
