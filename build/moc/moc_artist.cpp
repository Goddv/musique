/****************************************************************************
** Meta object code from reading C++ file 'artist.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/model/artist.h"
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
#error "The header file 'artist.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSArtistENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSArtistENDCLASS = QtMocHelpers::stringData(
    "Artist",
    "gotInfo",
    "",
    "gotPhoto",
    "gotCorrectName",
    "correctName",
    "fetchInfo",
    "setPhoto",
    "bytes",
    "fetchLastFmSearch",
    "parseLastFmSearch",
    "fetchDiscogsInfo",
    "fetchLastFmInfo",
    "parseLastFmInfo",
    "parseLastFmRedirectedName",
    "QNetworkReply*",
    "reply"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSArtistENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[7];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[15];
    char stringdata5[12];
    char stringdata6[10];
    char stringdata7[9];
    char stringdata8[6];
    char stringdata9[18];
    char stringdata10[18];
    char stringdata11[17];
    char stringdata12[16];
    char stringdata13[16];
    char stringdata14[26];
    char stringdata15[15];
    char stringdata16[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSArtistENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSArtistENDCLASS_t qt_meta_stringdata_CLASSArtistENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Artist"
        QT_MOC_LITERAL(7, 7),  // "gotInfo"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 8),  // "gotPhoto"
        QT_MOC_LITERAL(25, 14),  // "gotCorrectName"
        QT_MOC_LITERAL(40, 11),  // "correctName"
        QT_MOC_LITERAL(52, 9),  // "fetchInfo"
        QT_MOC_LITERAL(62, 8),  // "setPhoto"
        QT_MOC_LITERAL(71, 5),  // "bytes"
        QT_MOC_LITERAL(77, 17),  // "fetchLastFmSearch"
        QT_MOC_LITERAL(95, 17),  // "parseLastFmSearch"
        QT_MOC_LITERAL(113, 16),  // "fetchDiscogsInfo"
        QT_MOC_LITERAL(130, 15),  // "fetchLastFmInfo"
        QT_MOC_LITERAL(146, 15),  // "parseLastFmInfo"
        QT_MOC_LITERAL(162, 25),  // "parseLastFmRedirectedName"
        QT_MOC_LITERAL(188, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(203, 5)   // "reply"
    },
    "Artist",
    "gotInfo",
    "",
    "gotPhoto",
    "gotCorrectName",
    "correctName",
    "fetchInfo",
    "setPhoto",
    "bytes",
    "fetchLastFmSearch",
    "parseLastFmSearch",
    "fetchDiscogsInfo",
    "fetchLastFmInfo",
    "parseLastFmInfo",
    "parseLastFmRedirectedName",
    "QNetworkReply*",
    "reply"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSArtistENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,
       3,    0,   81,    2, 0x06,    2 /* Public */,
       4,    1,   82,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   85,    2, 0x0a,    5 /* Public */,
       7,    1,   86,    2, 0x0a,    6 /* Public */,
       9,    0,   89,    2, 0x08,    8 /* Private */,
      10,    1,   90,    2, 0x08,    9 /* Private */,
      11,    0,   93,    2, 0x08,   11 /* Private */,
      12,    0,   94,    2, 0x08,   12 /* Private */,
      13,    1,   95,    2, 0x08,   13 /* Private */,
      14,    1,   98,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    8,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject Artist::staticMetaObject = { {
    QMetaObject::SuperData::link<Item::staticMetaObject>(),
    qt_meta_stringdata_CLASSArtistENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSArtistENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSArtistENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Artist, std::true_type>,
        // method 'gotInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gotPhoto'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gotCorrectName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'fetchInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setPhoto'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'fetchLastFmSearch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parseLastFmSearch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'fetchDiscogsInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
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

void Artist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Artist *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->gotInfo(); break;
        case 1: _t->gotPhoto(); break;
        case 2: _t->gotCorrectName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->fetchInfo(); break;
        case 4: _t->setPhoto((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 5: _t->fetchLastFmSearch(); break;
        case 6: _t->parseLastFmSearch((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 7: _t->fetchDiscogsInfo(); break;
        case 8: _t->fetchLastFmInfo(); break;
        case 9: _t->parseLastFmInfo((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 10: _t->parseLastFmRedirectedName((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
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
            using _t = void (Artist::*)();
            if (_t _q_method = &Artist::gotInfo; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Artist::*)();
            if (_t _q_method = &Artist::gotPhoto; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Artist::*)(QString );
            if (_t _q_method = &Artist::gotCorrectName; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *Artist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Artist::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSArtistENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Item::qt_metacast(_clname);
}

int Artist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Item::qt_metacall(_c, _id, _a);
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
void Artist::gotInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Artist::gotPhoto()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Artist::gotCorrectName(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
