/****************************************************************************
** Meta object code from reading C++ file 'mediaview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/mediaview.h"
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
#error "The header file 'mediaview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMediaViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMediaViewENDCLASS = QtMocHelpers::stringData(
    "MediaView",
    "appear",
    "",
    "disappear",
    "playPause",
    "trackRemoved",
    "search",
    "query",
    "activeRowChanged",
    "row",
    "manual",
    "startPlayback",
    "stateChanged",
    "Media::State",
    "newState",
    "handleError",
    "message",
    "playlistFinished",
    "playbackFinished",
    "trackFinished",
    "aboutToFinish",
    "currentSourceChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMediaViewENDCLASS_t {
    uint offsetsAndSizes[44];
    char stringdata0[10];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[10];
    char stringdata5[13];
    char stringdata6[7];
    char stringdata7[6];
    char stringdata8[17];
    char stringdata9[4];
    char stringdata10[7];
    char stringdata11[14];
    char stringdata12[13];
    char stringdata13[13];
    char stringdata14[9];
    char stringdata15[12];
    char stringdata16[8];
    char stringdata17[17];
    char stringdata18[17];
    char stringdata19[14];
    char stringdata20[14];
    char stringdata21[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMediaViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMediaViewENDCLASS_t qt_meta_stringdata_CLASSMediaViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "MediaView"
        QT_MOC_LITERAL(10, 6),  // "appear"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 9),  // "disappear"
        QT_MOC_LITERAL(28, 9),  // "playPause"
        QT_MOC_LITERAL(38, 12),  // "trackRemoved"
        QT_MOC_LITERAL(51, 6),  // "search"
        QT_MOC_LITERAL(58, 5),  // "query"
        QT_MOC_LITERAL(64, 16),  // "activeRowChanged"
        QT_MOC_LITERAL(81, 3),  // "row"
        QT_MOC_LITERAL(85, 6),  // "manual"
        QT_MOC_LITERAL(92, 13),  // "startPlayback"
        QT_MOC_LITERAL(106, 12),  // "stateChanged"
        QT_MOC_LITERAL(119, 12),  // "Media::State"
        QT_MOC_LITERAL(132, 8),  // "newState"
        QT_MOC_LITERAL(141, 11),  // "handleError"
        QT_MOC_LITERAL(153, 7),  // "message"
        QT_MOC_LITERAL(161, 16),  // "playlistFinished"
        QT_MOC_LITERAL(178, 16),  // "playbackFinished"
        QT_MOC_LITERAL(195, 13),  // "trackFinished"
        QT_MOC_LITERAL(209, 13),  // "aboutToFinish"
        QT_MOC_LITERAL(223, 20)   // "currentSourceChanged"
    },
    "MediaView",
    "appear",
    "",
    "disappear",
    "playPause",
    "trackRemoved",
    "search",
    "query",
    "activeRowChanged",
    "row",
    "manual",
    "startPlayback",
    "stateChanged",
    "Media::State",
    "newState",
    "handleError",
    "message",
    "playlistFinished",
    "playbackFinished",
    "trackFinished",
    "aboutToFinish",
    "currentSourceChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMediaViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x0a,    1 /* Public */,
       3,    0,   93,    2, 0x0a,    2 /* Public */,
       4,    0,   94,    2, 0x0a,    3 /* Public */,
       5,    0,   95,    2, 0x0a,    4 /* Public */,
       6,    1,   96,    2, 0x0a,    5 /* Public */,
       8,    3,   99,    2, 0x08,    7 /* Private */,
      12,    1,  106,    2, 0x08,   11 /* Private */,
      15,    1,  109,    2, 0x08,   13 /* Private */,
      17,    0,  112,    2, 0x08,   15 /* Private */,
      18,    0,  113,    2, 0x08,   16 /* Private */,
      19,    0,  114,    2, 0x08,   17 /* Private */,
      20,    0,  115,    2, 0x08,   18 /* Private */,
      21,    0,  116,    2, 0x08,   19 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MediaView::staticMetaObject = { {
    QMetaObject::SuperData::link<View::staticMetaObject>(),
    qt_meta_stringdata_CLASSMediaViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMediaViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMediaViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MediaView, std::true_type>,
        // method 'appear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disappear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playPause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'trackRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'search'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'activeRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Media::State, std::false_type>,
        // method 'handleError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'playlistFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playbackFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'trackFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aboutToFinish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentSourceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MediaView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MediaView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->appear(); break;
        case 1: _t->disappear(); break;
        case 2: _t->playPause(); break;
        case 3: _t->trackRemoved(); break;
        case 4: _t->search((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->activeRowChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 6: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<Media::State>>(_a[1]))); break;
        case 7: _t->handleError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->playlistFinished(); break;
        case 9: _t->playbackFinished(); break;
        case 10: _t->trackFinished(); break;
        case 11: _t->aboutToFinish(); break;
        case 12: _t->currentSourceChanged(); break;
        default: ;
        }
    }
}

const QMetaObject *MediaView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediaView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMediaViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return View::qt_metacast(_clname);
}

int MediaView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
