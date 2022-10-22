/****************************************************************************
** Meta object code from reading C++ file 'rep_pod_merged.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rep_pod_merged.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rep_pod_merged.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyPOD_t {
    QByteArrayData data[4];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyPOD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyPOD_t qt_meta_stringdata_MyPOD = {
    {
QT_MOC_LITERAL(0, 0, 5), // "MyPOD"
QT_MOC_LITERAL(1, 6, 1), // "i"
QT_MOC_LITERAL(2, 8, 1), // "f"
QT_MOC_LITERAL(3, 10, 1) // "s"

    },
    "MyPOD\0i\0f\0s"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyPOD[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095103,
       2, QMetaType::Float, 0x00095103,
       3, QMetaType::QString, 0x00095103,

       0        // eod
};

void MyPOD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        MyPOD *_t = reinterpret_cast<MyPOD *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->i(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->f(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->s(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MyPOD *_t = reinterpret_cast<MyPOD *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setI(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setF(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setS(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject MyPOD::staticMetaObject = {
    { nullptr, qt_meta_stringdata_MyPOD.data,
      qt_meta_data_MyPOD,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_MyClassReplica_t {
    QByteArrayData data[10];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyClassReplica_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyClassReplica_t qt_meta_stringdata_MyClassReplica = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MyClassReplica"
QT_MOC_LITERAL(1, 15, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 33, 7), // "MyClass"
QT_MOC_LITERAL(3, 41, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 64, 40), // "f6d2be61301b7a80ee362f8d4109b..."
QT_MOC_LITERAL(5, 105, 12), // "myPODChanged"
QT_MOC_LITERAL(6, 118, 0), // ""
QT_MOC_LITERAL(7, 119, 5), // "MyPOD"
QT_MOC_LITERAL(8, 125, 9), // "pushMyPOD"
QT_MOC_LITERAL(9, 135, 5) // "myPOD"

    },
    "MyClassReplica\0RemoteObject Type\0"
    "MyClass\0RemoteObject Signature\0"
    "f6d2be61301b7a80ee362f8d4109b5b7c0da7440\0"
    "myPODChanged\0\0MyPOD\0pushMyPOD\0myPOD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyClassReplica[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       2,   18, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   28,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   31,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 7,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    9,

 // properties: name, type, flags
       9, 0x80000000 | 7, 0x00495009,

 // properties: notify_signal_id
       0,

       0        // eod
};

void MyClassReplica::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyClassReplica *_t = static_cast<MyClassReplica *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->myPODChanged((*reinterpret_cast< MyPOD(*)>(_a[1]))); break;
        case 1: _t->pushMyPOD((*reinterpret_cast< MyPOD(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MyClassReplica::*_t)(MyPOD );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyClassReplica::myPODChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MyClassReplica *_t = static_cast<MyClassReplica *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< MyPOD*>(_v) = _t->myPOD(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject MyClassReplica::staticMetaObject = {
    { &QRemoteObjectReplica::staticMetaObject, qt_meta_stringdata_MyClassReplica.data,
      qt_meta_data_MyClassReplica,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyClassReplica::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyClassReplica::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyClassReplica.stringdata0))
        return static_cast<void*>(this);
    return QRemoteObjectReplica::qt_metacast(_clname);
}

int MyClassReplica::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRemoteObjectReplica::qt_metacall(_c, _id, _a);
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
void MyClassReplica::myPODChanged(MyPOD _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MyClassSource_t {
    QByteArrayData data[10];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyClassSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyClassSource_t qt_meta_stringdata_MyClassSource = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MyClassSource"
QT_MOC_LITERAL(1, 14, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 32, 7), // "MyClass"
QT_MOC_LITERAL(3, 40, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 63, 40), // "f6d2be61301b7a80ee362f8d4109b..."
QT_MOC_LITERAL(5, 104, 12), // "myPODChanged"
QT_MOC_LITERAL(6, 117, 0), // ""
QT_MOC_LITERAL(7, 118, 5), // "MyPOD"
QT_MOC_LITERAL(8, 124, 9), // "pushMyPOD"
QT_MOC_LITERAL(9, 134, 5) // "myPOD"

    },
    "MyClassSource\0RemoteObject Type\0MyClass\0"
    "RemoteObject Signature\0"
    "f6d2be61301b7a80ee362f8d4109b5b7c0da7440\0"
    "myPODChanged\0\0MyPOD\0pushMyPOD\0myPOD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyClassSource[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       2,   18, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   28,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   31,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 7,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    9,

 // properties: name, type, flags
       9, 0x80000000 | 7, 0x0049510b,

 // properties: notify_signal_id
       0,

       0        // eod
};

void MyClassSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyClassSource *_t = static_cast<MyClassSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->myPODChanged((*reinterpret_cast< MyPOD(*)>(_a[1]))); break;
        case 1: _t->pushMyPOD((*reinterpret_cast< MyPOD(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MyClassSource::*_t)(MyPOD );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyClassSource::myPODChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MyClassSource *_t = static_cast<MyClassSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< MyPOD*>(_v) = _t->myPOD(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MyClassSource *_t = static_cast<MyClassSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMyPOD(*reinterpret_cast< MyPOD*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject MyClassSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyClassSource.data,
      qt_meta_data_MyClassSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyClassSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyClassSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyClassSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyClassSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MyClassSource::myPODChanged(MyPOD _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MyClassSimpleSource_t {
    QByteArrayData data[10];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyClassSimpleSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyClassSimpleSource_t qt_meta_stringdata_MyClassSimpleSource = {
    {
QT_MOC_LITERAL(0, 0, 19), // "MyClassSimpleSource"
QT_MOC_LITERAL(1, 20, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 38, 7), // "MyClass"
QT_MOC_LITERAL(3, 46, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 69, 40), // "f6d2be61301b7a80ee362f8d4109b..."
QT_MOC_LITERAL(5, 110, 12), // "myPODChanged"
QT_MOC_LITERAL(6, 123, 0), // ""
QT_MOC_LITERAL(7, 124, 5), // "MyPOD"
QT_MOC_LITERAL(8, 130, 9), // "pushMyPOD"
QT_MOC_LITERAL(9, 140, 5) // "myPOD"

    },
    "MyClassSimpleSource\0RemoteObject Type\0"
    "MyClass\0RemoteObject Signature\0"
    "f6d2be61301b7a80ee362f8d4109b5b7c0da7440\0"
    "myPODChanged\0\0MyPOD\0pushMyPOD\0myPOD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyClassSimpleSource[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       2,   18, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   28,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   31,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 7,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    9,

 // properties: name, type, flags
       9, 0x80000000 | 7, 0x0049510b,

 // properties: notify_signal_id
       0,

       0        // eod
};

void MyClassSimpleSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyClassSimpleSource *_t = static_cast<MyClassSimpleSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->myPODChanged((*reinterpret_cast< MyPOD(*)>(_a[1]))); break;
        case 1: _t->pushMyPOD((*reinterpret_cast< MyPOD(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MyClassSimpleSource::*_t)(MyPOD );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyClassSimpleSource::myPODChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MyClassSimpleSource *_t = static_cast<MyClassSimpleSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< MyPOD*>(_v) = _t->myPOD(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MyClassSimpleSource *_t = static_cast<MyClassSimpleSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMyPOD(*reinterpret_cast< MyPOD*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject MyClassSimpleSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyClassSimpleSource.data,
      qt_meta_data_MyClassSimpleSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyClassSimpleSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyClassSimpleSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyClassSimpleSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyClassSimpleSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MyClassSimpleSource::myPODChanged(MyPOD _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
