/****************************************************************************
** Meta object code from reading C++ file 'rep_MyInterface_source.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rep_MyInterface_source.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rep_MyInterface_source.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyInterfaceSource_t {
    QByteArrayData data[20];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyInterfaceSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyInterfaceSource_t qt_meta_stringdata_MyInterfaceSource = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MyInterfaceSource"
QT_MOC_LITERAL(1, 18, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 36, 11), // "MyInterface"
QT_MOC_LITERAL(3, 48, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 71, 40), // "8e78021bdc1e6adb4b9463fd52840..."
QT_MOC_LITERAL(5, 112, 12), // "enum1Changed"
QT_MOC_LITERAL(6, 125, 0), // ""
QT_MOC_LITERAL(7, 126, 24), // "MyInterfaceSource::Enum1"
QT_MOC_LITERAL(8, 151, 14), // "startedChanged"
QT_MOC_LITERAL(9, 166, 7), // "advance"
QT_MOC_LITERAL(10, 174, 9), // "pushEnum1"
QT_MOC_LITERAL(11, 184, 5), // "Enum1"
QT_MOC_LITERAL(12, 190, 5), // "enum1"
QT_MOC_LITERAL(13, 196, 11), // "pushStarted"
QT_MOC_LITERAL(14, 208, 7), // "started"
QT_MOC_LITERAL(15, 216, 5), // "start"
QT_MOC_LITERAL(16, 222, 4), // "stop"
QT_MOC_LITERAL(17, 227, 5), // "First"
QT_MOC_LITERAL(18, 233, 6), // "Second"
QT_MOC_LITERAL(19, 240, 5) // "Third"

    },
    "MyInterfaceSource\0RemoteObject Type\0"
    "MyInterface\0RemoteObject Signature\0"
    "8e78021bdc1e6adb4b9463fd528409079def070a\0"
    "enum1Changed\0\0MyInterfaceSource::Enum1\0"
    "startedChanged\0advance\0pushEnum1\0Enum1\0"
    "enum1\0pushStarted\0started\0start\0stop\0"
    "First\0Second\0Third"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyInterfaceSource[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       7,   18, // methods
       2,   68, // properties
       1,   76, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   53,    6, 0x06 /* Public */,
       8,    1,   56,    6, 0x06 /* Public */,
       9,    0,   59,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   60,    6, 0x0a /* Public */,
      13,    1,   63,    6, 0x0a /* Public */,
      15,    0,   66,    6, 0x0a /* Public */,
      16,    0,   67,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 7,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Bool,
    QMetaType::Bool,

 // properties: name, type, flags
      12, 0x80000000 | 11, 0x0049510b,
      14, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
      11, 0x0,    3,   80,

 // enum data: key, value
      17, uint(MyInterfaceSource::First),
      18, uint(MyInterfaceSource::Second),
      19, uint(MyInterfaceSource::Third),

       0        // eod
};

void MyInterfaceSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyInterfaceSource *_t = static_cast<MyInterfaceSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enum1Changed((*reinterpret_cast< MyInterfaceSource::Enum1(*)>(_a[1]))); break;
        case 1: _t->startedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->advance(); break;
        case 3: _t->pushEnum1((*reinterpret_cast< Enum1(*)>(_a[1]))); break;
        case 4: _t->pushStarted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: { bool _r = _t->start();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->stop();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MyInterfaceSource::*_t)(MyInterfaceSource::Enum1 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyInterfaceSource::enum1Changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyInterfaceSource::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyInterfaceSource::startedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MyInterfaceSource::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyInterfaceSource::advance)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MyInterfaceSource *_t = static_cast<MyInterfaceSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Enum1*>(_v) = _t->enum1(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->started(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MyInterfaceSource *_t = static_cast<MyInterfaceSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnum1(*reinterpret_cast< Enum1*>(_v)); break;
        case 1: _t->setStarted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject MyInterfaceSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyInterfaceSource.data,
      qt_meta_data_MyInterfaceSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyInterfaceSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyInterfaceSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyInterfaceSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyInterfaceSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void MyInterfaceSource::enum1Changed(MyInterfaceSource::Enum1 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyInterfaceSource::startedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyInterfaceSource::advance()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_MyInterfaceSimpleSource_t {
    QByteArrayData data[20];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyInterfaceSimpleSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyInterfaceSimpleSource_t qt_meta_stringdata_MyInterfaceSimpleSource = {
    {
QT_MOC_LITERAL(0, 0, 23), // "MyInterfaceSimpleSource"
QT_MOC_LITERAL(1, 24, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 42, 11), // "MyInterface"
QT_MOC_LITERAL(3, 54, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 77, 40), // "8e78021bdc1e6adb4b9463fd52840..."
QT_MOC_LITERAL(5, 118, 12), // "enum1Changed"
QT_MOC_LITERAL(6, 131, 0), // ""
QT_MOC_LITERAL(7, 132, 30), // "MyInterfaceSimpleSource::Enum1"
QT_MOC_LITERAL(8, 163, 14), // "startedChanged"
QT_MOC_LITERAL(9, 178, 7), // "advance"
QT_MOC_LITERAL(10, 186, 9), // "pushEnum1"
QT_MOC_LITERAL(11, 196, 5), // "Enum1"
QT_MOC_LITERAL(12, 202, 5), // "enum1"
QT_MOC_LITERAL(13, 208, 11), // "pushStarted"
QT_MOC_LITERAL(14, 220, 7), // "started"
QT_MOC_LITERAL(15, 228, 5), // "start"
QT_MOC_LITERAL(16, 234, 4), // "stop"
QT_MOC_LITERAL(17, 239, 5), // "First"
QT_MOC_LITERAL(18, 245, 6), // "Second"
QT_MOC_LITERAL(19, 252, 5) // "Third"

    },
    "MyInterfaceSimpleSource\0RemoteObject Type\0"
    "MyInterface\0RemoteObject Signature\0"
    "8e78021bdc1e6adb4b9463fd528409079def070a\0"
    "enum1Changed\0\0MyInterfaceSimpleSource::Enum1\0"
    "startedChanged\0advance\0pushEnum1\0Enum1\0"
    "enum1\0pushStarted\0started\0start\0stop\0"
    "First\0Second\0Third"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyInterfaceSimpleSource[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       7,   18, // methods
       2,   68, // properties
       1,   76, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   53,    6, 0x06 /* Public */,
       8,    1,   56,    6, 0x06 /* Public */,
       9,    0,   59,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   60,    6, 0x0a /* Public */,
      13,    1,   63,    6, 0x0a /* Public */,
      15,    0,   66,    6, 0x0a /* Public */,
      16,    0,   67,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 7,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Bool,
    QMetaType::Bool,

 // properties: name, type, flags
      12, 0x80000000 | 11, 0x0049510b,
      14, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
      11, 0x0,    3,   80,

 // enum data: key, value
      17, uint(MyInterfaceSimpleSource::First),
      18, uint(MyInterfaceSimpleSource::Second),
      19, uint(MyInterfaceSimpleSource::Third),

       0        // eod
};

void MyInterfaceSimpleSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyInterfaceSimpleSource *_t = static_cast<MyInterfaceSimpleSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enum1Changed((*reinterpret_cast< MyInterfaceSimpleSource::Enum1(*)>(_a[1]))); break;
        case 1: _t->startedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->advance(); break;
        case 3: _t->pushEnum1((*reinterpret_cast< Enum1(*)>(_a[1]))); break;
        case 4: _t->pushStarted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: { bool _r = _t->start();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->stop();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MyInterfaceSimpleSource::*_t)(MyInterfaceSimpleSource::Enum1 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyInterfaceSimpleSource::enum1Changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyInterfaceSimpleSource::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyInterfaceSimpleSource::startedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MyInterfaceSimpleSource::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyInterfaceSimpleSource::advance)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MyInterfaceSimpleSource *_t = static_cast<MyInterfaceSimpleSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Enum1*>(_v) = _t->enum1(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->started(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MyInterfaceSimpleSource *_t = static_cast<MyInterfaceSimpleSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnum1(*reinterpret_cast< Enum1*>(_v)); break;
        case 1: _t->setStarted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject MyInterfaceSimpleSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyInterfaceSimpleSource.data,
      qt_meta_data_MyInterfaceSimpleSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyInterfaceSimpleSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyInterfaceSimpleSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyInterfaceSimpleSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyInterfaceSimpleSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void MyInterfaceSimpleSource::enum1Changed(MyInterfaceSimpleSource::Enum1 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyInterfaceSimpleSource::startedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyInterfaceSimpleSource::advance()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
