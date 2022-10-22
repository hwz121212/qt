/****************************************************************************
** Meta object code from reading C++ file 'rep_enum_merged.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rep_enum_merged.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rep_enum_merged.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestEnum_t {
    QByteArrayData data[4];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestEnum_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestEnum_t qt_meta_stringdata_TestEnum = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TestEnum"
QT_MOC_LITERAL(1, 9, 4), // "Test"
QT_MOC_LITERAL(2, 14, 4), // "TRUE"
QT_MOC_LITERAL(3, 19, 5) // "FALSE"

    },
    "TestEnum\0Test\0TRUE\0FALSE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestEnum[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    2,   18,

 // enum data: key, value
       2, uint(TestEnum::TRUE),
       3, uint(TestEnum::FALSE),

       0        // eod
};

const QMetaObject TestEnum::staticMetaObject = {
    { nullptr, qt_meta_stringdata_TestEnum.data,
      qt_meta_data_TestEnum,  nullptr, nullptr, nullptr}
};

struct qt_meta_stringdata_TestClassReplica_t {
    QByteArrayData data[20];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestClassReplica_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestClassReplica_t qt_meta_stringdata_TestClassReplica = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TestClassReplica"
QT_MOC_LITERAL(1, 17, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 35, 9), // "TestClass"
QT_MOC_LITERAL(3, 45, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 68, 40), // "d53722adfddbbc36423bd97f0d376..."
QT_MOC_LITERAL(5, 109, 15), // "testEnumChanged"
QT_MOC_LITERAL(6, 125, 0), // ""
QT_MOC_LITERAL(7, 126, 14), // "TestEnum::Test"
QT_MOC_LITERAL(8, 141, 16), // "classEnumChanged"
QT_MOC_LITERAL(9, 158, 27), // "TestClassReplica::ClassEnum"
QT_MOC_LITERAL(10, 186, 18), // "classEnumRWChanged"
QT_MOC_LITERAL(11, 205, 12), // "pushTestEnum"
QT_MOC_LITERAL(12, 218, 8), // "testEnum"
QT_MOC_LITERAL(13, 227, 13), // "pushClassEnum"
QT_MOC_LITERAL(14, 241, 9), // "ClassEnum"
QT_MOC_LITERAL(15, 251, 9), // "classEnum"
QT_MOC_LITERAL(16, 261, 11), // "classEnumRW"
QT_MOC_LITERAL(17, 273, 4), // "Null"
QT_MOC_LITERAL(18, 278, 3), // "One"
QT_MOC_LITERAL(19, 282, 3) // "Two"

    },
    "TestClassReplica\0RemoteObject Type\0"
    "TestClass\0RemoteObject Signature\0"
    "d53722adfddbbc36423bd97f0d376466096e5d49\0"
    "testEnumChanged\0\0TestEnum::Test\0"
    "classEnumChanged\0TestClassReplica::ClassEnum\0"
    "classEnumRWChanged\0pushTestEnum\0"
    "testEnum\0pushClassEnum\0ClassEnum\0"
    "classEnum\0classEnumRW\0Null\0One\0Two"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestClassReplica[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       5,   18, // methods
       3,   58, // properties
       1,   70, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   43,    6, 0x06 /* Public */,
       8,    1,   46,    6, 0x06 /* Public */,
      10,    1,   49,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   52,    6, 0x0a /* Public */,
      13,    1,   55,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 7,    6,
    QMetaType::Void, 0x80000000 | 9,    6,
    QMetaType::Void, 0x80000000 | 9,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,   12,
    QMetaType::Void, 0x80000000 | 14,   15,

 // properties: name, type, flags
      12, 0x80000000 | 7, 0x00495009,
      15, 0x80000000 | 14, 0x00495009,
      16, 0x80000000 | 14, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
      14, 0x0,    3,   74,

 // enum data: key, value
      17, uint(TestClassReplica::Null),
      18, uint(TestClassReplica::One),
      19, uint(TestClassReplica::Two),

       0        // eod
};

