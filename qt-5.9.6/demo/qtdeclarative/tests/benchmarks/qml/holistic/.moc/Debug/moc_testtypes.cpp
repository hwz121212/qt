/****************************************************************************
** Meta object code from reading C++ file 'testtypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../testtypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testtypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyQmlAttachedObject_t {
    QByteArrayData data[5];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyQmlAttachedObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyQmlAttachedObject_t qt_meta_stringdata_MyQmlAttachedObject = {
    {
QT_MOC_LITERAL(0, 0, 19), // "MyQmlAttachedObject"
QT_MOC_LITERAL(1, 20, 8), // "mySignal"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "value"
QT_MOC_LITERAL(4, 36, 6) // "value2"

    },
    "MyQmlAttachedObject\0mySignal\0\0value\0"
    "value2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyQmlAttachedObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00095401,
       4, QMetaType::Int, 0x00095103,

       0        // eod
};

void MyQmlAttachedObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyQmlAttachedObject *_t = static_cast<MyQmlAttachedObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mySignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MyQmlAttachedObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyQmlAttachedObject::mySignal)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MyQmlAttachedObject *_t = static_cast<MyQmlAttachedObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->value2(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MyQmlAttachedObject *_t = static_cast<MyQmlAttachedObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setValue2(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject MyQmlAttachedObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyQmlAttachedObject.data,
      qt_meta_data_MyQmlAttachedObject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyQmlAttachedObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyQmlAttachedObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyQmlAttachedObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyQmlAttachedObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MyQmlAttachedObject::mySignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_MyQmlObject_t {
    QByteArrayData data[43];
    char stringdata0[476];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyQmlObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyQmlObject_t qt_meta_stringdata_MyQmlObject = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MyQmlObject"
QT_MOC_LITERAL(1, 12, 11), // "basicSignal"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "argumentSignal"
QT_MOC_LITERAL(4, 40, 1), // "a"
QT_MOC_LITERAL(5, 42, 1), // "b"
QT_MOC_LITERAL(6, 44, 1), // "c"
QT_MOC_LITERAL(7, 46, 13), // "stringChanged"
QT_MOC_LITERAL(8, 60, 13), // "objectChanged"
QT_MOC_LITERAL(9, 74, 18), // "anotherBasicSignal"
QT_MOC_LITERAL(10, 93, 16), // "thirdBasicSignal"
QT_MOC_LITERAL(11, 110, 21), // "signalWithUnknownType"
QT_MOC_LITERAL(12, 132, 19), // "MyQmlObject::MyType"
QT_MOC_LITERAL(13, 152, 3), // "arg"
QT_MOC_LITERAL(14, 156, 8), // "deleteMe"
QT_MOC_LITERAL(15, 165, 12), // "methodNoArgs"
QT_MOC_LITERAL(16, 178, 6), // "method"
QT_MOC_LITERAL(17, 185, 9), // "setString"
QT_MOC_LITERAL(18, 195, 1), // "s"
QT_MOC_LITERAL(19, 197, 11), // "myinvokable"
QT_MOC_LITERAL(20, 209, 12), // "MyQmlObject*"
QT_MOC_LITERAL(21, 222, 1), // "o"
QT_MOC_LITERAL(22, 224, 13), // "variantMethod"
QT_MOC_LITERAL(23, 238, 1), // "v"
QT_MOC_LITERAL(24, 240, 8), // "returnme"
QT_MOC_LITERAL(25, 249, 11), // "deleteOnSet"
QT_MOC_LITERAL(26, 261, 12), // "trueProperty"
QT_MOC_LITERAL(27, 274, 13), // "falseProperty"
QT_MOC_LITERAL(28, 288, 5), // "value"
QT_MOC_LITERAL(29, 294, 7), // "console"
QT_MOC_LITERAL(30, 302, 14), // "stringProperty"
QT_MOC_LITERAL(31, 317, 14), // "objectProperty"
QT_MOC_LITERAL(32, 332, 18), // "objectListProperty"
QT_MOC_LITERAL(33, 351, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(34, 377, 18), // "resettableProperty"
QT_MOC_LITERAL(35, 396, 6), // "regExp"
QT_MOC_LITERAL(36, 403, 13), // "nonscriptable"
QT_MOC_LITERAL(37, 417, 6), // "MyEnum"
QT_MOC_LITERAL(38, 424, 10), // "EnumValue1"
QT_MOC_LITERAL(39, 435, 10), // "EnumValue2"
QT_MOC_LITERAL(40, 446, 7), // "MyEnum2"
QT_MOC_LITERAL(41, 454, 10), // "EnumValue3"
QT_MOC_LITERAL(42, 465, 10) // "EnumValue4"

    },
    "MyQmlObject\0basicSignal\0\0argumentSignal\0"
    "a\0b\0c\0stringChanged\0objectChanged\0"
    "anotherBasicSignal\0thirdBasicSignal\0"
    "signalWithUnknownType\0MyQmlObject::MyType\0"
    "arg\0deleteMe\0methodNoArgs\0method\0"
    "setString\0s\0myinvokable\0MyQmlObject*\0"
    "o\0variantMethod\0v\0returnme\0deleteOnSet\0"
    "trueProperty\0falseProperty\0value\0"
    "console\0stringProperty\0objectProperty\0"
    "objectListProperty\0QQmlListProperty<QObject>\0"
    "resettableProperty\0regExp\0nonscriptable\0"
    "MyEnum\0EnumValue1\0EnumValue2\0MyEnum2\0"
    "EnumValue3\0EnumValue4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyQmlObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
      11,  114, // properties
       2,  158, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    3,   85,    2, 0x06 /* Public */,
       7,    0,   92,    2, 0x06 /* Public */,
       8,    0,   93,    2, 0x06 /* Public */,
       9,    0,   94,    2, 0x06 /* Public */,
      10,    0,   95,    2, 0x06 /* Public */,
      11,    1,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   99,    2, 0x0a /* Public */,
      15,    0,  100,    2, 0x0a /* Public */,
      16,    1,  101,    2, 0x0a /* Public */,
      17,    1,  104,    2, 0x0a /* Public */,
      19,    1,  107,    2, 0x0a /* Public */,
      22,    1,  110,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      24,    0,  113,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QReal,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::QVariant,   23,

 // methods: parameters
    0x80000000 | 20,

 // properties: name, type, flags
      25, QMetaType::Int, 0x00095103,
      26, QMetaType::Bool, 0x00095401,
      27, QMetaType::Bool, 0x00095401,
      28, QMetaType::Int, 0x00095103,
      29, QMetaType::Int, 0x00095401,
      30, QMetaType::QString, 0x00495103,
      31, QMetaType::QObjectStar, 0x00495103,
      32, 0x80000000 | 33, 0x00095409,
      34, QMetaType::Int, 0x00095107,
      35, QMetaType::QRegExp, 0x00095103,
      36, QMetaType::Int, 0x00091103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       2,
       3,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
      37, 0x0,    2,  166,
      40, 0x0,    2,  170,

 // enum data: key, value
      38, uint(MyQmlObject::EnumValue1),
      39, uint(MyQmlObject::EnumValue2),
      41, uint(MyQmlObject::EnumValue3),
      42, uint(MyQmlObject::EnumValue4),

       0        // eod
};

void MyQmlObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyQmlObject *_t = static_cast<MyQmlObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->basicSignal(); break;
        case 1: _t->argumentSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 2: _t->stringChanged(); break;
        case 3: _t->objectChanged(); break;
        case 4: _t->anotherBasicSignal(); break;
        case 5: _t->thirdBasicSignal(); break;
        case 6: _t->signalWithUnknownType((*reinterpret_cast< const MyQmlObject::MyType(*)>(_a[1]))); break;
        case 7: _t->deleteMe(); break;
        case 8: _t->methodNoArgs(); break;
        case 9: _t->method((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->myinvokable((*reinterpret_cast< MyQmlObject*(*)>(_a[1]))); break;
        case 12: _t->variantMethod((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 13: { MyQmlObject* _r = _t->returnme();
            if (_a[0]) *reinterpret_cast< MyQmlObject**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MyQmlObject::MyType >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MyQmlObject* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MyQmlObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyQmlObject::basicSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyQmlObject::*_t)(int , QString , qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyQmlObject::argumentSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MyQmlObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyQmlObject::stringChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MyQmlObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyQmlObject::objectChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MyQmlObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyQmlObject::anotherBasicSignal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MyQmlObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyQmlObject::thirdBasicSignal)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MyQmlObject::*_t)(const MyQmlObject::MyType & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyQmlObject::signalWithUnknownType)) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MyQmlObject *_t = static_cast<MyQmlObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->deleteOnSet(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->trueProperty(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->falseProperty(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->value(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->console(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->stringProperty(); break;
        case 6: *reinterpret_cast< QObject**>(_v) = _t->objectProperty(); break;
        case 7: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->objectListProperty(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->resettableProperty(); break;
        case 9: *reinterpret_cast< QRegExp*>(_v) = _t->regExp(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->nonscriptable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MyQmlObject *_t = static_cast<MyQmlObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDeleteOnSet(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setValue(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setStringProperty(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setObjectProperty(*reinterpret_cast< QObject**>(_v)); break;
        case 8: _t->setResettableProperty(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setRegExp(*reinterpret_cast< QRegExp*>(_v)); break;
        case 10: _t->setNonscriptable(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        MyQmlObject *_t = static_cast<MyQmlObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 8: _t->resetProperty(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject MyQmlObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyQmlObject.data,
      qt_meta_data_MyQmlObject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyQmlObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyQmlObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyQmlObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyQmlObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MyQmlObject::basicSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MyQmlObject::argumentSignal(int _t1, QString _t2, qreal _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyQmlObject::stringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MyQmlObject::objectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MyQmlObject::anotherBasicSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MyQmlObject::thirdBasicSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MyQmlObject::signalWithUnknownType(const MyQmlObject::MyType & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
struct qt_meta_stringdata_testQObjectApi_t {
    QByteArrayData data[5];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_testQObjectApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_testQObjectApi_t qt_meta_stringdata_testQObjectApi = {
    {
QT_MOC_LITERAL(0, 0, 14), // "testQObjectApi"
QT_MOC_LITERAL(1, 15, 26), // "qobjectTestPropertyChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 12), // "testProperty"
QT_MOC_LITERAL(4, 56, 19) // "qobjectTestProperty"

    },
    "testQObjectApi\0qobjectTestPropertyChanged\0"
    "\0testProperty\0qobjectTestProperty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_testQObjectApi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // properties: name, type, flags
       4, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void testQObjectApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        testQObjectApi *_t = static_cast<testQObjectApi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->qobjectTestPropertyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (testQObjectApi::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&testQObjectApi::qobjectTestPropertyChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        testQObjectApi *_t = static_cast<testQObjectApi *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->qobjectTestProperty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject testQObjectApi::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_testQObjectApi.data,
      qt_meta_data_testQObjectApi,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *testQObjectApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *testQObjectApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_testQObjectApi.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int testQObjectApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void testQObjectApi::qobjectTestPropertyChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ArbitraryVariantProvider_t {
    QByteArrayData data[27];
    char stringdata0[368];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArbitraryVariantProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArbitraryVariantProvider_t qt_meta_stringdata_ArbitraryVariantProvider = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ArbitraryVariantProvider"
QT_MOC_LITERAL(1, 25, 23), // "arbitraryVariantChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 13), // "changeVariant"
QT_MOC_LITERAL(4, 64, 24), // "setVariantToFilledPixmap"
QT_MOC_LITERAL(5, 89, 5), // "width"
QT_MOC_LITERAL(6, 95, 6), // "height"
QT_MOC_LITERAL(7, 102, 1), // "r"
QT_MOC_LITERAL(8, 104, 1), // "g"
QT_MOC_LITERAL(9, 106, 1), // "b"
QT_MOC_LITERAL(10, 108, 18), // "setVariantAddCount"
QT_MOC_LITERAL(11, 127, 10), // "addToCount"
QT_MOC_LITERAL(12, 138, 8), // "newValue"
QT_MOC_LITERAL(13, 147, 15), // "possibleVariant"
QT_MOC_LITERAL(14, 163, 15), // "randomFactorOne"
QT_MOC_LITERAL(15, 179, 15), // "randomFactorTwo"
QT_MOC_LITERAL(16, 195, 17), // "randomFactorThree"
QT_MOC_LITERAL(17, 213, 9), // "doNothing"
QT_MOC_LITERAL(18, 223, 27), // "incrementVariantChangeCount"
QT_MOC_LITERAL(19, 251, 21), // "setVariantChangeCount"
QT_MOC_LITERAL(20, 273, 8), // "newCount"
QT_MOC_LITERAL(21, 282, 18), // "variantChangeCount"
QT_MOC_LITERAL(22, 301, 24), // "modifyVariantChangeCount"
QT_MOC_LITERAL(23, 326, 9), // "countPlus"
QT_MOC_LITERAL(24, 336, 5), // "value"
QT_MOC_LITERAL(25, 342, 8), // "modifier"
QT_MOC_LITERAL(26, 351, 16) // "arbitraryVariant"

    },
    "ArbitraryVariantProvider\0"
    "arbitraryVariantChanged\0\0changeVariant\0"
    "setVariantToFilledPixmap\0width\0height\0"
    "r\0g\0b\0setVariantAddCount\0addToCount\0"
    "newValue\0possibleVariant\0randomFactorOne\0"
    "randomFactorTwo\0randomFactorThree\0"
    "doNothing\0incrementVariantChangeCount\0"
    "setVariantChangeCount\0newCount\0"
    "variantChangeCount\0modifyVariantChangeCount\0"
    "countPlus\0value\0modifier\0arbitraryVariant"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArbitraryVariantProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       1,  120, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   80,    2, 0x02 /* Public */,
       4,    5,   81,    2, 0x02 /* Public */,
      10,    2,   92,    2, 0x02 /* Public */,
      13,    3,   97,    2, 0x02 /* Public */,
      17,    0,  104,    2, 0x02 /* Public */,
      18,    0,  105,    2, 0x02 /* Public */,
      17,    1,  106,    2, 0x02 /* Public */,
      19,    1,  109,    2, 0x02 /* Public */,
      21,    0,  112,    2, 0x02 /* Public */,
      22,    0,  113,    2, 0x02 /* Public */,
      23,    1,  114,    2, 0x02 /* Public */,
      22,    1,  117,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,
    QMetaType::QVariant, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,    6,    7,    8,    9,
    QMetaType::QVariant, QMetaType::Int, QMetaType::QVariant,   11,   12,
    QMetaType::QVariant, QMetaType::Int, QMetaType::Int, QMetaType::Int,   14,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int, QMetaType::Int,   24,
    QMetaType::Int, QMetaType::Int,   25,

 // properties: name, type, flags
      26, QMetaType::QVariant, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void ArbitraryVariantProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ArbitraryVariantProvider *_t = static_cast<ArbitraryVariantProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->arbitraryVariantChanged(); break;
        case 1: { int _r = _t->changeVariant();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { QVariant _r = _t->setVariantToFilledPixmap((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVariant _r = _t->setVariantAddCount((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVariant _r = _t->possibleVariant((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->doNothing(); break;
        case 6: _t->incrementVariantChangeCount(); break;
        case 7: _t->doNothing((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setVariantChangeCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: { int _r = _t->variantChangeCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: { int _r = _t->modifyVariantChangeCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 11: { int _r = _t->countPlus((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 12: { int _r = _t->modifyVariantChangeCount((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ArbitraryVariantProvider::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArbitraryVariantProvider::arbitraryVariantChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ArbitraryVariantProvider *_t = static_cast<ArbitraryVariantProvider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->arbitraryVariant(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ArbitraryVariantProvider *_t = static_cast<ArbitraryVariantProvider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setArbitraryVariant(*reinterpret_cast< QVariant*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ArbitraryVariantProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ArbitraryVariantProvider.data,
      qt_meta_data_ArbitraryVariantProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ArbitraryVariantProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArbitraryVariantProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ArbitraryVariantProvider.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ArbitraryVariantProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ArbitraryVariantProvider::arbitraryVariantChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ScarceResourceProvider_t {
    QByteArrayData data[7];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScarceResourceProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScarceResourceProvider_t qt_meta_stringdata_ScarceResourceProvider = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ScarceResourceProvider"
QT_MOC_LITERAL(1, 23, 26), // "smallScarceResourceChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 26), // "largeScarceResourceChanged"
QT_MOC_LITERAL(4, 78, 15), // "changeResources"
QT_MOC_LITERAL(5, 94, 19), // "smallScarceResource"
QT_MOC_LITERAL(6, 114, 19) // "largeScarceResource"

    },
    "ScarceResourceProvider\0"
    "smallScarceResourceChanged\0\0"
    "largeScarceResourceChanged\0changeResources\0"
    "smallScarceResource\0largeScarceResource"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScarceResourceProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QPixmap, 0x00495103,
       6, QMetaType::QPixmap, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void ScarceResourceProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScarceResourceProvider *_t = static_cast<ScarceResourceProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->smallScarceResourceChanged(); break;
        case 1: _t->largeScarceResourceChanged(); break;
        case 2: _t->changeResources(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ScarceResourceProvider::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScarceResourceProvider::smallScarceResourceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ScarceResourceProvider::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScarceResourceProvider::largeScarceResourceChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ScarceResourceProvider *_t = static_cast<ScarceResourceProvider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPixmap*>(_v) = _t->smallScarceResource(); break;
        case 1: *reinterpret_cast< QPixmap*>(_v) = _t->largeScarceResource(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ScarceResourceProvider *_t = static_cast<ScarceResourceProvider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSmallScarceResource(*reinterpret_cast< QPixmap*>(_v)); break;
        case 1: _t->setLargeScarceResource(*reinterpret_cast< QPixmap*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject ScarceResourceProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ScarceResourceProvider.data,
      qt_meta_data_ScarceResourceProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ScarceResourceProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScarceResourceProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScarceResourceProvider.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ScarceResourceProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ScarceResourceProvider::smallScarceResourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ScarceResourceProvider::largeScarceResourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
