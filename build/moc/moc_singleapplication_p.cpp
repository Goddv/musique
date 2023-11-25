/****************************************************************************
** Meta object code from reading C++ file 'singleapplication_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lib/singleapplication/singleapplication_p.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'singleapplication_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSingleApplicationPrivateENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSingleApplicationPrivateENDCLASS = QtMocHelpers::stringData(
    "SingleApplicationPrivate",
    "slotConnectionEstablished",
    "",
    "slotDataAvailable",
    "QLocalSocket*",
    "slotClientConnectionClosed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSingleApplicationPrivateENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[25];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[14];
    char stringdata5[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSingleApplicationPrivateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSingleApplicationPrivateENDCLASS_t qt_meta_stringdata_CLASSSingleApplicationPrivateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "SingleApplicationPrivate"
        QT_MOC_LITERAL(25, 25),  // "slotConnectionEstablished"
        QT_MOC_LITERAL(51, 0),  // ""
        QT_MOC_LITERAL(52, 17),  // "slotDataAvailable"
        QT_MOC_LITERAL(70, 13),  // "QLocalSocket*"
        QT_MOC_LITERAL(84, 26)   // "slotClientConnectionClosed"
    },
    "SingleApplicationPrivate",
    "slotConnectionEstablished",
    "",
    "slotDataAvailable",
    "QLocalSocket*",
    "slotClientConnectionClosed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSingleApplicationPrivateENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x0a,    1 /* Public */,
       3,    2,   33,    2, 0x0a,    2 /* Public */,
       5,    2,   38,    2, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::UInt,    2,    2,
    QMetaType::Void, 0x80000000 | 4, QMetaType::UInt,    2,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject SingleApplicationPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSSingleApplicationPrivateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSingleApplicationPrivateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSingleApplicationPrivateENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SingleApplicationPrivate, std::true_type>,
        // method 'slotConnectionEstablished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotDataAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLocalSocket *, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'slotClientConnectionClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLocalSocket *, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>
    >,
    nullptr
} };

void SingleApplicationPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SingleApplicationPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotConnectionEstablished(); break;
        case 1: _t->slotDataAvailable((*reinterpret_cast< std::add_pointer_t<QLocalSocket*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint32>>(_a[2]))); break;
        case 2: _t->slotClientConnectionClosed((*reinterpret_cast< std::add_pointer_t<QLocalSocket*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint32>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLocalSocket* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLocalSocket* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *SingleApplicationPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SingleApplicationPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSingleApplicationPrivateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SingleApplicationPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
