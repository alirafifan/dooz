/****************************************************************************
** Meta object code from reading C++ file 'dooz.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dooz.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dooz.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
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
struct qt_meta_stringdata_CLASSdoozENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdoozENDCLASS = QtMocHelpers::stringData(
    "dooz",
    "choose_home0",
    "",
    "choose_home1",
    "choose_home2",
    "choose_home3",
    "choose_home4",
    "choose_home5",
    "choose_home6",
    "choose_home7",
    "choose_home8"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdoozENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    0,   69,    2, 0x0a,    2 /* Public */,
       4,    0,   70,    2, 0x0a,    3 /* Public */,
       5,    0,   71,    2, 0x0a,    4 /* Public */,
       6,    0,   72,    2, 0x0a,    5 /* Public */,
       7,    0,   73,    2, 0x0a,    6 /* Public */,
       8,    0,   74,    2, 0x0a,    7 /* Public */,
       9,    0,   75,    2, 0x0a,    8 /* Public */,
      10,    0,   76,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject dooz::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSdoozENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdoozENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdoozENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<dooz, std::true_type>,
        // method 'choose_home0'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_home1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_home2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_home3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_home4'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_home5'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_home6'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_home7'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_home8'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dooz::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dooz *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->choose_home0(); break;
        case 1: _t->choose_home1(); break;
        case 2: _t->choose_home2(); break;
        case 3: _t->choose_home3(); break;
        case 4: _t->choose_home4(); break;
        case 5: _t->choose_home5(); break;
        case 6: _t->choose_home6(); break;
        case 7: _t->choose_home7(); break;
        case 8: _t->choose_home8(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *dooz::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dooz::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdoozENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int dooz::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
