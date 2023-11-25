/****************************************************************************
** Meta object code from reading C++ file 'jsresult.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lib/js/jsresult.h"
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
#error "The header file 'jsresult.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSJSResultENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSJSResultENDCLASS = QtMocHelpers::stringData(
    "JSResult",
    "json",
    "",
    "doc",
    "string",
    "data",
    "error",
    "message",
    "setData",
    "QJSValue",
    "value",
    "setError"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSJSResultENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[9];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[7];
    char stringdata5[5];
    char stringdata6[6];
    char stringdata7[8];
    char stringdata8[8];
    char stringdata9[9];
    char stringdata10[6];
    char stringdata11[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSJSResultENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSJSResultENDCLASS_t qt_meta_stringdata_CLASSJSResultENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "JSResult"
        QT_MOC_LITERAL(9, 4),  // "json"
        QT_MOC_LITERAL(14, 0),  // ""
        QT_MOC_LITERAL(15, 3),  // "doc"
        QT_MOC_LITERAL(19, 6),  // "string"
        QT_MOC_LITERAL(26, 4),  // "data"
        QT_MOC_LITERAL(31, 5),  // "error"
        QT_MOC_LITERAL(37, 7),  // "message"
        QT_MOC_LITERAL(45, 7),  // "setData"
        QT_MOC_LITERAL(53, 8),  // "QJSValue"
        QT_MOC_LITERAL(62, 5),  // "value"
        QT_MOC_LITERAL(68, 8)   // "setError"
    },
    "JSResult",
    "json",
    "",
    "doc",
    "string",
    "data",
    "error",
    "message",
    "setData",
    "QJSValue",
    "value",
    "setError"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSJSResultENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       4,    1,   47,    2, 0x06,    3 /* Public */,
       6,    1,   50,    2, 0x06,    5 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   53,    2, 0x02,    7 /* Public */,
      11,    1,   56,    2, 0x02,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonDocument,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // methods: parameters
    0x80000000 | 9, 0x80000000 | 9,   10,
    0x80000000 | 9, 0x80000000 | 9,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject JSResult::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSJSResultENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSJSResultENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSJSResultENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<JSResult, std::true_type>,
        // method 'json'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        // method 'string'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setData'
        QtPrivate::TypeAndForceComplete<QJSValue, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJSValue, std::false_type>,
        // method 'setError'
        QtPrivate::TypeAndForceComplete<QJSValue, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJSValue, std::false_type>
    >,
    nullptr
} };

void JSResult::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JSResult *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->json((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 1: _t->string((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: { QJSValue _r = _t->setData((*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 4: { QJSValue _r = _t->setError((*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JSResult::*)(const QJsonDocument & );
            if (_t _q_method = &JSResult::json; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JSResult::*)(const QString & );
            if (_t _q_method = &JSResult::string; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JSResult::*)(const QString & );
            if (_t _q_method = &JSResult::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *JSResult::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JSResult::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSJSResultENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JSResult::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void JSResult::json(const QJsonDocument & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JSResult::string(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JSResult::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
