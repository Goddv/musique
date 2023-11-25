/****************************************************************************
** Meta object code from reading C++ file 'finderlistview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/finderlistview.h"
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
#error "The header file 'finderlistview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFinderListViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFinderListViewENDCLASS = QtMocHelpers::stringData(
    "FinderListView",
    "play",
    "",
    "QModelIndex",
    "index",
    "appear",
    "disappear",
    "setHoveredIndex",
    "setHoveredRow",
    "row",
    "clearHover",
    "enterPlayIconHover",
    "exitPlayIconHover",
    "refreshIndex",
    "refreshRow",
    "updatePlayIcon"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFinderListViewENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[15];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[6];
    char stringdata5[7];
    char stringdata6[10];
    char stringdata7[16];
    char stringdata8[14];
    char stringdata9[4];
    char stringdata10[11];
    char stringdata11[19];
    char stringdata12[18];
    char stringdata13[13];
    char stringdata14[11];
    char stringdata15[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFinderListViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFinderListViewENDCLASS_t qt_meta_stringdata_CLASSFinderListViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "FinderListView"
        QT_MOC_LITERAL(15, 4),  // "play"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 11),  // "QModelIndex"
        QT_MOC_LITERAL(33, 5),  // "index"
        QT_MOC_LITERAL(39, 6),  // "appear"
        QT_MOC_LITERAL(46, 9),  // "disappear"
        QT_MOC_LITERAL(56, 15),  // "setHoveredIndex"
        QT_MOC_LITERAL(72, 13),  // "setHoveredRow"
        QT_MOC_LITERAL(86, 3),  // "row"
        QT_MOC_LITERAL(90, 10),  // "clearHover"
        QT_MOC_LITERAL(101, 18),  // "enterPlayIconHover"
        QT_MOC_LITERAL(120, 17),  // "exitPlayIconHover"
        QT_MOC_LITERAL(138, 12),  // "refreshIndex"
        QT_MOC_LITERAL(151, 10),  // "refreshRow"
        QT_MOC_LITERAL(162, 14)   // "updatePlayIcon"
    },
    "FinderListView",
    "play",
    "",
    "QModelIndex",
    "index",
    "appear",
    "disappear",
    "setHoveredIndex",
    "setHoveredRow",
    "row",
    "clearHover",
    "enterPlayIconHover",
    "exitPlayIconHover",
    "refreshIndex",
    "refreshRow",
    "updatePlayIcon"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFinderListViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   83,    2, 0x0a,    3 /* Public */,
       6,    0,   84,    2, 0x0a,    4 /* Public */,
       7,    1,   85,    2, 0x0a,    5 /* Public */,
       8,    1,   88,    2, 0x0a,    7 /* Public */,
      10,    0,   91,    2, 0x0a,    9 /* Public */,
      11,    0,   92,    2, 0x0a,   10 /* Public */,
      12,    0,   93,    2, 0x0a,   11 /* Public */,
      13,    1,   94,    2, 0x0a,   12 /* Public */,
      14,    1,   97,    2, 0x0a,   14 /* Public */,
      15,    0,  100,    2, 0x0a,   16 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FinderListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QListView::staticMetaObject>(),
    qt_meta_stringdata_CLASSFinderListViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFinderListViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFinderListViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FinderListView, std::true_type>,
        // method 'play'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'appear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disappear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setHoveredIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'setHoveredRow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'clearHover'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enterPlayIconHover'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exitPlayIconHover'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refreshIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'refreshRow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updatePlayIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FinderListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FinderListView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->play((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 1: _t->appear(); break;
        case 2: _t->disappear(); break;
        case 3: _t->setHoveredIndex((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->setHoveredRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->clearHover(); break;
        case 6: _t->enterPlayIconHover(); break;
        case 7: _t->exitPlayIconHover(); break;
        case 8: _t->refreshIndex((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 9: _t->refreshRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->updatePlayIcon(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FinderListView::*)(const QModelIndex & );
            if (_t _q_method = &FinderListView::play; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *FinderListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FinderListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFinderListViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int FinderListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void FinderListView::play(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
