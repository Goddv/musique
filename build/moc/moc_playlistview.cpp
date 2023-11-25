/****************************************************************************
** Meta object code from reading C++ file 'playlistview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/playlistview.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPlaylistViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPlaylistViewENDCLASS = QtMocHelpers::stringData(
    "PlaylistView",
    "needDropArea",
    "",
    "removeSelected",
    "moveUpSelected",
    "moveDownSelected",
    "itemActivated",
    "QModelIndex",
    "index",
    "selectionChanged",
    "QItemSelection",
    "selected",
    "deselected",
    "updatePlaylistActions",
    "selectTracks",
    "QList<Track*>",
    "tracks"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPlaylistViewENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[13];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[15];
    char stringdata5[17];
    char stringdata6[14];
    char stringdata7[12];
    char stringdata8[6];
    char stringdata9[17];
    char stringdata10[15];
    char stringdata11[9];
    char stringdata12[11];
    char stringdata13[22];
    char stringdata14[13];
    char stringdata15[14];
    char stringdata16[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPlaylistViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPlaylistViewENDCLASS_t qt_meta_stringdata_CLASSPlaylistViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "PlaylistView"
        QT_MOC_LITERAL(13, 12),  // "needDropArea"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 14),  // "removeSelected"
        QT_MOC_LITERAL(42, 14),  // "moveUpSelected"
        QT_MOC_LITERAL(57, 16),  // "moveDownSelected"
        QT_MOC_LITERAL(74, 13),  // "itemActivated"
        QT_MOC_LITERAL(88, 11),  // "QModelIndex"
        QT_MOC_LITERAL(100, 5),  // "index"
        QT_MOC_LITERAL(106, 16),  // "selectionChanged"
        QT_MOC_LITERAL(123, 14),  // "QItemSelection"
        QT_MOC_LITERAL(138, 8),  // "selected"
        QT_MOC_LITERAL(147, 10),  // "deselected"
        QT_MOC_LITERAL(158, 21),  // "updatePlaylistActions"
        QT_MOC_LITERAL(180, 12),  // "selectTracks"
        QT_MOC_LITERAL(193, 13),  // "QList<Track*>"
        QT_MOC_LITERAL(207, 6)   // "tracks"
    },
    "PlaylistView",
    "needDropArea",
    "",
    "removeSelected",
    "moveUpSelected",
    "moveDownSelected",
    "itemActivated",
    "QModelIndex",
    "index",
    "selectionChanged",
    "QItemSelection",
    "selected",
    "deselected",
    "updatePlaylistActions",
    "selectTracks",
    "QList<Track*>",
    "tracks"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPlaylistViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   63,    2, 0x0a,    2 /* Public */,
       4,    0,   64,    2, 0x0a,    3 /* Public */,
       5,    0,   65,    2, 0x0a,    4 /* Public */,
       6,    1,   66,    2, 0x0a,    5 /* Public */,
       9,    2,   69,    2, 0x0a,    7 /* Public */,
      13,    0,   74,    2, 0x0a,   10 /* Public */,
      14,    1,   75,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlaylistView::staticMetaObject = { {
    QMetaObject::SuperData::link<QListView::staticMetaObject>(),
    qt_meta_stringdata_CLASSPlaylistViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPlaylistViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPlaylistViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlaylistView, std::true_type>,
        // method 'needDropArea'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveUpSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveDownSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'itemActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        // method 'updatePlaylistActions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectTracks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<Track*> &, std::false_type>
    >,
    nullptr
} };

void PlaylistView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaylistView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->needDropArea(); break;
        case 1: _t->removeSelected(); break;
        case 2: _t->moveUpSelected(); break;
        case 3: _t->moveDownSelected(); break;
        case 4: _t->itemActivated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 5: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 6: _t->updatePlaylistActions(); break;
        case 7: _t->selectTracks((*reinterpret_cast< std::add_pointer_t<QList<Track*>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<Track*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlaylistView::*)();
            if (_t _q_method = &PlaylistView::needDropArea; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *PlaylistView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPlaylistViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int PlaylistView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void PlaylistView::needDropArea()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
