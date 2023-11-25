/****************************************************************************
** Meta object code from reading C++ file 'networkhttpreply.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lib/http/src/networkhttpreply.h"
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
#error "The header file 'networkhttpreply.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSNetworkHttpReplyENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSNetworkHttpReplyENDCLASS = QtMocHelpers::stringData(
    "NetworkHttpReply",
    "replyFinished",
    "",
    "replyError",
    "QNetworkReply::NetworkError",
    "downloadProgress",
    "bytesReceived",
    "bytesTotal",
    "readTimeout"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSNetworkHttpReplyENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[17];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[28];
    char stringdata5[17];
    char stringdata6[14];
    char stringdata7[11];
    char stringdata8[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSNetworkHttpReplyENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSNetworkHttpReplyENDCLASS_t qt_meta_stringdata_CLASSNetworkHttpReplyENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "NetworkHttpReply"
        QT_MOC_LITERAL(17, 13),  // "replyFinished"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 10),  // "replyError"
        QT_MOC_LITERAL(43, 27),  // "QNetworkReply::NetworkError"
        QT_MOC_LITERAL(71, 16),  // "downloadProgress"
        QT_MOC_LITERAL(88, 13),  // "bytesReceived"
        QT_MOC_LITERAL(102, 10),  // "bytesTotal"
        QT_MOC_LITERAL(113, 11)   // "readTimeout"
    },
    "NetworkHttpReply",
    "replyFinished",
    "",
    "replyError",
    "QNetworkReply::NetworkError",
    "downloadProgress",
    "bytesReceived",
    "bytesTotal",
    "readTimeout"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSNetworkHttpReplyENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    1,   39,    2, 0x08,    2 /* Private */,
       5,    2,   42,    2, 0x08,    4 /* Private */,
       8,    0,   47,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    6,    7,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject NetworkHttpReply::staticMetaObject = { {
    QMetaObject::SuperData::link<HttpReply::staticMetaObject>(),
    qt_meta_stringdata_CLASSNetworkHttpReplyENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSNetworkHttpReplyENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSNetworkHttpReplyENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NetworkHttpReply, std::true_type>,
        // method 'replyFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'replyError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        // method 'downloadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'readTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void NetworkHttpReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetworkHttpReply *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->replyFinished(); break;
        case 1: _t->replyError((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1]))); break;
        case 2: _t->downloadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 3: _t->readTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

const QMetaObject *NetworkHttpReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkHttpReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSNetworkHttpReplyENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return HttpReply::qt_metacast(_clname);
}

int NetworkHttpReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HttpReply::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
