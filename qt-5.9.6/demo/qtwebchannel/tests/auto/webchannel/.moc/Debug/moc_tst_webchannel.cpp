/****************************************************************************
** Meta object code from reading C++ file 'tst_webchannel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tst_webchannel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_webchannel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DummyTransport_t {
    QByteArrayData data[4];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DummyTransport_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DummyTransport_t qt_meta_stringdata_DummyTransport = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DummyTransport"
QT_MOC_LITERAL(1, 15, 11), // "sendMessage"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7) // "message"

    },
    "DummyTransport\0sendMessage\0\0message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DummyTransport[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void DummyTransport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DummyTransport *_t = static_cast<DummyTransport *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendMessage((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DummyTransport::staticMetaObject = {
    { &QWebChannelAbstractTransport::staticMetaObject, qt_meta_stringdata_DummyTransport.data,
      qt_meta_data_DummyTransport,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DummyTransport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DummyTransport::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DummyTransport.stringdata0))
        return static_cast<void*>(this);
    return QWebChannelAbstractTransport::qt_metacast(_clname);
}

int DummyTransport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebChannelAbstractTransport::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_TestObject_t {
    QByteArrayData data[33];
    char stringdata0[295];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestObject_t qt_meta_stringdata_TestObject = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TestObject"
QT_MOC_LITERAL(1, 11, 4), // "sig1"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "sig2"
QT_MOC_LITERAL(4, 22, 11), // "asdfChanged"
QT_MOC_LITERAL(5, 34, 16), // "theBarHasChanged"
QT_MOC_LITERAL(6, 51, 21), // "objectPropertyChanged"
QT_MOC_LITERAL(7, 73, 21), // "returnedObjectChanged"
QT_MOC_LITERAL(8, 95, 11), // "propChanged"
QT_MOC_LITERAL(9, 107, 6), // "replay"
QT_MOC_LITERAL(10, 114, 5), // "slot1"
QT_MOC_LITERAL(11, 120, 5), // "slot2"
QT_MOC_LITERAL(12, 126, 17), // "setReturnedObject"
QT_MOC_LITERAL(13, 144, 11), // "TestObject*"
QT_MOC_LITERAL(14, 156, 3), // "obj"
QT_MOC_LITERAL(15, 160, 17), // "setObjectProperty"
QT_MOC_LITERAL(16, 178, 6), // "object"
QT_MOC_LITERAL(17, 185, 7), // "setProp"
QT_MOC_LITERAL(18, 193, 4), // "prop"
QT_MOC_LITERAL(19, 198, 4), // "fire"
QT_MOC_LITERAL(20, 203, 5), // "slot3"
QT_MOC_LITERAL(21, 209, 5), // "slot4"
QT_MOC_LITERAL(22, 215, 7), // "method1"
QT_MOC_LITERAL(23, 223, 7), // "method2"
QT_MOC_LITERAL(24, 231, 7), // "method3"
QT_MOC_LITERAL(25, 239, 3), // "foo"
QT_MOC_LITERAL(26, 243, 3), // "Foo"
QT_MOC_LITERAL(27, 247, 4), // "asdf"
QT_MOC_LITERAL(28, 252, 3), // "bar"
QT_MOC_LITERAL(29, 256, 14), // "objectProperty"
QT_MOC_LITERAL(30, 271, 14), // "returnedObject"
QT_MOC_LITERAL(31, 286, 3), // "Bar"
QT_MOC_LITERAL(32, 290, 4) // "Asdf"

    },
    "TestObject\0sig1\0\0sig2\0asdfChanged\0"
    "theBarHasChanged\0objectPropertyChanged\0"
    "returnedObjectChanged\0propChanged\0"
    "replay\0slot1\0slot2\0setReturnedObject\0"
    "TestObject*\0obj\0setObjectProperty\0"
    "object\0setProp\0prop\0fire\0slot3\0slot4\0"
    "method1\0method2\0method3\0foo\0Foo\0asdf\0"
    "bar\0objectProperty\0returnedObject\0Bar\0"
    "Asdf"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       6,  140, // properties
       1,  164, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    1,  110,    2, 0x06 /* Public */,
       4,    0,  113,    2, 0x06 /* Public */,
       5,    0,  114,    2, 0x06 /* Public */,
       6,    0,  115,    2, 0x06 /* Public */,
       7,    0,  116,    2, 0x06 /* Public */,
       8,    1,  117,    2, 0x06 /* Public */,
       9,    0,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  121,    2, 0x0a /* Public */,
      11,    1,  122,    2, 0x0a /* Public */,
      12,    1,  125,    2, 0x0a /* Public */,
      15,    1,  128,    2, 0x0a /* Public */,
      17,    1,  131,    2, 0x0a /* Public */,
      19,    0,  134,    2, 0x0a /* Public */,
      20,    0,  135,    2, 0x09 /* Protected */,
      21,    0,  136,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      22,    0,  137,    2, 0x02 /* Public */,
      23,    0,  138,    2, 0x01 /* Protected */,
      24,    0,  139,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QObjectStar,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      25, 0x80000000 | 26, 0x00095409,
      27, QMetaType::Int, 0x00495001,
      28, QMetaType::QString, 0x00495001,
      29, QMetaType::QObjectStar, 0x00495103,
      30, 0x80000000 | 13, 0x0049510b,
      18, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       3,
       4,
       5,
       6,

 // enums: name, flags, count, data
      26, 0x0,    2,  168,

 // enum data: key, value
      31, uint(TestObject::Bar),
      32, uint(TestObject::Asdf),

       0        // eod
};

void TestObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestObject *_t = static_cast<TestObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig1(); break;
        case 1: _t->sig2((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->asdfChanged(); break;
        case 3: _t->theBarHasChanged(); break;
        case 4: _t->objectPropertyChanged(); break;
        case 5: _t->returnedObjectChanged(); break;
        case 6: _t->propChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->replay(); break;
        case 8: _t->slot1(); break;
        case 9: _t->slot2((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->setReturnedObject((*reinterpret_cast< TestObject*(*)>(_a[1]))); break;
        case 11: _t->setObjectProperty((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 12: _t->setProp((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->fire(); break;
        case 14: _t->slot3(); break;
        case 15: _t->slot4(); break;
        case 16: _t->method1(); break;
        case 17: _t->method2(); break;
        case 18: _t->method3(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TestObject* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TestObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestObject::sig1)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TestObject::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestObject::sig2)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TestObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestObject::asdfChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TestObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestObject::theBarHasChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TestObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestObject::objectPropertyChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (TestObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestObject::returnedObjectChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (TestObject::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestObject::propChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (TestObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestObject::replay)) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TestObject* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TestObject *_t = static_cast<TestObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Foo*>(_v) = _t->foo(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->asdf(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->bar(); break;
        case 3: *reinterpret_cast< QObject**>(_v) = _t->objectProperty(); break;
        case 4: *reinterpret_cast< TestObject**>(_v) = _t->returnedObject(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->prop(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TestObject *_t = static_cast<TestObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setObjectProperty(*reinterpret_cast< QObject**>(_v)); break;
        case 4: _t->setReturnedObject(*reinterpret_cast< TestObject**>(_v)); break;
        case 5: _t->setProp(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TestObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestObject.data,
      qt_meta_data_TestObject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TestObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TestObject::sig1()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TestObject::sig2(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TestObject::asdfChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TestObject::theBarHasChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TestObject::objectPropertyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TestObject::returnedObjectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void TestObject::propChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TestObject::replay()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
struct qt_meta_stringdata_BenchObject_t {
    QByteArrayData data[42];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BenchObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BenchObject_t qt_meta_stringdata_BenchObject = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BenchObject"
QT_MOC_LITERAL(1, 12, 2), // "s0"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 2), // "s1"
QT_MOC_LITERAL(4, 19, 2), // "s2"
QT_MOC_LITERAL(5, 22, 2), // "s3"
QT_MOC_LITERAL(6, 25, 2), // "s4"
QT_MOC_LITERAL(7, 28, 2), // "s5"
QT_MOC_LITERAL(8, 31, 2), // "s6"
QT_MOC_LITERAL(9, 34, 2), // "s7"
QT_MOC_LITERAL(10, 37, 2), // "s8"
QT_MOC_LITERAL(11, 40, 2), // "s9"
QT_MOC_LITERAL(12, 43, 9), // "p0Changed"
QT_MOC_LITERAL(13, 53, 9), // "p1Changed"
QT_MOC_LITERAL(14, 63, 9), // "p2Changed"
QT_MOC_LITERAL(15, 73, 9), // "p3Changed"
QT_MOC_LITERAL(16, 83, 9), // "p4Changed"
QT_MOC_LITERAL(17, 93, 9), // "p5Changed"
QT_MOC_LITERAL(18, 103, 9), // "p6Changed"
QT_MOC_LITERAL(19, 113, 9), // "p7Changed"
QT_MOC_LITERAL(20, 123, 9), // "p8Changed"
QT_MOC_LITERAL(21, 133, 9), // "p9Changed"
QT_MOC_LITERAL(22, 143, 2), // "m0"
QT_MOC_LITERAL(23, 146, 2), // "m1"
QT_MOC_LITERAL(24, 149, 2), // "m2"
QT_MOC_LITERAL(25, 152, 2), // "m3"
QT_MOC_LITERAL(26, 155, 2), // "m4"
QT_MOC_LITERAL(27, 158, 2), // "m5"
QT_MOC_LITERAL(28, 161, 2), // "m6"
QT_MOC_LITERAL(29, 164, 2), // "m7"
QT_MOC_LITERAL(30, 167, 2), // "m8"
QT_MOC_LITERAL(31, 170, 2), // "m9"
QT_MOC_LITERAL(32, 173, 2), // "p0"
QT_MOC_LITERAL(33, 176, 2), // "p1"
QT_MOC_LITERAL(34, 179, 2), // "p2"
QT_MOC_LITERAL(35, 182, 2), // "p3"
QT_MOC_LITERAL(36, 185, 2), // "p4"
QT_MOC_LITERAL(37, 188, 2), // "p5"
QT_MOC_LITERAL(38, 191, 2), // "p6"
QT_MOC_LITERAL(39, 194, 2), // "p7"
QT_MOC_LITERAL(40, 197, 2), // "p8"
QT_MOC_LITERAL(41, 200, 2) // "p9"

    },
    "BenchObject\0s0\0\0s1\0s2\0s3\0s4\0s5\0s6\0s7\0"
    "s8\0s9\0p0Changed\0p1Changed\0p2Changed\0"
    "p3Changed\0p4Changed\0p5Changed\0p6Changed\0"
    "p7Changed\0p8Changed\0p9Changed\0m0\0m1\0"
    "m2\0m3\0m4\0m5\0m6\0m7\0m8\0m9\0p0\0p1\0p2\0p3\0"
    "p4\0p5\0p6\0p7\0p8\0p9"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BenchObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
      10,  214, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  164,    2, 0x06 /* Public */,
       3,    0,  165,    2, 0x06 /* Public */,
       4,    0,  166,    2, 0x06 /* Public */,
       5,    0,  167,    2, 0x06 /* Public */,
       6,    0,  168,    2, 0x06 /* Public */,
       7,    0,  169,    2, 0x06 /* Public */,
       8,    0,  170,    2, 0x06 /* Public */,
       9,    0,  171,    2, 0x06 /* Public */,
      10,    0,  172,    2, 0x06 /* Public */,
      11,    0,  173,    2, 0x06 /* Public */,
      12,    1,  174,    2, 0x06 /* Public */,
      13,    1,  177,    2, 0x06 /* Public */,
      14,    1,  180,    2, 0x06 /* Public */,
      15,    1,  183,    2, 0x06 /* Public */,
      16,    1,  186,    2, 0x06 /* Public */,
      17,    1,  189,    2, 0x06 /* Public */,
      18,    1,  192,    2, 0x06 /* Public */,
      19,    1,  195,    2, 0x06 /* Public */,
      20,    1,  198,    2, 0x06 /* Public */,
      21,    1,  201,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    0,  204,    2, 0x0a /* Public */,
      23,    0,  205,    2, 0x0a /* Public */,
      24,    0,  206,    2, 0x0a /* Public */,
      25,    0,  207,    2, 0x0a /* Public */,
      26,    0,  208,    2, 0x0a /* Public */,
      27,    0,  209,    2, 0x0a /* Public */,
      28,    0,  210,    2, 0x0a /* Public */,
      29,    0,  211,    2, 0x0a /* Public */,
      30,    0,  212,    2, 0x0a /* Public */,
      31,    0,  213,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

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

 // properties: name, type, flags
      32, QMetaType::Int, 0x00495003,
      33, QMetaType::Int, 0x00495003,
      34, QMetaType::Int, 0x00495003,
      35, QMetaType::Int, 0x00495003,
      36, QMetaType::Int, 0x00495003,
      37, QMetaType::Int, 0x00495003,
      38, QMetaType::Int, 0x00495003,
      39, QMetaType::Int, 0x00495003,
      40, QMetaType::Int, 0x00495003,
      41, QMetaType::Int, 0x00495003,

 // properties: notify_signal_id
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      19,

       0        // eod
};

void BenchObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BenchObject *_t = static_cast<BenchObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->s0(); break;
        case 1: _t->s1(); break;
        case 2: _t->s2(); break;
        case 3: _t->s3(); break;
        case 4: _t->s4(); break;
        case 5: _t->s5(); break;
        case 6: _t->s6(); break;
        case 7: _t->s7(); break;
        case 8: _t->s8(); break;
        case 9: _t->s9(); break;
        case 10: _t->p0Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->p1Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->p2Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->p3Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->p4Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->p5Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->p6Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->p7Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->p8Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->p9Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->m0(); break;
        case 21: _t->m1(); break;
        case 22: _t->m2(); break;
        case 23: _t->m3(); break;
        case 24: _t->m4(); break;
        case 25: _t->m5(); break;
        case 26: _t->m6(); break;
        case 27: _t->m7(); break;
        case 28: _t->m8(); break;
        case 29: _t->m9(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BenchObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::s0)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::s1)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::s2)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::s3)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::s4)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::s5)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::s6)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::s7)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::s8)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::s9)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::p0Changed)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::p1Changed)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::p2Changed)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::p3Changed)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::p4Changed)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::p5Changed)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::p6Changed)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::p7Changed)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::p8Changed)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (BenchObject::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BenchObject::p9Changed)) {
                *result = 19;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BenchObject *_t = static_cast<BenchObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->m_p0; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->m_p1; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->m_p2; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->m_p3; break;
        case 4: *reinterpret_cast< int*>(_v) = _t->m_p4; break;
        case 5: *reinterpret_cast< int*>(_v) = _t->m_p5; break;
        case 6: *reinterpret_cast< int*>(_v) = _t->m_p6; break;
        case 7: *reinterpret_cast< int*>(_v) = _t->m_p7; break;
        case 8: *reinterpret_cast< int*>(_v) = _t->m_p8; break;
        case 9: *reinterpret_cast< int*>(_v) = _t->m_p9; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BenchObject *_t = static_cast<BenchObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_p0 != *reinterpret_cast< int*>(_v)) {
                _t->m_p0 = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->p0Changed(_t->m_p0);
            }
            break;
        case 1:
            if (_t->m_p1 != *reinterpret_cast< int*>(_v)) {
                _t->m_p1 = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->p1Changed(_t->m_p1);
            }
            break;
        case 2:
            if (_t->m_p2 != *reinterpret_cast< int*>(_v)) {
                _t->m_p2 = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->p2Changed(_t->m_p2);
            }
            break;
        case 3:
            if (_t->m_p3 != *reinterpret_cast< int*>(_v)) {
                _t->m_p3 = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->p3Changed(_t->m_p3);
            }
            break;
        case 4:
            if (_t->m_p4 != *reinterpret_cast< int*>(_v)) {
                _t->m_p4 = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->p4Changed(_t->m_p4);
            }
            break;
        case 5:
            if (_t->m_p5 != *reinterpret_cast< int*>(_v)) {
                _t->m_p5 = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->p5Changed(_t->m_p5);
            }
            break;
        case 6:
            if (_t->m_p6 != *reinterpret_cast< int*>(_v)) {
                _t->m_p6 = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->p6Changed(_t->m_p6);
            }
            break;
        case 7:
            if (_t->m_p7 != *reinterpret_cast< int*>(_v)) {
                _t->m_p7 = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->p7Changed(_t->m_p7);
            }
            break;
        case 8:
            if (_t->m_p8 != *reinterpret_cast< int*>(_v)) {
                _t->m_p8 = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->p8Changed(_t->m_p8);
            }
            break;
        case 9:
            if (_t->m_p9 != *reinterpret_cast< int*>(_v)) {
                _t->m_p9 = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->p9Changed(_t->m_p9);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject BenchObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BenchObject.data,
      qt_meta_data_BenchObject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BenchObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BenchObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BenchObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BenchObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void BenchObject::s0()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BenchObject::s1()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BenchObject::s2()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void BenchObject::s3()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void BenchObject::s4()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void BenchObject::s5()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void BenchObject::s6()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void BenchObject::s7()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void BenchObject::s8()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void BenchObject::s9()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void BenchObject::p0Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void BenchObject::p1Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void BenchObject::p2Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void BenchObject::p3Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void BenchObject::p4Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void BenchObject::p5Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void BenchObject::p6Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void BenchObject::p7Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void BenchObject::p8Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void BenchObject::p9Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}
