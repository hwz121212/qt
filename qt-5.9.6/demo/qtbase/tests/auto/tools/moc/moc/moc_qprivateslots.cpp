/****************************************************************************
** Meta object code from reading C++ file 'qprivateslots.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qprivateslots.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprivateslots.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestQPrivateSlots_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestQPrivateSlots_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestQPrivateSlots_t qt_meta_stringdata_TestQPrivateSlots = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TestQPrivateSlots"
QT_MOC_LITERAL(1, 18, 14), // "_q_privateslot"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7) // "method1"

    },
    "TestQPrivateSlots\0_q_privateslot\0\0"
    "method1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestQPrivateSlots[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x00 /* Private */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void TestQPrivateSlots::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestQPrivateSlots *_t = static_cast<TestQPrivateSlots *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d->_q_privateslot(); break;
        case 1: _t->method1(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TestQPrivateSlots::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestQPrivateSlots.data,
      qt_meta_data_TestQPrivateSlots,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TestQPrivateSlots::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestQPrivateSlots::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestQPrivateSlots.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestQPrivateSlots::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
