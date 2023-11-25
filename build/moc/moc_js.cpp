/****************************************************************************
** Meta object code from reading C++ file 'js.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lib/js/js.h"
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
#error "The header file 'js.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSJSTimerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSJSTimerENDCLASS = QtMocHelpers::stringData(
    "JSTimer",
    "clearTimeout",
    "",
    "QJSValue",
    "id",
    "setTimeout",
    "callback",
    "delayTime",
    "args",
    "parent"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSJSTimerENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[8];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[3];
    char stringdata5[11];
    char stringdata6[9];
    char stringdata7[10];
    char stringdata8[5];
    char stringdata9[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSJSTimerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSJSTimerENDCLASS_t qt_meta_stringdata_CLASSJSTimerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "JSTimer"
        QT_MOC_LITERAL(8, 12),  // "clearTimeout"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 8),  // "QJSValue"
        QT_MOC_LITERAL(31, 2),  // "id"
        QT_MOC_LITERAL(34, 10),  // "setTimeout"
        QT_MOC_LITERAL(45, 8),  // "callback"
        QT_MOC_LITERAL(54, 9),  // "delayTime"
        QT_MOC_LITERAL(64, 4),  // "args"
        QT_MOC_LITERAL(69, 6)   // "parent"
    },
    "JSTimer",
    "clearTimeout",
    "",
    "QJSValue",
    "id",
    "setTimeout",
    "callback",
    "delayTime",
    "args",
    "parent"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSJSTimerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,   40, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x02,    1 /* Public */,
       5,    3,   29,    2, 0x02,    3 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    6,    7,    8,

 // constructors: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    9,
    0x80000000 | 2,

 // constructors: name, argc, parameters, tag, flags, initial metatype offsets
       0,    1,   36,    2, 0x0e,    7 /* Public */,
       0,    0,   39,    2, 0x2e,    8 /* Public | MethodCloned */,

       0        // eod
};

Q_CONSTINIT const QMetaObject JSTimer::staticMetaObject = { {
    QMetaObject::SuperData::link<QTimer::staticMetaObject>(),
    qt_meta_stringdata_CLASSJSTimerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSJSTimerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSJSTimerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<JSTimer, std::true_type>,
        // method 'clearTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJSValue, std::false_type>,
        // method 'setTimeout'
        QtPrivate::TypeAndForceComplete<QJSValue, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJSValue, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJSValue, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJSValue, std::false_type>,
        // constructor 'JSTimer'
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void JSTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { JSTimer *_r = new JSTimer((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { JSTimer *_r = new JSTimer();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::ConstructInPlace) {
        switch (_id) {
        case 0: { new (_a[0]) JSTimer((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); } break;
        case 1: { new (_a[0]) JSTimer(); } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JSTimer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clearTimeout((*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[1]))); break;
        case 1: { QJSValue _r = _t->setTimeout((*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        }
    }
}

const QMetaObject *JSTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JSTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSJSTimerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QTimer::qt_metacast(_clname);
}

int JSTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTimer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSJSENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSJSENDCLASS = QtMocHelpers::stringData(
    "JS",
    "initialized",
    "",
    "initFailed",
    "message"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSJSENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[3];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSJSENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSJSENDCLASS_t qt_meta_stringdata_CLASSJSENDCLASS = {
    {
        QT_MOC_LITERAL(0, 2),  // "JS"
        QT_MOC_LITERAL(3, 11),  // "initialized"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 10),  // "initFailed"
        QT_MOC_LITERAL(27, 7)   // "message"
    },
    "JS",
    "initialized",
    "",
    "initFailed",
    "message"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSJSENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    1 /* Public */,
       3,    1,   27,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject JS::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSJSENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSJSENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSJSENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<JS, std::true_type>,
        // method 'initialized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void JS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JS *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initialized(); break;
        case 1: _t->initFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JS::*)();
            if (_t _q_method = &JS::initialized; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JS::*)(QString );
            if (_t _q_method = &JS::initFailed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *JS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSJSENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void JS::initialized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void JS::initFailed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