struct qt_meta_stringdata_TestWebChannel_t {
    QByteArrayData data[54];
    char stringdata0[878];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestWebChannel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestWebChannel_t qt_meta_stringdata_TestWebChannel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TestWebChannel"
QT_MOC_LITERAL(1, 15, 14), // "lastIntChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "lastBoolChanged"
QT_MOC_LITERAL(4, 47, 17), // "lastDoubleChanged"
QT_MOC_LITERAL(5, 65, 18), // "lastVariantChanged"
QT_MOC_LITERAL(6, 84, 20), // "lastJsonValueChanged"
QT_MOC_LITERAL(7, 105, 21), // "lastJsonObjectChanged"
QT_MOC_LITERAL(8, 127, 20), // "lastJsonArrayChanged"
QT_MOC_LITERAL(9, 148, 7), // "readInt"
QT_MOC_LITERAL(10, 156, 6), // "setInt"
QT_MOC_LITERAL(11, 163, 1), // "i"
QT_MOC_LITERAL(12, 165, 8), // "readBool"
QT_MOC_LITERAL(13, 174, 7), // "setBool"
QT_MOC_LITERAL(14, 182, 1), // "b"
QT_MOC_LITERAL(15, 184, 10), // "readDouble"
QT_MOC_LITERAL(16, 195, 9), // "setDouble"
QT_MOC_LITERAL(17, 205, 1), // "d"
QT_MOC_LITERAL(18, 207, 11), // "readVariant"
QT_MOC_LITERAL(19, 219, 10), // "setVariant"
QT_MOC_LITERAL(20, 230, 1), // "v"
QT_MOC_LITERAL(21, 232, 13), // "readJsonValue"
QT_MOC_LITERAL(22, 246, 12), // "setJsonValue"
QT_MOC_LITERAL(23, 259, 14), // "readJsonObject"
QT_MOC_LITERAL(24, 274, 13), // "setJsonObject"
QT_MOC_LITERAL(25, 288, 13), // "readJsonArray"
QT_MOC_LITERAL(26, 302, 12), // "setJsonArray"
QT_MOC_LITERAL(27, 315, 19), // "testRegisterObjects"
QT_MOC_LITERAL(28, 335, 21), // "testDeregisterObjects"
QT_MOC_LITERAL(29, 357, 27), // "testDeregisterObjectAtStart"
QT_MOC_LITERAL(30, 385, 17), // "testInfoForObject"
QT_MOC_LITERAL(31, 403, 26), // "testInvokeMethodConversion"
QT_MOC_LITERAL(32, 430, 25), // "testSetPropertyConversion"
QT_MOC_LITERAL(33, 456, 14), // "testDisconnect"
QT_MOC_LITERAL(34, 471, 24), // "testWrapRegisteredObject"
QT_MOC_LITERAL(35, 496, 26), // "testRemoveUnusedTransports"
QT_MOC_LITERAL(36, 523, 25), // "testPassWrappedObjectBack"
QT_MOC_LITERAL(37, 549, 21), // "testInfiniteRecursion"
QT_MOC_LITERAL(38, 571, 15), // "testAsyncObject"
QT_MOC_LITERAL(39, 587, 39), // "testDeletionDuringMethodInvoc..."
QT_MOC_LITERAL(40, 627, 34), // "testDeletionDuringMethodInvoc..."
QT_MOC_LITERAL(41, 662, 14), // "benchClassInfo"
QT_MOC_LITERAL(42, 677, 22), // "benchInitializeClients"
QT_MOC_LITERAL(43, 700, 20), // "benchPropertyUpdates"
QT_MOC_LITERAL(44, 721, 20), // "benchRegisterObjects"
QT_MOC_LITERAL(45, 742, 20), // "benchRemoveTransport"
QT_MOC_LITERAL(46, 763, 31), // "qtbug46548_overriddenProperties"
QT_MOC_LITERAL(47, 795, 7), // "lastInt"
QT_MOC_LITERAL(48, 803, 8), // "lastBool"
QT_MOC_LITERAL(49, 812, 10), // "lastDouble"
QT_MOC_LITERAL(50, 823, 11), // "lastVariant"
QT_MOC_LITERAL(51, 835, 13), // "lastJsonValue"
QT_MOC_LITERAL(52, 849, 14), // "lastJsonObject"
QT_MOC_LITERAL(53, 864, 13) // "lastJsonArray"

    },
    "TestWebChannel\0lastIntChanged\0\0"
    "lastBoolChanged\0lastDoubleChanged\0"
    "lastVariantChanged\0lastJsonValueChanged\0"
    "lastJsonObjectChanged\0lastJsonArrayChanged\0"
    "readInt\0setInt\0i\0readBool\0setBool\0b\0"
    "readDouble\0setDouble\0d\0readVariant\0"
    "setVariant\0v\0readJsonValue\0setJsonValue\0"
    "readJsonObject\0setJsonObject\0readJsonArray\0"
    "setJsonArray\0testRegisterObjects\0"
    "testDeregisterObjects\0testDeregisterObjectAtStart\0"
    "testInfoForObject\0testInvokeMethodConversion\0"
    "testSetPropertyConversion\0testDisconnect\0"
    "testWrapRegisteredObject\0"
    "testRemoveUnusedTransports\0"
    "testPassWrappedObjectBack\0"
    "testInfiniteRecursion\0testAsyncObject\0"
    "testDeletionDuringMethodInvocation_data\0"
    "testDeletionDuringMethodInvocation\0"
    "benchClassInfo\0benchInitializeClients\0"
    "benchPropertyUpdates\0benchRegisterObjects\0"
    "benchRemoveTransport\0"
    "qtbug46548_overriddenProperties\0lastInt\0"
    "lastBool\0lastDouble\0lastVariant\0"
    "lastJsonValue\0lastJsonObject\0lastJsonArray"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestWebChannel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       7,  274, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  219,    2, 0x06 /* Public */,
       3,    0,  220,    2, 0x06 /* Public */,
       4,    0,  221,    2, 0x06 /* Public */,
       5,    0,  222,    2, 0x06 /* Public */,
       6,    0,  223,    2, 0x06 /* Public */,
       7,    0,  224,    2, 0x06 /* Public */,
       8,    0,  225,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  226,    2, 0x0a /* Public */,
      10,    1,  227,    2, 0x0a /* Public */,
      12,    0,  230,    2, 0x0a /* Public */,
      13,    1,  231,    2, 0x0a /* Public */,
      15,    0,  234,    2, 0x0a /* Public */,
      16,    1,  235,    2, 0x0a /* Public */,
      18,    0,  238,    2, 0x0a /* Public */,
      19,    1,  239,    2, 0x0a /* Public */,
      21,    0,  242,    2, 0x0a /* Public */,
      22,    1,  243,    2, 0x0a /* Public */,
      23,    0,  246,    2, 0x0a /* Public */,
      24,    1,  247,    2, 0x0a /* Public */,
      25,    0,  250,    2, 0x0a /* Public */,
      26,    1,  251,    2, 0x0a /* Public */,
      27,    0,  254,    2, 0x08 /* Private */,
      28,    0,  255,    2, 0x08 /* Private */,
      29,    0,  256,    2, 0x08 /* Private */,
      30,    0,  257,    2, 0x08 /* Private */,
      31,    0,  258,    2, 0x08 /* Private */,
      32,    0,  259,    2, 0x08 /* Private */,
      33,    0,  260,    2, 0x08 /* Private */,
      34,    0,  261,    2, 0x08 /* Private */,
      35,    0,  262,    2, 0x08 /* Private */,
      36,    0,  263,    2, 0x08 /* Private */,
      37,    0,  264,    2, 0x08 /* Private */,
      38,    0,  265,    2, 0x08 /* Private */,
      39,    0,  266,    2, 0x08 /* Private */,
      40,    0,  267,    2, 0x08 /* Private */,
      41,    0,  268,    2, 0x08 /* Private */,
      42,    0,  269,    2, 0x08 /* Private */,
      43,    0,  270,    2, 0x08 /* Private */,
      44,    0,  271,    2, 0x08 /* Private */,
      45,    0,  272,    2, 0x08 /* Private */,
      46,    0,  273,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::QVariant,
    QMetaType::Void, QMetaType::QVariant,   20,
    QMetaType::QJsonValue,
    QMetaType::Void, QMetaType::QJsonValue,   20,
    QMetaType::QJsonObject,
    QMetaType::Void, QMetaType::QJsonObject,   20,
    QMetaType::QJsonArray,
    QMetaType::Void, QMetaType::QJsonArray,   20,
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

 // properties: name, type, flags
      47, QMetaType::Int, 0x00495003,
      48, QMetaType::Bool, 0x00495003,
      49, QMetaType::Double, 0x00495003,
      50, QMetaType::QVariant, 0x00495003,
      51, QMetaType::QJsonValue, 0x00495003,
      52, QMetaType::QJsonObject, 0x00495003,
      53, QMetaType::QJsonArray, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void TestWebChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestWebChannel *_t = static_cast<TestWebChannel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->lastIntChanged(); break;
        case 1: _t->lastBoolChanged(); break;
        case 2: _t->lastDoubleChanged(); break;
        case 3: _t->lastVariantChanged(); break;
        case 4: _t->lastJsonValueChanged(); break;
        case 5: _t->lastJsonObjectChanged(); break;
        case 6: _t->lastJsonArrayChanged(); break;
        case 7: { int _r = _t->readInt();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setInt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: { bool _r = _t->readBool();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->setBool((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { double _r = _t->readDouble();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->setDouble((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: { QVariant _r = _t->readVariant();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->setVariant((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 15: { QJsonValue _r = _t->readJsonValue();
            if (_a[0]) *reinterpret_cast< QJsonValue*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->setJsonValue((*reinterpret_cast< const QJsonValue(*)>(_a[1]))); break;
        case 17: { QJsonObject _r = _t->readJsonObject();
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->setJsonObject((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 19: { QJsonArray _r = _t->readJsonArray();
            if (_a[0]) *reinterpret_cast< QJsonArray*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->setJsonArray((*reinterpret_cast< const QJsonArray(*)>(_a[1]))); break;
        case 21: _t->testRegisterObjects(); break;
        case 22: _t->testDeregisterObjects(); break;
        case 23: _t->testDeregisterObjectAtStart(); break;
        case 24: _t->testInfoForObject(); break;
        case 25: _t->testInvokeMethodConversion(); break;
        case 26: _t->testSetPropertyConversion(); break;
        case 27: _t->testDisconnect(); break;
        case 28: _t->testWrapRegisteredObject(); break;
        case 29: _t->testRemoveUnusedTransports(); break;
        case 30: _t->testPassWrappedObjectBack(); break;
        case 31: _t->testInfiniteRecursion(); break;
        case 32: _t->testAsyncObject(); break;
        case 33: _t->testDeletionDuringMethodInvocation_data(); break;
        case 34: _t->testDeletionDuringMethodInvocation(); break;
        case 35: _t->benchClassInfo(); break;
        case 36: _t->benchInitializeClients(); break;
        case 37: _t->benchPropertyUpdates(); break;
        case 38: _t->benchRegisterObjects(); break;
        case 39: _t->benchRemoveTransport(); break;
        case 40: _t->qtbug46548_overriddenProperties(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TestWebChannel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestWebChannel::lastIntChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TestWebChannel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestWebChannel::lastBoolChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TestWebChannel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestWebChannel::lastDoubleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TestWebChannel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestWebChannel::lastVariantChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TestWebChannel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestWebChannel::lastJsonValueChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (TestWebChannel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestWebChannel::lastJsonObjectChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (TestWebChannel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestWebChannel::lastJsonArrayChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TestWebChannel *_t = static_cast<TestWebChannel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->readInt(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->readBool(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->readDouble(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = _t->readVariant(); break;
        case 4: *reinterpret_cast< QJsonValue*>(_v) = _t->readJsonValue(); break;
        case 5: *reinterpret_cast< QJsonObject*>(_v) = _t->readJsonObject(); break;
        case 6: *reinterpret_cast< QJsonArray*>(_v) = _t->readJsonArray(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TestWebChannel *_t = static_cast<TestWebChannel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInt(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setBool(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setDouble(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setVariant(*reinterpret_cast< QVariant*>(_v)); break;
        case 4: _t->setJsonValue(*reinterpret_cast< QJsonValue*>(_v)); break;
        case 5: _t->setJsonObject(*reinterpret_cast< QJsonObject*>(_v)); break;
        case 6: _t->setJsonArray(*reinterpret_cast< QJsonArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TestWebChannel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestWebChannel.data,
      qt_meta_data_TestWebChannel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TestWebChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestWebChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestWebChannel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestWebChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 41;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TestWebChannel::lastIntChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TestWebChannel::lastBoolChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TestWebChannel::lastDoubleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TestWebChannel::lastVariantChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TestWebChannel::lastJsonValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TestWebChannel::lastJsonObjectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void TestWebChannel::lastJsonArrayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
