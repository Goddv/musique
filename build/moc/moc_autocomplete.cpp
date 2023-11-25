/****************************************************************************
** Meta object code from reading C++ file 'autocomplete.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/autocomplete.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autocomplete.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAutoCompleteENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAutoCompleteENDCLASS = QtMocHelpers::stringData(
    "AutoComplete",
    "suggestionAccepted",
    "",
    "Suggestion*",
    "suggestion",
    "value",
    "acceptSuggestion",
    "suggest",
    "itemEntered",
    "QListWidgetItem*",
    "item",
    "currentItemChanged",
    "suggestionsReady",
    "QList<Suggestion*>",
    "suggestions",
    "adjustPosition",
    "enableItemHovering"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAutoCompleteENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[13];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[11];
    char stringdata5[6];
    char stringdata6[17];
    char stringdata7[8];
    char stringdata8[12];
    char stringdata9[17];
    char stringdata10[5];
    char stringdata11[19];
    char stringdata12[17];
    char stringdata13[19];
    char stringdata14[12];
    char stringdata15[15];
    char stringdata16[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAutoCompleteENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAutoCompleteENDCLASS_t qt_meta_stringdata_CLASSAutoCompleteENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "AutoComplete"
        QT_MOC_LITERAL(13, 18),  // "suggestionAccepted"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 11),  // "Suggestion*"
        QT_MOC_LITERAL(45, 10),  // "suggestion"
        QT_MOC_LITERAL(56, 5),  // "value"
        QT_MOC_LITERAL(62, 16),  // "acceptSuggestion"
        QT_MOC_LITERAL(79, 7),  // "suggest"
        QT_MOC_LITERAL(87, 11),  // "itemEntered"
        QT_MOC_LITERAL(99, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(116, 4),  // "item"
        QT_MOC_LITERAL(121, 18),  // "currentItemChanged"
        QT_MOC_LITERAL(140, 16),  // "suggestionsReady"
        QT_MOC_LITERAL(157, 18),  // "QList<Suggestion*>"
        QT_MOC_LITERAL(176, 11),  // "suggestions"
        QT_MOC_LITERAL(188, 14),  // "adjustPosition"
        QT_MOC_LITERAL(203, 18)   // "enableItemHovering"
    },
    "AutoComplete",
    "suggestionAccepted",
    "",
    "Suggestion*",
    "suggestion",
    "value",
    "acceptSuggestion",
    "suggest",
    "itemEntered",
    "QListWidgetItem*",
    "item",
    "currentItemChanged",
    "suggestionsReady",
    "QList<Suggestion*>",
    "suggestions",
    "adjustPosition",
    "enableItemHovering"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAutoCompleteENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       1,    1,   71,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   74,    2, 0x08,    5 /* Private */,
       7,    0,   75,    2, 0x08,    6 /* Private */,
       8,    1,   76,    2, 0x08,    7 /* Private */,
      11,    1,   79,    2, 0x08,    9 /* Private */,
      12,    1,   82,    2, 0x08,   11 /* Private */,
      15,    0,   85,    2, 0x08,   13 /* Private */,
      16,    0,   86,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AutoComplete::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSAutoCompleteENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAutoCompleteENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAutoCompleteENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AutoComplete, std::true_type>,
        // method 'suggestionAccepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Suggestion *, std::false_type>,
        // method 'suggestionAccepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'acceptSuggestion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'suggest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'itemEntered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'currentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'suggestionsReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<Suggestion*> &, std::false_type>,
        // method 'adjustPosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableItemHovering'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AutoComplete::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutoComplete *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->suggestionAccepted((*reinterpret_cast< std::add_pointer_t<Suggestion*>>(_a[1]))); break;
        case 1: _t->suggestionAccepted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->acceptSuggestion(); break;
        case 3: _t->suggest(); break;
        case 4: _t->itemEntered((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 5: _t->currentItemChanged((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 6: _t->suggestionsReady((*reinterpret_cast< std::add_pointer_t<QList<Suggestion*>>>(_a[1]))); break;
        case 7: _t->adjustPosition(); break;
        case 8: _t->enableItemHovering(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AutoComplete::*)(Suggestion * );
            if (_t _q_method = &AutoComplete::suggestionAccepted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AutoComplete::*)(const QString & );
            if (_t _q_method = &AutoComplete::suggestionAccepted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *AutoComplete::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoComplete::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAutoCompleteENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AutoComplete::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void AutoComplete::suggestionAccepted(Suggestion * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AutoComplete::suggestionAccepted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