void TestClassReplica::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestClassReplica *_t = static_cast<TestClassReplica *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testEnumChanged((*reinterpret_cast< TestEnum::Test(*)>(_a[1]))); break;
        case 1: _t->classEnumChanged((*reinterpret_cast< TestClassReplica::ClassEnum(*)>(_a[1]))); break;
        case 2: _t->classEnumRWChanged((*reinterpret_cast< TestClassReplica::ClassEnum(*)>(_a[1]))); break;
        case 3: _t->pushTestEnum((*reinterpret_cast< TestEnum::Test(*)>(_a[1]))); break;
        case 4: _t->pushClassEnum((*reinterpret_cast< ClassEnum(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TestClassReplica::*_t)(TestEnum::Test );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestClassReplica::testEnumChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TestClassReplica::*_t)(TestClassReplica::ClassEnum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestClassReplica::classEnumChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TestClassReplica::*_t)(TestClassReplica::ClassEnum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestClassReplica::classEnumRWChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TestClassReplica *_t = static_cast<TestClassReplica *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TestEnum::Test*>(_v) = _t->testEnum(); break;
        case 1: *reinterpret_cast< ClassEnum*>(_v) = _t->classEnum(); break;
        case 2: *reinterpret_cast< ClassEnum*>(_v) = _t->classEnumRW(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TestClassReplica *_t = static_cast<TestClassReplica *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setClassEnumRW(*reinterpret_cast< ClassEnum*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_TestClassReplica[] = {
        &TestEnum::staticMetaObject,
    nullptr
};

const QMetaObject TestClassReplica::staticMetaObject = {
    { &QRemoteObjectReplica::staticMetaObject, qt_meta_stringdata_TestClassReplica.data,
      qt_meta_data_TestClassReplica,  qt_static_metacall, qt_meta_extradata_TestClassReplica, nullptr}
};


const QMetaObject *TestClassReplica::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestClassReplica::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestClassReplica.stringdata0))
        return static_cast<void*>(this);
    return QRemoteObjectReplica::qt_metacast(_clname);
}

int TestClassReplica::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRemoteObjectReplica::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TestClassReplica::testEnumChanged(TestEnum::Test _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TestClassReplica::classEnumChanged(TestClassReplica::ClassEnum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TestClassReplica::classEnumRWChanged(TestClassReplica::ClassEnum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_TestClassSource_t {
    QByteArrayData data[20];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestClassSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestClassSource_t qt_meta_stringdata_TestClassSource = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TestClassSource"
QT_MOC_LITERAL(1, 16, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 34, 9), // "TestClass"
QT_MOC_LITERAL(3, 44, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 67, 40), // "d53722adfddbbc36423bd97f0d376..."
QT_MOC_LITERAL(5, 108, 15), // "testEnumChanged"
QT_MOC_LITERAL(6, 124, 0), // ""
QT_MOC_LITERAL(7, 125, 14), // "TestEnum::Test"
QT_MOC_LITERAL(8, 140, 16), // "classEnumChanged"
QT_MOC_LITERAL(9, 157, 26), // "TestClassSource::ClassEnum"
QT_MOC_LITERAL(10, 184, 18), // "classEnumRWChanged"
QT_MOC_LITERAL(11, 203, 12), // "pushTestEnum"
QT_MOC_LITERAL(12, 216, 8), // "testEnum"
QT_MOC_LITERAL(13, 225, 13), // "pushClassEnum"
QT_MOC_LITERAL(14, 239, 9), // "ClassEnum"
QT_MOC_LITERAL(15, 249, 9), // "classEnum"
QT_MOC_LITERAL(16, 259, 11), // "classEnumRW"
QT_MOC_LITERAL(17, 271, 4), // "Null"
QT_MOC_LITERAL(18, 276, 3), // "One"
QT_MOC_LITERAL(19, 280, 3) // "Two"

    },
    "TestClassSource\0RemoteObject Type\0"
    "TestClass\0RemoteObject Signature\0"
    "d53722adfddbbc36423bd97f0d376466096e5d49\0"
    "testEnumChanged\0\0TestEnum::Test\0"
    "classEnumChanged\0TestClassSource::ClassEnum\0"
    "classEnumRWChanged\0pushTestEnum\0"
    "testEnum\0pushClassEnum\0ClassEnum\0"
    "classEnum\0classEnumRW\0Null\0One\0Two"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestClassSource[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       5,   18, // methods
       3,   58, // properties
       1,   70, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   43,    6, 0x06 /* Public */,
       8,    1,   46,    6, 0x06 /* Public */,
      10,    1,   49,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   52,    6, 0x0a /* Public */,
      13,    1,   55,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 7,    6,
    QMetaType::Void, 0x80000000 | 9,    6,
    QMetaType::Void, 0x80000000 | 9,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,   12,
    QMetaType::Void, 0x80000000 | 14,   15,

 // properties: name, type, flags
      12, 0x80000000 | 7, 0x0049510b,
      15, 0x80000000 | 14, 0x0049510b,
      16, 0x80000000 | 14, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
      14, 0x0,    3,   74,

 // enum data: key, value
      17, uint(TestClassSource::Null),
      18, uint(TestClassSource::One),
      19, uint(TestClassSource::Two),

       0        // eod
};

void TestClassSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestClassSource *_t = static_cast<TestClassSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testEnumChanged((*reinterpret_cast< TestEnum::Test(*)>(_a[1]))); break;
        case 1: _t->classEnumChanged((*reinterpret_cast< TestClassSource::ClassEnum(*)>(_a[1]))); break;
        case 2: _t->classEnumRWChanged((*reinterpret_cast< TestClassSource::ClassEnum(*)>(_a[1]))); break;
        case 3: _t->pushTestEnum((*reinterpret_cast< TestEnum::Test(*)>(_a[1]))); break;
        case 4: _t->pushClassEnum((*reinterpret_cast< ClassEnum(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TestClassSource::*_t)(TestEnum::Test );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestClassSource::testEnumChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TestClassSource::*_t)(TestClassSource::ClassEnum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestClassSource::classEnumChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TestClassSource::*_t)(TestClassSource::ClassEnum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestClassSource::classEnumRWChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TestClassSource *_t = static_cast<TestClassSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TestEnum::Test*>(_v) = _t->testEnum(); break;
        case 1: *reinterpret_cast< ClassEnum*>(_v) = _t->classEnum(); break;
        case 2: *reinterpret_cast< ClassEnum*>(_v) = _t->classEnumRW(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TestClassSource *_t = static_cast<TestClassSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTestEnum(*reinterpret_cast< TestEnum::Test*>(_v)); break;
        case 1: _t->setClassEnum(*reinterpret_cast< ClassEnum*>(_v)); break;
        case 2: _t->setClassEnumRW(*reinterpret_cast< ClassEnum*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_TestClassSource[] = {
        &TestEnum::staticMetaObject,
    nullptr
};

const QMetaObject TestClassSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestClassSource.data,
      qt_meta_data_TestClassSource,  qt_static_metacall, qt_meta_extradata_TestClassSource, nullptr}
};


const QMetaObject *TestClassSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestClassSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestClassSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestClassSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TestClassSource::testEnumChanged(TestEnum::Test _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TestClassSource::classEnumChanged(TestClassSource::ClassEnum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TestClassSource::classEnumRWChanged(TestClassSource::ClassEnum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_TestClassSimpleSource_t {
    QByteArrayData data[20];
    char stringdata0[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestClassSimpleSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestClassSimpleSource_t qt_meta_stringdata_TestClassSimpleSource = {
    {
QT_MOC_LITERAL(0, 0, 21), // "TestClassSimpleSource"
QT_MOC_LITERAL(1, 22, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 40, 9), // "TestClass"
QT_MOC_LITERAL(3, 50, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 73, 40), // "d53722adfddbbc36423bd97f0d376..."
QT_MOC_LITERAL(5, 114, 15), // "testEnumChanged"
QT_MOC_LITERAL(6, 130, 0), // ""
QT_MOC_LITERAL(7, 131, 14), // "TestEnum::Test"
QT_MOC_LITERAL(8, 146, 16), // "classEnumChanged"
QT_MOC_LITERAL(9, 163, 32), // "TestClassSimpleSource::ClassEnum"
QT_MOC_LITERAL(10, 196, 18), // "classEnumRWChanged"
QT_MOC_LITERAL(11, 215, 12), // "pushTestEnum"
QT_MOC_LITERAL(12, 228, 8), // "testEnum"
QT_MOC_LITERAL(13, 237, 13), // "pushClassEnum"
QT_MOC_LITERAL(14, 251, 9), // "ClassEnum"
QT_MOC_LITERAL(15, 261, 9), // "classEnum"
QT_MOC_LITERAL(16, 271, 11), // "classEnumRW"
QT_MOC_LITERAL(17, 283, 4), // "Null"
QT_MOC_LITERAL(18, 288, 3), // "One"
QT_MOC_LITERAL(19, 292, 3) // "Two"

    },
    "TestClassSimpleSource\0RemoteObject Type\0"
    "TestClass\0RemoteObject Signature\0"
    "d53722adfddbbc36423bd97f0d376466096e5d49\0"
    "testEnumChanged\0\0TestEnum::Test\0"
    "classEnumChanged\0TestClassSimpleSource::ClassEnum\0"
    "classEnumRWChanged\0pushTestEnum\0"
    "testEnum\0pushClassEnum\0ClassEnum\0"
    "classEnum\0classEnumRW\0Null\0One\0Two"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestClassSimpleSource[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       5,   18, // methods
       3,   58, // properties
       1,   70, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   43,    6, 0x06 /* Public */,
       8,    1,   46,    6, 0x06 /* Public */,
      10,    1,   49,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   52,    6, 0x0a /* Public */,
      13,    1,   55,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 7,    6,
    QMetaType::Void, 0x80000000 | 9,    6,
    QMetaType::Void, 0x80000000 | 9,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,   12,
    QMetaType::Void, 0x80000000 | 14,   15,

 // properties: name, type, flags
      12, 0x80000000 | 7, 0x0049510b,
      15, 0x80000000 | 14, 0x0049510b,
      16, 0x80000000 | 14, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
      14, 0x0,    3,   74,

 // enum data: key, value
      17, uint(TestClassSimpleSource::Null),
      18, uint(TestClassSimpleSource::One),
      19, uint(TestClassSimpleSource::Two),

       0        // eod
};

void TestClassSimpleSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestClassSimpleSource *_t = static_cast<TestClassSimpleSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testEnumChanged((*reinterpret_cast< TestEnum::Test(*)>(_a[1]))); break;
        case 1: _t->classEnumChanged((*reinterpret_cast< TestClassSimpleSource::ClassEnum(*)>(_a[1]))); break;
        case 2: _t->classEnumRWChanged((*reinterpret_cast< TestClassSimpleSource::ClassEnum(*)>(_a[1]))); break;
        case 3: _t->pushTestEnum((*reinterpret_cast< TestEnum::Test(*)>(_a[1]))); break;
        case 4: _t->pushClassEnum((*reinterpret_cast< ClassEnum(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TestClassSimpleSource::*_t)(TestEnum::Test );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestClassSimpleSource::testEnumChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TestClassSimpleSource::*_t)(TestClassSimpleSource::ClassEnum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestClassSimpleSource::classEnumChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TestClassSimpleSource::*_t)(TestClassSimpleSource::ClassEnum );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestClassSimpleSource::classEnumRWChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TestClassSimpleSource *_t = static_cast<TestClassSimpleSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TestEnum::Test*>(_v) = _t->testEnum(); break;
        case 1: *reinterpret_cast< ClassEnum*>(_v) = _t->classEnum(); break;
        case 2: *reinterpret_cast< ClassEnum*>(_v) = _t->classEnumRW(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TestClassSimpleSource *_t = static_cast<TestClassSimpleSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTestEnum(*reinterpret_cast< TestEnum::Test*>(_v)); break;
        case 1: _t->setClassEnum(*reinterpret_cast< ClassEnum*>(_v)); break;
        case 2: _t->setClassEnumRW(*reinterpret_cast< ClassEnum*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_TestClassSimpleSource[] = {
        &TestEnum::staticMetaObject,
    nullptr
};

const QMetaObject TestClassSimpleSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestClassSimpleSource.data,
      qt_meta_data_TestClassSimpleSource,  qt_static_metacall, qt_meta_extradata_TestClassSimpleSource, nullptr}
};


const QMetaObject *TestClassSimpleSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestClassSimpleSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestClassSimpleSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestClassSimpleSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TestClassSimpleSource::testEnumChanged(TestEnum::Test _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TestClassSimpleSource::classEnumChanged(TestClassSimpleSource::ClassEnum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TestClassSimpleSource::classEnumRWChanged(TestClassSimpleSource::ClassEnum _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
