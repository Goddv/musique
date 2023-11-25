/****************************************************************************
** Meta object code from reading C++ file 'album.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/model/album.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
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
#error "The header file 'album.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAlbumENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAlbumENDCLASS = QtMocHelpers::stringData(
    "Album",
    "gotInfo",
    "",
    "gotPhoto",
    "setPhoto",
    "bytes",
    "fetchLastFmSearch",
    "parseLastFmSearch",
    "fetchLastFmInfo",
    "parseLastFmInfo",
    "parseLastFmRedirectedName",
    "QNetworkReply*",
    "reply"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAlbumENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[6];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[9];
    char stringdata5[6];
    char stringdata6[18];
    char stringdata7[18];
    char stringdata8[16];
    char stringdata9[16];
    char stringdata10[26];
    char stringdata11[15];
    char stringdata12[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAlbumENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAlbumENDCLASS_t qt_meta_stringdata_CLASSAlbumENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "Album"
        QT_MOC_LITERAL(6, 7),  // "gotInfo"
        QT_MOC_LITERAL(14, 0),  // ""
        QT_MOC_LITERAL(15, 8),  // "gotPhoto"
        QT_MOC_LITERAL(24, 8),  // "setPhoto"
        QT_MOC_LITERAL(33, 5),  // "bytes"
        QT_MOC_LITERAL(39, 17),  // "fetchLastFmSearch"
        QT_MOC_LITERAL(57, 17),  // "parseLastFmSearch"
        QT_MOC_LITERAL(75, 15),  // "fetchLastFmInfo"
        QT_MOC_LITERAL(91, 15),  // "parseLastFmInfo"
        QT_MOC_LITERAL(107, 25),  // "parseLastFmRedirectedName"
        QT_MOC_LITERAL(133, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(148, 5)   // "reply"
    },
    "Album",
    "gotInfo",
    "",
    "gotPhoto",
    "setPhoto",
    "bytes",
    "fetchLastFmSearch",
    "parseLastFmSearch",
    "fetchLastFmInfo",
    "parseLastFmInfo",
    "parseLastFmRedirectedName",
    "QNetworkReply*",
    "reply"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAlbumENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   64,    2, 0x0a,    3 /* Public */,
       6,    0,   67,    2, 0x08,    5 /* Private */,
       7,    1,   68,    2, 0x08,    6 /* Private */,
       8,    0,   71,    2, 0x08,    8 /* Private */,
       9,    1,   72,    2, 0x08,    9 /* Private */,
      10,    1,   75,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject Album::staticMetaObject = { {
    QMetaObject::SuperData::link<Item::staticMetaObject>(),
    qt_meta_stringdata_CLASSAlbumENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAlbumENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAlbumENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Album, std::true_type>,
        // method 'gotInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gotPhoto'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setPhoto'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'fetchLastFmSearch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parseLastFmSearch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'fetchLastFmInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parseLastFmInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'parseLastFmRedirectedName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>
    >,
    nullptr
} };

void Album::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Album *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->gotInfo(); break;
        case 1: _t->gotPhoto(); break;
        case 2: _t->setPhoto((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 3: _t->fetchLastFmSearch(); break;
        case 4: _t->parseLastFmSearch((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 5: _t->fetchLastFmInfo(); break;
        case 6: _t->parseLastFmInfo((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 7: _t->parseLastFmRedirectedName((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Album::*)();
            if (_t _q_method = &Album::gotInfo; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Album::*)();
            if (_t _q_method = &Album::gotPhoto; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *Album::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Album::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAlbumENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Item::qt_metacast(_clname);
}

int Album::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Item::qt_metacall(_c, _id, _a);
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
void Album::gotInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Album::gotPhoto()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
