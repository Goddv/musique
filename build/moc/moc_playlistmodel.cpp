/****************************************************************************
** Meta object code from reading C++ file 'playlistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/playlistmodel.h"
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
#error "The header file 'playlistmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPlaylistModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPlaylistModelENDCLASS = QtMocHelpers::stringData(
    "PlaylistModel",
    "activeRowChanged",
    "",
    "row",
    "manual",
    "startPlayback",
    "needSelectionFor",
    "QList<Track*>",
    "itemChanged",
    "total",
    "playlistFinished",
    "addTrack",
    "Track*",
    "track",
    "addTracks",
    "newTracks",
    "clear",
    "skipBackward",
    "skipForward",
    "getNextTrack",
    "trackRemoved"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPlaylistModelENDCLASS_t {
    uint offsetsAndSizes[42];
    char stringdata0[14];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[7];
    char stringdata5[14];
    char stringdata6[17];
    char stringdata7[14];
    char stringdata8[12];
    char stringdata9[6];
    char stringdata10[17];
    char stringdata11[9];
    char stringdata12[7];
    char stringdata13[6];
    char stringdata14[10];
    char stringdata15[10];
    char stringdata16[6];
    char stringdata17[13];
    char stringdata18[12];
    char stringdata19[13];
    char stringdata20[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPlaylistModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPlaylistModelENDCLASS_t qt_meta_stringdata_CLASSPlaylistModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "PlaylistModel"
        QT_MOC_LITERAL(14, 16),  // "activeRowChanged"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 3),  // "row"
        QT_MOC_LITERAL(36, 6),  // "manual"
        QT_MOC_LITERAL(43, 13),  // "startPlayback"
        QT_MOC_LITERAL(57, 16),  // "needSelectionFor"
        QT_MOC_LITERAL(74, 13),  // "QList<Track*>"
        QT_MOC_LITERAL(88, 11),  // "itemChanged"
        QT_MOC_LITERAL(100, 5),  // "total"
        QT_MOC_LITERAL(106, 16),  // "playlistFinished"
        QT_MOC_LITERAL(123, 8),  // "addTrack"
        QT_MOC_LITERAL(132, 6),  // "Track*"
        QT_MOC_LITERAL(139, 5),  // "track"
        QT_MOC_LITERAL(145, 9),  // "addTracks"
        QT_MOC_LITERAL(155, 9),  // "newTracks"
        QT_MOC_LITERAL(165, 5),  // "clear"
        QT_MOC_LITERAL(171, 12),  // "skipBackward"
        QT_MOC_LITERAL(184, 11),  // "skipForward"
        QT_MOC_LITERAL(196, 12),  // "getNextTrack"
        QT_MOC_LITERAL(209, 12)   // "trackRemoved"
    },
    "PlaylistModel",
    "activeRowChanged",
    "",
    "row",
    "manual",
    "startPlayback",
    "needSelectionFor",
    "QList<Track*>",
    "itemChanged",
    "total",
    "playlistFinished",
    "addTrack",
    "Track*",
    "track",
    "addTracks",
    "newTracks",
    "clear",
    "skipBackward",
    "skipForward",
    "getNextTrack",
    "trackRemoved"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPlaylistModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   80,    2, 0x06,    1 /* Public */,
       6,    1,   87,    2, 0x06,    5 /* Public */,
       8,    1,   90,    2, 0x06,    7 /* Public */,
      10,    0,   93,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   94,    2, 0x0a,   10 /* Public */,
      14,    1,   97,    2, 0x0a,   12 /* Public */,
      16,    0,  100,    2, 0x0a,   14 /* Public */,
      17,    0,  101,    2, 0x0a,   15 /* Public */,
      18,    0,  102,    2, 0x0a,   16 /* Public */,
      19,    0,  103,    2, 0x0a,   17 /* Public */,
      20,    0,  104,    2, 0x0a,   18 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 7,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 12,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlaylistModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSPlaylistModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPlaylistModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPlaylistModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlaylistModel, std::true_type>,
        // method 'activeRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'needSelectionFor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<Track*>, std::false_type>,
        // method 'itemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'playlistFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addTrack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Track *, std::false_type>,
        // method 'addTracks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<Track*>, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'skipBackward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'skipForward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getNextTrack'
        QtPrivate::TypeAndForceComplete<Track *, std::false_type>,
        // method 'trackRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PlaylistModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaylistModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activeRowChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 1: _t->needSelectionFor((*reinterpret_cast< std::add_pointer_t<QList<Track*>>>(_a[1]))); break;
        case 2: _t->itemChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->playlistFinished(); break;
        case 4: _t->addTrack((*reinterpret_cast< std::add_pointer_t<Track*>>(_a[1]))); break;
        case 5: _t->addTracks((*reinterpret_cast< std::add_pointer_t<QList<Track*>>>(_a[1]))); break;
        case 6: _t->clear(); break;
        case 7: _t->skipBackward(); break;
        case 8: _t->skipForward(); break;
        case 9: { Track* _r = _t->getNextTrack();
            if (_a[0]) *reinterpret_cast< Track**>(_a[0]) = std::move(_r); }  break;
        case 10: _t->trackRemoved(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<Track*> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Track* >(); break;
            }
            break;
        case 5:
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
            using _t = void (PlaylistModel::*)(int , bool , bool );
            if (_t _q_method = &PlaylistModel::activeRowChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlaylistModel::*)(QList<Track*> );
            if (_t _q_method = &PlaylistModel::needSelectionFor; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlaylistModel::*)(int );
            if (_t _q_method = &PlaylistModel::itemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlaylistModel::*)();
            if (_t _q_method = &PlaylistModel::playlistFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *PlaylistModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPlaylistModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int PlaylistModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void PlaylistModel::activeRowChanged(int _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlaylistModel::needSelectionFor(QList<Track*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlaylistModel::itemChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlaylistModel::playlistFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
