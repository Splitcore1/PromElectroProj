/****************************************************************************
** Meta object code from reading C++ file 'train_passing_compiler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DKUServer/train_passing_compiler.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'train_passing_compiler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_train_passing_compiler_t {
    uint offsetsAndSizes[32];
    char stringdata0[23];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[36];
    char stringdata5[10];
    char stringdata6[20];
    char stringdata7[18];
    char stringdata8[17];
    char stringdata9[18];
    char stringdata10[17];
    char stringdata11[16];
    char stringdata12[16];
    char stringdata13[10];
    char stringdata14[2];
    char stringdata15[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_train_passing_compiler_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_train_passing_compiler_t qt_meta_stringdata_train_passing_compiler = {
    {
        QT_MOC_LITERAL(0, 22),  // "train_passing_compiler"
        QT_MOC_LITERAL(23, 11),  // "axel_passed"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 5),  // "speed"
        QT_MOC_LITERAL(42, 35),  // "train_passing_event::directio..."
        QT_MOC_LITERAL(78, 9),  // "direction"
        QT_MOC_LITERAL(88, 19),  // "train_pass_finished"
        QT_MOC_LITERAL(108, 17),  // "wheel_zone1_enter"
        QT_MOC_LITERAL(126, 16),  // "wheel_zone1_exit"
        QT_MOC_LITERAL(143, 17),  // "wheel_zone0_enter"
        QT_MOC_LITERAL(161, 16),  // "wheel_zone0_exit"
        QT_MOC_LITERAL(178, 15),  // "on_timer_finish"
        QT_MOC_LITERAL(194, 15),  // "on_zone_passing"
        QT_MOC_LITERAL(210, 9),  // "curr_zone"
        QT_MOC_LITERAL(220, 1),  // "a"
        QT_MOC_LITERAL(222, 8)   // "entering"
    },
    "train_passing_compiler",
    "axel_passed",
    "",
    "speed",
    "train_passing_event::direction_type",
    "direction",
    "train_pass_finished",
    "wheel_zone1_enter",
    "wheel_zone1_exit",
    "wheel_zone0_enter",
    "wheel_zone0_exit",
    "on_timer_finish",
    "on_zone_passing",
    "curr_zone",
    "a",
    "entering"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_train_passing_compiler[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x06,    1 /* Public */,
       6,    0,   67,    2, 0x06,    4 /* Public */,
       7,    0,   68,    2, 0x06,    5 /* Public */,
       8,    0,   69,    2, 0x06,    6 /* Public */,
       9,    0,   70,    2, 0x06,    7 /* Public */,
      10,    0,   71,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,   72,    2, 0x08,    9 /* Private */,
      12,    3,   73,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Float, QMetaType::Bool,   13,   14,   15,

       0        // eod
};

Q_CONSTINIT const QMetaObject train_passing_compiler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_train_passing_compiler.offsetsAndSizes,
    qt_meta_data_train_passing_compiler,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_train_passing_compiler_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<train_passing_compiler, std::true_type>,
        // method 'axel_passed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<train_passing_event::direction_type, std::false_type>,
        // method 'train_pass_finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wheel_zone1_enter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wheel_zone1_exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wheel_zone0_enter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wheel_zone0_exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_timer_finish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_zone_passing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void train_passing_compiler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<train_passing_compiler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->axel_passed((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<train_passing_event::direction_type>>(_a[2]))); break;
        case 1: _t->train_pass_finished(); break;
        case 2: _t->wheel_zone1_enter(); break;
        case 3: _t->wheel_zone1_exit(); break;
        case 4: _t->wheel_zone0_enter(); break;
        case 5: _t->wheel_zone0_exit(); break;
        case 6: _t->on_timer_finish(); break;
        case 7: _t->on_zone_passing((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (train_passing_compiler::*)(float , train_passing_event::direction_type );
            if (_t _q_method = &train_passing_compiler::axel_passed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (train_passing_compiler::*)();
            if (_t _q_method = &train_passing_compiler::train_pass_finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (train_passing_compiler::*)();
            if (_t _q_method = &train_passing_compiler::wheel_zone1_enter; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (train_passing_compiler::*)();
            if (_t _q_method = &train_passing_compiler::wheel_zone1_exit; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (train_passing_compiler::*)();
            if (_t _q_method = &train_passing_compiler::wheel_zone0_enter; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (train_passing_compiler::*)();
            if (_t _q_method = &train_passing_compiler::wheel_zone0_exit; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *train_passing_compiler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *train_passing_compiler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_train_passing_compiler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int train_passing_compiler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void train_passing_compiler::axel_passed(float _t1, train_passing_event::direction_type _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void train_passing_compiler::train_pass_finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void train_passing_compiler::wheel_zone1_enter()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void train_passing_compiler::wheel_zone1_exit()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void train_passing_compiler::wheel_zone0_enter()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void train_passing_compiler::wheel_zone0_exit()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
