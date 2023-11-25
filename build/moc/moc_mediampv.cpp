/****************************************************************************
** Meta object code from reading C++ file 'mediampv.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lib/media/src/mpv/mediampv.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mediampv.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMediaMPVENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMediaMPVENDCLASS = QtMocHelpers::stringData(
    "MediaMPV",
    "mpvEvents",
    "",
    "onMpvEvents",
    "checkAboutToFinish",
    "position"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMediaMPVENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[9];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[19];
    char stringdata5[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMediaMPVENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMediaMPVENDCLASS_t qt_meta_stringdata_CLASSMediaMPVENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "MediaMPV"
        QT_MOC_LITERAL(9, 9),  // "mpvEvents"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 11),  // "onMpvEvents"
        QT_MOC_LITERAL(32, 18),  // "checkAboutToFinish"
        QT_MOC_LITERAL(51, 8)   // "position"
    },
    "MediaMPV",
    "mpvEvents",
    "",
    "onMpvEvents",
    "checkAboutToFinish",
    "position"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMediaMPVENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    1,   34,    2, 0x08,    3 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject MediaMPV::staticMetaObject = { {
    QMetaObject::SuperData::link<Media::staticMetaObject>(),
    qt_meta_stringdata_CLASSMediaMPVENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMediaMPVENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMediaMPVENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MediaMPV, std::true_type>,
        // method 'mpvEvents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMpvEvents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkAboutToFinish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>
    >,
    nullptr
} };

void MediaMPV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MediaMPV *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mpvEvents(); break;
        case 1: _t->onMpvEvents(); break;
        case 2: _t->checkAboutToFinish((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MediaMPV::*)();
            if (_t _q_method = &MediaMPV::mpvEvents; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MediaMPV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediaMPV::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMediaMPVENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Media::qt_metacast(_clname);
}

int MediaMPV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Media::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MediaMPV::mpvEvents()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
