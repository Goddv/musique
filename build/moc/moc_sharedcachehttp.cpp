/****************************************************************************
** Meta object code from reading C++ file 'sharedcachehttp.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lib/sharedcache/sharedcachehttp.h"
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
#error "The header file 'sharedcachehttp.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSharedCacheHttpReplyENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSharedCacheHttpReplyENDCLASS = QtMocHelpers::stringData(
    "SharedCacheHttpReply",
    "data",
    "",
    "bytes",
    "error",
    "message",
    "finished",
    "HttpReply",
    "reply"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSharedCacheHttpReplyENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[21];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[6];
    char stringdata5[8];
    char stringdata6[9];
    char stringdata7[10];
    char stringdata8[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSharedCacheHttpReplyENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSharedCacheHttpReplyENDCLASS_t qt_meta_stringdata_CLASSSharedCacheHttpReplyENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "SharedCacheHttpReply"
        QT_MOC_LITERAL(21, 4),  // "data"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 5),  // "bytes"
        QT_MOC_LITERAL(33, 5),  // "error"
        QT_MOC_LITERAL(39, 7),  // "message"
        QT_MOC_LITERAL(47, 8),  // "finished"
        QT_MOC_LITERAL(56, 9),  // "HttpReply"
        QT_MOC_LITERAL(66, 5)   // "reply"
    },
    "SharedCacheHttpReply",
    "data",
    "",
    "bytes",
    "error",
    "message",
    "finished",
    "HttpReply",
    "reply"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSharedCacheHttpReplyENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,
       4,    1,   35,    2, 0x06,    3 /* Public */,
       6,    1,   38,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject SharedCacheHttpReply::staticMetaObject = { {
    QMetaObject::SuperData::link<HttpReply::staticMetaObject>(),
    qt_meta_stringdata_CLASSSharedCacheHttpReplyENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSharedCacheHttpReplyENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSharedCacheHttpReplyENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SharedCacheHttpReply, std::true_type>,
        // method 'data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const HttpReply &, std::false_type>
    >,
    nullptr
} };

void SharedCacheHttpReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SharedCacheHttpReply *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->data((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->finished((*reinterpret_cast< std::add_pointer_t<HttpReply>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SharedCacheHttpReply::*)(const QByteArray & );
            if (_t _q_method = &SharedCacheHttpReply::data; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SharedCacheHttpReply::*)(QString );
            if (_t _q_method = &SharedCacheHttpReply::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SharedCacheHttpReply::*)(const HttpReply & );
            if (_t _q_method = &SharedCacheHttpReply::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *SharedCacheHttpReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SharedCacheHttpReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSharedCacheHttpReplyENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return HttpReply::qt_metacast(_clname);
}

int SharedCacheHttpReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HttpReply::qt_metacall(_c, _id, _a);
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
void SharedCacheHttpReply::data(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SharedCacheHttpReply::error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SharedCacheHttpReply::finished(const HttpReply & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
