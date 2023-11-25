/****************************************************************************
** Meta object code from reading C++ file 'finderwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/finderwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'finderwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFinderWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFinderWidgetENDCLASS = QtMocHelpers::stringData(
    "FinderWidget",
    "goBack",
    "",
    "folderGoBack",
    "showArtists",
    "showAlbums",
    "showGenres",
    "showFolders",
    "artistActivated",
    "QModelIndex",
    "index",
    "artistPlayed",
    "albumActivated",
    "albumPlayed",
    "trackActivated",
    "folderActivated",
    "folderPlayed",
    "genreActivated",
    "genrePlayed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFinderWidgetENDCLASS_t {
    uint offsetsAndSizes[38];
    char stringdata0[13];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[12];
    char stringdata5[11];
    char stringdata6[11];
    char stringdata7[12];
    char stringdata8[16];
    char stringdata9[12];
    char stringdata10[6];
    char stringdata11[13];
    char stringdata12[15];
    char stringdata13[12];
    char stringdata14[15];
    char stringdata15[16];
    char stringdata16[13];
    char stringdata17[15];
    char stringdata18[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFinderWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFinderWidgetENDCLASS_t qt_meta_stringdata_CLASSFinderWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "FinderWidget"
        QT_MOC_LITERAL(13, 6),  // "goBack"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 12),  // "folderGoBack"
        QT_MOC_LITERAL(34, 11),  // "showArtists"
        QT_MOC_LITERAL(46, 10),  // "showAlbums"
        QT_MOC_LITERAL(57, 10),  // "showGenres"
        QT_MOC_LITERAL(68, 11),  // "showFolders"
        QT_MOC_LITERAL(80, 15),  // "artistActivated"
        QT_MOC_LITERAL(96, 11),  // "QModelIndex"
        QT_MOC_LITERAL(108, 5),  // "index"
        QT_MOC_LITERAL(114, 12),  // "artistPlayed"
        QT_MOC_LITERAL(127, 14),  // "albumActivated"
        QT_MOC_LITERAL(142, 11),  // "albumPlayed"
        QT_MOC_LITERAL(154, 14),  // "trackActivated"
        QT_MOC_LITERAL(169, 15),  // "folderActivated"
        QT_MOC_LITERAL(185, 12),  // "folderPlayed"
        QT_MOC_LITERAL(198, 14),  // "genreActivated"
        QT_MOC_LITERAL(213, 11)   // "genrePlayed"
    },
    "FinderWidget",
    "goBack",
    "",
    "folderGoBack",
    "showArtists",
    "showAlbums",
    "showGenres",
    "showFolders",
    "artistActivated",
    "QModelIndex",
    "index",
    "artistPlayed",
    "albumActivated",
    "albumPlayed",
    "trackActivated",
    "folderActivated",
    "folderPlayed",
    "genreActivated",
    "genrePlayed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFinderWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x08,    1 /* Private */,
       3,    0,  105,    2, 0x08,    2 /* Private */,
       4,    0,  106,    2, 0x08,    3 /* Private */,
       5,    0,  107,    2, 0x08,    4 /* Private */,
       6,    0,  108,    2, 0x08,    5 /* Private */,
       7,    0,  109,    2, 0x08,    6 /* Private */,
       8,    1,  110,    2, 0x08,    7 /* Private */,
      11,    1,  113,    2, 0x08,    9 /* Private */,
      12,    1,  116,    2, 0x08,   11 /* Private */,
      13,    1,  119,    2, 0x08,   13 /* Private */,
      14,    1,  122,    2, 0x08,   15 /* Private */,
      15,    1,  125,    2, 0x08,   17 /* Private */,
      16,    1,  128,    2, 0x08,   19 /* Private */,
      17,    1,  131,    2, 0x08,   21 /* Private */,
      18,    1,  134,    2, 0x08,   23 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject FinderWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSFinderWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFinderWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFinderWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FinderWidget, std::true_type>,
        // method 'goBack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'folderGoBack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showArtists'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showAlbums'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showGenres'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showFolders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'artistActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'artistPlayed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'albumActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'albumPlayed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'trackActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'folderActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'folderPlayed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'genreActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'genrePlayed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void FinderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FinderWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->goBack(); break;
        case 1: _t->folderGoBack(); break;
        case 2: _t->showArtists(); break;
        case 3: _t->showAlbums(); break;
        case 4: _t->showGenres(); break;
        case 5: _t->showFolders(); break;
        case 6: _t->artistActivated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 7: _t->artistPlayed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 8: _t->albumActivated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 9: _t->albumPlayed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 10: _t->trackActivated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 11: _t->folderActivated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 12: _t->folderPlayed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 13: _t->genreActivated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 14: _t->genrePlayed((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *FinderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FinderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFinderWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FinderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
