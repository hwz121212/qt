/****************************************************************************
** Meta object code from reading C++ file 'object.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../object.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'object.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Object_t {
    QByteArrayData data[22];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Object_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Object_t qt_meta_stringdata_Object = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Object"
QT_MOC_LITERAL(1, 7, 7), // "signal0"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 7), // "signal1"
QT_MOC_LITERAL(4, 24, 7), // "signal2"
QT_MOC_LITERAL(5, 32, 7), // "signal3"
QT_MOC_LITERAL(6, 40, 7), // "signal4"
QT_MOC_LITERAL(7, 48, 7), // "signal5"
QT_MOC_LITERAL(8, 56, 7), // "signal6"
QT_MOC_LITERAL(9, 64, 7), // "signal7"
QT_MOC_LITERAL(10, 72, 7), // "signal8"
QT_MOC_LITERAL(11, 80, 7), // "signal9"
QT_MOC_LITERAL(12, 88, 5), // "slot0"
QT_MOC_LITERAL(13, 94, 5), // "slot1"
QT_MOC_LITERAL(14, 100, 5), // "slot2"
QT_MOC_LITERAL(15, 106, 5), // "slot3"
QT_MOC_LITERAL(16, 112, 5), // "slot4"
QT_MOC_LITERAL(17, 118, 5), // "slot5"
QT_MOC_LITERAL(18, 124, 5), // "slot6"
QT_MOC_LITERAL(19, 130, 5), // "slot7"
QT_MOC_LITERAL(20, 136, 5), // "slot8"
QT_MOC_LITERAL(21, 142, 5) // "slot9"

    },
    "Object\0signal0\0\0signal1\0signal2\0signal3\0"
    "signal4\0signal5\0signal6\0signal7\0signal8\0"
    "signal9\0slot0\0slot1\0slot2\0slot3\0slot4\0"
    "slot5\0slot6\0slot7\0slot8\0slot9"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Object[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x06 /* Public */,
       3,    0,  115,    2, 0x06 /* Public */,
       4,    0,  116,    2, 0x06 /* Public */,
       5,    0,  117,    2, 0x06 /* Public */,
       6,    0,  118,    2, 0x06 /* Public */,
       7,    0,  119,    2, 0x06 /* Public */,
       8,    0,  120,    2, 0x06 /* Public */,
       9,    0,  121,    2, 0x06 /* Public */,
      10,    0,  122,    2, 0x06 /* Public */,
      11,    0,  123,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  124,    2, 0x0a /* Public */,
      13,    0,  125,    2, 0x0a /* Public */,
      14,    0,  126,    2, 0x0a /* Public */,
      15,    0,  127,    2, 0x0a /* Public */,
      16,    0,  128,    2, 0x0a /* Public */,
      17,    0,  129,    2, 0x0a /* Public */,
      18,    0,  130,    2, 0x0a /* Public */,
      19,    0,  131,    2, 0x0a /* Public */,
      20,    0,  132,    2, 0x0a /* Public */,
      21,    0,  133,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

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
    QMetaType::Void,

       0        // eod
};

void Object::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Object *_t = static_cast<Object *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal0(); break;
        case 1: _t->signal1(); break;
        case 2: _t->signal2(); break;
        case 3: _t->signal3(); break;
        case 4: _t->signal4(); break;
        case 5: _t->signal5(); break;
        case 6: _t->signal6(); break;
        case 7: _t->signal7(); break;
        case 8: _t->signal8(); break;
        case 9: _t->signal9(); break;
        case 10: _t->slot0(); break;
        case 11: _t->slot1(); break;
        case 12: _t->slot2(); break;
        case 13: _t->slot3(); break;
        case 14: _t->slot4(); break;
        case 15: _t->slot5(); break;
        case 16: _t->slot6(); break;
        case 17: _t->slot7(); break;
        case 18: _t->slot8(); break;
        case 19: _t->slot9(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Object::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Object::signal0)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Object::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Object::signal1)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Object::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Object::signal2)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Object::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Object::signal3)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Object::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Object::signal4)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Object::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Object::signal5)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Object::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Object::signal6)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Object::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Object::signal7)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Object::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Object::signal8)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Object::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Object::signal9)) {
                *result = 9;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Object::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Object.data,
      qt_meta_data_Object,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Object::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Object::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Object.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Object::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void Object::signal0()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Object::signal1()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Object::signal2()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Object::signal3()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Object::signal4()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Object::signal5()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Object::signal6()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Object::signal7()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Object::signal8()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Object::signal9()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
