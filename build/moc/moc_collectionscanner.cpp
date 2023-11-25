/****************************************************************************
** Meta object code from reading C++ file 'collectionscanner.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/collectionscanner.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'collectionscanner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSCollectionScannerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSCollectionScannerENDCLASS = QtMocHelpers::stringData(
    "CollectionScanner",
    "progress",
    "",
    "finished",
    "stats",
    "error",
    "message",
    "scanDirectory",
    "QDir",
    "directory",
    "popFromQueue",
    "giveThisFileAnArtist",
    "FileInfo*",
    "file",
    "processArtist",
    "gotArtistInfo",
    "giveThisFileAnAlbumArtist",
    "processAlbumArtist",
    "giveThisFileAnAlbum",
    "processAlbum",
    "gotAlbumInfo",
    "processTrack",
    "emitFinished"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCollectionScannerENDCLASS_t {
    uint offsetsAndSizes[46];
    char stringdata0[18];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[6];
    char stringdata5[6];
    char stringdata6[8];
    char stringdata7[14];
    char stringdata8[5];
    char stringdata9[10];
    char stringdata10[13];
    char stringdata11[21];
    char stringdata12[10];
    char stringdata13[5];
    char stringdata14[14];
    char stringdata15[14];
    char stringdata16[26];
    char stringdata17[19];
    char stringdata18[20];
    char stringdata19[13];
    char stringdata20[13];
    char stringdata21[13];
    char stringdata22[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCollectionScannerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCollectionScannerENDCLASS_t qt_meta_stringdata_CLASSCollectionScannerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "CollectionScanner"
        QT_MOC_LITERAL(18, 8),  // "progress"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 8),  // "finished"
        QT_MOC_LITERAL(37, 5),  // "stats"
        QT_MOC_LITERAL(43, 5),  // "error"
        QT_MOC_LITERAL(49, 7),  // "message"
        QT_MOC_LITERAL(57, 13),  // "scanDirectory"
        QT_MOC_LITERAL(71, 4),  // "QDir"
        QT_MOC_LITERAL(76, 9),  // "directory"
        QT_MOC_LITERAL(86, 12),  // "popFromQueue"
        QT_MOC_LITERAL(99, 20),  // "giveThisFileAnArtist"
        QT_MOC_LITERAL(120, 9),  // "FileInfo*"
        QT_MOC_LITERAL(130, 4),  // "file"
        QT_MOC_LITERAL(135, 13),  // "processArtist"
        QT_MOC_LITERAL(149, 13),  // "gotArtistInfo"
        QT_MOC_LITERAL(163, 25),  // "giveThisFileAnAlbumArtist"
        QT_MOC_LITERAL(189, 18),  // "processAlbumArtist"
        QT_MOC_LITERAL(208, 19),  // "giveThisFileAnAlbum"
        QT_MOC_LITERAL(228, 12),  // "processAlbum"
        QT_MOC_LITERAL(241, 12),  // "gotAlbumInfo"
        QT_MOC_LITERAL(254, 12),  // "processTrack"
        QT_MOC_LITERAL(267, 12)   // "emitFinished"
    },
    "CollectionScanner",
    "progress",
    "",
    "finished",
    "stats",
    "error",
    "message",
    "scanDirectory",
    "QDir",
    "directory",
    "popFromQueue",
    "giveThisFileAnArtist",
    "FileInfo*",
    "file",
    "processArtist",
    "gotArtistInfo",
    "giveThisFileAnAlbumArtist",
    "processAlbumArtist",
    "giveThisFileAnAlbum",
    "processAlbum",
    "gotAlbumInfo",
    "processTrack",
    "emitFinished"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCollectionScannerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x06,    1 /* Public */,
       3,    1,  107,    2, 0x06,    3 /* Public */,
       5,    1,  110,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,  113,    2, 0x08,    7 /* Private */,
      10,    0,  116,    2, 0x08,    9 /* Private */,
      11,    1,  117,    2, 0x08,   10 /* Private */,
      14,    1,  120,    2, 0x08,   12 /* Private */,
      15,    0,  123,    2, 0x08,   14 /* Private */,
      16,    1,  124,    2, 0x08,   15 /* Private */,
      17,    1,  127,    2, 0x08,   17 /* Private */,
      18,    1,  130,    2, 0x08,   19 /* Private */,
      19,    1,  133,    2, 0x08,   21 /* Private */,
      20,    0,  136,    2, 0x08,   23 /* Private */,
      21,    1,  137,    2, 0x08,   24 /* Private */,
      22,    0,  140,    2, 0x08,   26 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QVariantMap,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject CollectionScanner::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSCollectionScannerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCollectionScannerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCollectionScannerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CollectionScanner, std::true_type>,
        // method 'progress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'scanDirectory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDir &, std::false_type>,
        // method 'popFromQueue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'giveThisFileAnArtist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<FileInfo *, std::false_type>,
        // method 'processArtist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<FileInfo *, std::false_type>,
        // method 'gotArtistInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'giveThisFileAnAlbumArtist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<FileInfo *, std::false_type>,
        // method 'processAlbumArtist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<FileInfo *, std::false_type>,
        // method 'giveThisFileAnAlbum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<FileInfo *, std::false_type>,
        // method 'processAlbum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<FileInfo *, std::false_type>,
        // method 'gotAlbumInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'processTrack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<FileInfo *, std::false_type>,
        // method 'emitFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CollectionScanner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CollectionScanner *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->progress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->finished((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 2: _t->error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->scanDirectory((*reinterpret_cast< std::add_pointer_t<QDir>>(_a[1]))); break;
        case 4: _t->popFromQueue(); break;
        case 5: _t->giveThisFileAnArtist((*reinterpret_cast< std::add_pointer_t<FileInfo*>>(_a[1]))); break;
        case 6: _t->processArtist((*reinterpret_cast< std::add_pointer_t<FileInfo*>>(_a[1]))); break;
        case 7: _t->gotArtistInfo(); break;
        case 8: _t->giveThisFileAnAlbumArtist((*reinterpret_cast< std::add_pointer_t<FileInfo*>>(_a[1]))); break;
        case 9: _t->processAlbumArtist((*reinterpret_cast< std::add_pointer_t<FileInfo*>>(_a[1]))); break;
        case 10: _t->giveThisFileAnAlbum((*reinterpret_cast< std::add_pointer_t<FileInfo*>>(_a[1]))); break;
        case 11: _t->processAlbum((*reinterpret_cast< std::add_pointer_t<FileInfo*>>(_a[1]))); break;
        case 12: _t->gotAlbumInfo(); break;
        case 13: _t->processTrack((*reinterpret_cast< std::add_pointer_t<FileInfo*>>(_a[1]))); break;
        case 14: _t->emitFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CollectionScanner::*)(int );
            if (_t _q_method = &CollectionScanner::progress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CollectionScanner::*)(const QVariantMap & );
            if (_t _q_method = &CollectionScanner::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CollectionScanner::*)(QString );
            if (_t _q_method = &CollectionScanner::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *CollectionScanner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CollectionScanner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCollectionScannerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CollectionScanner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void CollectionScanner::progress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CollectionScanner::finished(const QVariantMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CollectionScanner::error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
