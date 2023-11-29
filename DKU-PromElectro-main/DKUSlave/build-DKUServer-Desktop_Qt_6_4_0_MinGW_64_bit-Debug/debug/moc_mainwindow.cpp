/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DKUServer/mainwindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[46];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[15];
    char stringdata5[15];
    char stringdata6[19];
    char stringdata7[14];
    char stringdata8[22];
    char stringdata9[17];
    char stringdata10[28];
    char stringdata11[7];
    char stringdata12[19];
    char stringdata13[23];
    char stringdata14[16];
    char stringdata15[6];
    char stringdata16[36];
    char stringdata17[10];
    char stringdata18[23];
    char stringdata19[18];
    char stringdata20[17];
    char stringdata21[18];
    char stringdata22[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 15),  // "on_Speed_Change"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 4),  // "text"
        QT_MOC_LITERAL(33, 14),  // "on_Axis_Change"
        QT_MOC_LITERAL(48, 14),  // "on_r32_Request"
        QT_MOC_LITERAL(63, 18),  // "on_connect_clicked"
        QT_MOC_LITERAL(82, 13),  // "on_timer_tick"
        QT_MOC_LITERAL(96, 21),  // "on_initialize_clicked"
        QT_MOC_LITERAL(118, 16),  // "on_event_occured"
        QT_MOC_LITERAL(135, 27),  // "std::shared_ptr<event_base>"
        QT_MOC_LITERAL(163, 6),  // "e_data"
        QT_MOC_LITERAL(170, 18),  // "on_script_finished"
        QT_MOC_LITERAL(189, 22),  // "on_choose_file_clicked"
        QT_MOC_LITERAL(212, 15),  // "on_axel_passing"
        QT_MOC_LITERAL(228, 5),  // "speed"
        QT_MOC_LITERAL(234, 35),  // "train_passing_event::directio..."
        QT_MOC_LITERAL(270, 9),  // "direction"
        QT_MOC_LITERAL(280, 22),  // "on_train_pass_finished"
        QT_MOC_LITERAL(303, 17),  // "wheel_zone1_enter"
        QT_MOC_LITERAL(321, 16),  // "wheel_zone1_exit"
        QT_MOC_LITERAL(338, 17),  // "wheel_zone0_enter"
        QT_MOC_LITERAL(356, 16)   // "wheel_zone0_exit"
    },
    "MainWindow",
    "on_Speed_Change",
    "",
    "text",
    "on_Axis_Change",
    "on_r32_Request",
    "on_connect_clicked",
    "on_timer_tick",
    "on_initialize_clicked",
    "on_event_occured",
    "std::shared_ptr<event_base>",
    "e_data",
    "on_script_finished",
    "on_choose_file_clicked",
    "on_axel_passing",
    "speed",
    "train_passing_event::direction_type",
    "direction",
    "on_train_pass_finished",
    "wheel_zone1_enter",
    "wheel_zone1_exit",
    "wheel_zone0_enter",
    "wheel_zone0_exit"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x08,    1 /* Private */,
       4,    1,  107,    2, 0x08,    3 /* Private */,
       5,    0,  110,    2, 0x08,    5 /* Private */,
       6,    0,  111,    2, 0x08,    6 /* Private */,
       7,    0,  112,    2, 0x08,    7 /* Private */,
       8,    0,  113,    2, 0x08,    8 /* Private */,
       9,    1,  114,    2, 0x08,    9 /* Private */,
      12,    0,  117,    2, 0x08,   11 /* Private */,
      13,    0,  118,    2, 0x08,   12 /* Private */,
      14,    2,  119,    2, 0x08,   13 /* Private */,
      18,    0,  124,    2, 0x08,   16 /* Private */,
      19,    0,  125,    2, 0x08,   17 /* Private */,
      20,    0,  126,    2, 0x08,   18 /* Private */,
      21,    0,  127,    2, 0x08,   19 /* Private */,
      22,    0,  128,    2, 0x08,   20 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, 0x80000000 | 16,   15,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_Speed_Change'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_Axis_Change'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_r32_Request'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_connect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_timer_tick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_initialize_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_event_occured'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<event_base>, std::false_type>,
        // method 'on_script_finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_choose_file_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_axel_passing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<train_passing_event::direction_type, std::false_type>,
        // method 'on_train_pass_finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wheel_zone1_enter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wheel_zone1_exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wheel_zone0_enter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wheel_zone0_exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Speed_Change((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->on_Axis_Change((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_r32_Request(); break;
        case 3: _t->on_connect_clicked(); break;
        case 4: _t->on_timer_tick(); break;
        case 5: _t->on_initialize_clicked(); break;
        case 6: _t->on_event_occured((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<event_base>>>(_a[1]))); break;
        case 7: _t->on_script_finished(); break;
        case 8: _t->on_choose_file_clicked(); break;
        case 9: _t->on_axel_passing((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<train_passing_event::direction_type>>(_a[2]))); break;
        case 10: _t->on_train_pass_finished(); break;
        case 11: _t->wheel_zone1_enter(); break;
        case 12: _t->wheel_zone1_exit(); break;
        case 13: _t->wheel_zone0_enter(); break;
        case 14: _t->wheel_zone0_exit(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
