/****************************************************************************
** Meta object code from reading C++ file 'choosefolderview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/choosefolderview.h"
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
#error "The header file 'choosefolderview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSChooseFolderViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSChooseFolderViewENDCLASS = QtMocHelpers::stringData(
    "ChooseFolderView",
    "locationChanged",
    "",
    "dir",
    "chooseFolder",
    "systemDirChosen",
    "iTunesDirChosen",
    "folderChosen",
    "folder"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSChooseFolderViewENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[17];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[13];
    char stringdata5[16];
    char stringdata6[16];
    char stringdata7[13];
    char stringdata8[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSChooseFolderViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSChooseFolderViewENDCLASS_t qt_meta_stringdata_CLASSChooseFolderViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "ChooseFolderView"
        QT_MOC_LITERAL(17, 15),  // "locationChanged"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 3),  // "dir"
        QT_MOC_LITERAL(38, 12),  // "chooseFolder"
        QT_MOC_LITERAL(51, 15),  // "systemDirChosen"
        QT_MOC_LITERAL(67, 15),  // "iTunesDirChosen"
        QT_MOC_LITERAL(83, 12),  // "folderChosen"
        QT_MOC_LITERAL(96, 6)   // "folder"
    },
    "ChooseFolderView",
    "locationChanged",
    "",
    "dir",
    "chooseFolder",
    "systemDirChosen",
    "iTunesDirChosen",
    "folderChosen",
    "folder"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSChooseFolderViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   47,    2, 0x08,    3 /* Private */,
       5,    0,   48,    2, 0x08,    4 /* Private */,
       6,    0,   49,    2, 0x08,    5 /* Private */,
       7,    1,   50,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject ChooseFolderView::staticMetaObject = { {
    QMetaObject::SuperData::link<View::staticMetaObject>(),
    qt_meta_stringdata_CLASSChooseFolderViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSChooseFolderViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSChooseFolderViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChooseFolderView, std::true_type>,
        // method 'locationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'chooseFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'systemDirChosen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'iTunesDirChosen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'folderChosen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void ChooseFolderView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChooseFolderView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->locationChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->chooseFolder(); break;
        case 2: _t->systemDirChosen(); break;
        case 3: _t->iTunesDirChosen(); break;
        case 4: _t->folderChosen((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChooseFolderView::*)(QString );
            if (_t _q_method = &ChooseFolderView::locationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *ChooseFolderView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChooseFolderView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSChooseFolderViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return View::qt_metacast(_clname);
}

int ChooseFolderView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ChooseFolderView::locationChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
