/****************************************************************************
** Meta object code from reading C++ file 'albumlistview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/albumlistview.h"
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
#error "The header file 'albumlistview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAlbumListViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAlbumListViewENDCLASS = QtMocHelpers::stringData(
    "AlbumListView",
    "appear",
    "",
    "disappear",
    "setSortBy",
    "SortBy",
    "sortBy",
    "setSortByTitle",
    "setSortByArtist",
    "setSortByYear",
    "setSortByPopularity",
    "setReversedOrder",
    "reversedOrder",
    "preloadThumbs"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAlbumListViewENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[14];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[10];
    char stringdata5[7];
    char stringdata6[7];
    char stringdata7[15];
    char stringdata8[16];
    char stringdata9[14];
    char stringdata10[20];
    char stringdata11[17];
    char stringdata12[14];
    char stringdata13[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAlbumListViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAlbumListViewENDCLASS_t qt_meta_stringdata_CLASSAlbumListViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "AlbumListView"
        QT_MOC_LITERAL(14, 6),  // "appear"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 9),  // "disappear"
        QT_MOC_LITERAL(32, 9),  // "setSortBy"
        QT_MOC_LITERAL(42, 6),  // "SortBy"
        QT_MOC_LITERAL(49, 6),  // "sortBy"
        QT_MOC_LITERAL(56, 14),  // "setSortByTitle"
        QT_MOC_LITERAL(71, 15),  // "setSortByArtist"
        QT_MOC_LITERAL(87, 13),  // "setSortByYear"
        QT_MOC_LITERAL(101, 19),  // "setSortByPopularity"
        QT_MOC_LITERAL(121, 16),  // "setReversedOrder"
        QT_MOC_LITERAL(138, 13),  // "reversedOrder"
        QT_MOC_LITERAL(152, 13)   // "preloadThumbs"
    },
    "AlbumListView",
    "appear",
    "",
    "disappear",
    "setSortBy",
    "SortBy",
    "sortBy",
    "setSortByTitle",
    "setSortByArtist",
    "setSortByYear",
    "setSortByPopularity",
    "setReversedOrder",
    "reversedOrder",
    "preloadThumbs"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAlbumListViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    0,   69,    2, 0x0a,    2 /* Public */,
       4,    1,   70,    2, 0x08,    3 /* Private */,
       7,    0,   73,    2, 0x08,    5 /* Private */,
       8,    0,   74,    2, 0x08,    6 /* Private */,
       9,    0,   75,    2, 0x08,    7 /* Private */,
      10,    0,   76,    2, 0x08,    8 /* Private */,
      11,    1,   77,    2, 0x08,    9 /* Private */,
      13,    0,   80,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AlbumListView::staticMetaObject = { {
    QMetaObject::SuperData::link<FinderListView::staticMetaObject>(),
    qt_meta_stringdata_CLASSAlbumListViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAlbumListViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAlbumListViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AlbumListView, std::true_type>,
        // method 'appear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disappear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSortBy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SortBy, std::false_type>,
        // method 'setSortByTitle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSortByArtist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSortByYear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSortByPopularity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setReversedOrder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'preloadThumbs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AlbumListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AlbumListView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->appear(); break;
        case 1: _t->disappear(); break;
        case 2: _t->setSortBy((*reinterpret_cast< std::add_pointer_t<SortBy>>(_a[1]))); break;
        case 3: _t->setSortByTitle(); break;
        case 4: _t->setSortByArtist(); break;
        case 5: _t->setSortByYear(); break;
        case 6: _t->setSortByPopularity(); break;
        case 7: _t->setReversedOrder((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->preloadThumbs(); break;
        default: ;
        }
    }
}

const QMetaObject *AlbumListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAlbumListViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FinderListView::qt_metacast(_clname);
}

int AlbumListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FinderListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
