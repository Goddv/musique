/****************************************************************************
** Meta object code from reading C++ file 'cachedhttp.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lib/http/src/cachedhttp.h"
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
#error "The header file 'cachedhttp.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSCachedHttpReplyENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSCachedHttpReplyENDCLASS = QtMocHelpers::stringData(
    "CachedHttpReply",
    "emitSignals",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCachedHttpReplyENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[16];
    char stringdata1[12];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCachedHttpReplyENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCachedHttpReplyENDCLASS_t qt_meta_stringdata_CLASSCachedHttpReplyENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "CachedHttpReply"
        QT_MOC_LITERAL(16, 11),  // "emitSignals"
        QT_MOC_LITERAL(28, 0)   // ""
    },
    "CachedHttpReply",
    "emitSignals",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCachedHttpReplyENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject CachedHttpReply::staticMetaObject = { {
    QMetaObject::SuperData::link<HttpReply::staticMetaObject>(),
    qt_meta_stringdata_CLASSCachedHttpReplyENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCachedHttpReplyENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCachedHttpReplyENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CachedHttpReply, std::true_type>,
        // method 'emitSignals'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CachedHttpReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CachedHttpReply *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->emitSignals(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *CachedHttpReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CachedHttpReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCachedHttpReplyENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return HttpReply::qt_metacast(_clname);
}

int CachedHttpReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HttpReply::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSWrappedHttpReplyENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSWrappedHttpReplyENDCLASS = QtMocHelpers::stringData(
    "WrappedHttpReply",
    "originFinished",
    "",
    "HttpReply",
    "reply"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWrappedHttpReplyENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[17];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWrappedHttpReplyENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWrappedHttpReplyENDCLASS_t qt_meta_stringdata_CLASSWrappedHttpReplyENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "WrappedHttpReply"
        QT_MOC_LITERAL(17, 14),  // "originFinished"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 9),  // "HttpReply"
        QT_MOC_LITERAL(43, 5)   // "reply"
    },
    "WrappedHttpReply",
    "originFinished",
    "",
    "HttpReply",
    "reply"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWrappedHttpReplyENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject WrappedHttpReply::staticMetaObject = { {
    QMetaObject::SuperData::link<HttpReply::staticMetaObject>(),
    qt_meta_stringdata_CLASSWrappedHttpReplyENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWrappedHttpReplyENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWrappedHttpReplyENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WrappedHttpReply, std::true_type>,
        // method 'originFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const HttpReply &, std::false_type>
    >,
    nullptr
} };

void WrappedHttpReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WrappedHttpReply *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->originFinished((*reinterpret_cast< std::add_pointer_t<HttpReply>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *WrappedHttpReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WrappedHttpReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWrappedHttpReplyENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return HttpReply::qt_metacast(_clname);
}

int WrappedHttpReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HttpReply::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
