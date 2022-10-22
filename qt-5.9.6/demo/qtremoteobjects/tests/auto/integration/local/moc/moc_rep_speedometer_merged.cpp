/****************************************************************************
** Meta object code from reading C++ file 'rep_speedometer_merged.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rep_speedometer_merged.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rep_speedometer_merged.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpeedometerReplica_t {
    QByteArrayData data[9];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpeedometerReplica_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpeedometerReplica_t qt_meta_stringdata_SpeedometerReplica = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SpeedometerReplica"
QT_MOC_LITERAL(1, 19, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 37, 11), // "Speedometer"
QT_MOC_LITERAL(3, 49, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 72, 40), // "0dce25c23392bcb848529e49e6028..."
QT_MOC_LITERAL(5, 113, 10), // "mphChanged"
QT_MOC_LITERAL(6, 124, 0), // ""
QT_MOC_LITERAL(7, 125, 7), // "pushMph"
QT_MOC_LITERAL(8, 133, 3) // "mph"

    },
    "SpeedometerReplica\0RemoteObject Type\0"
    "Speedometer\0RemoteObject Signature\0"
    "0dce25c23392bcb848529e49e60283f15d63c141\0"
    "mphChanged\0\0pushMph\0mph"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpeedometerReplica[] = {

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
       7,    1,   31,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void SpeedometerReplica::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpeedometerReplica *_t = static_cast<SpeedometerReplica *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mphChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->pushMph((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SpeedometerReplica::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpeedometerReplica::mphChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SpeedometerReplica *_t = static_cast<SpeedometerReplica *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->mph(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SpeedometerReplica::staticMetaObject = {
    { &QRemoteObjectReplica::staticMetaObject, qt_meta_stringdata_SpeedometerReplica.data,
      qt_meta_data_SpeedometerReplica,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SpeedometerReplica::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpeedometerReplica::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpeedometerReplica.stringdata0))
        return static_cast<void*>(this);
    return QRemoteObjectReplica::qt_metacast(_clname);
}

int SpeedometerReplica::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SpeedometerReplica::mphChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SpeedometerSource_t {
    QByteArrayData data[9];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpeedometerSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpeedometerSource_t qt_meta_stringdata_SpeedometerSource = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SpeedometerSource"
QT_MOC_LITERAL(1, 18, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 36, 11), // "Speedometer"
QT_MOC_LITERAL(3, 48, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 71, 40), // "0dce25c23392bcb848529e49e6028..."
QT_MOC_LITERAL(5, 112, 10), // "mphChanged"
QT_MOC_LITERAL(6, 123, 0), // ""
QT_MOC_LITERAL(7, 124, 7), // "pushMph"
QT_MOC_LITERAL(8, 132, 3) // "mph"

    },
    "SpeedometerSource\0RemoteObject Type\0"
    "Speedometer\0RemoteObject Signature\0"
    "0dce25c23392bcb848529e49e60283f15d63c141\0"
    "mphChanged\0\0pushMph\0mph"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpeedometerSource[] = {

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
       7,    1,   31,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void SpeedometerSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpeedometerSource *_t = static_cast<SpeedometerSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mphChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->pushMph((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SpeedometerSource::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpeedometerSource::mphChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SpeedometerSource *_t = static_cast<SpeedometerSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->mph(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SpeedometerSource *_t = static_cast<SpeedometerSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMph(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SpeedometerSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SpeedometerSource.data,
      qt_meta_data_SpeedometerSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SpeedometerSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpeedometerSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpeedometerSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SpeedometerSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SpeedometerSource::mphChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SpeedometerSimpleSource_t {
    QByteArrayData data[9];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpeedometerSimpleSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpeedometerSimpleSource_t qt_meta_stringdata_SpeedometerSimpleSource = {
    {
QT_MOC_LITERAL(0, 0, 23), // "SpeedometerSimpleSource"
QT_MOC_LITERAL(1, 24, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 42, 11), // "Speedometer"
QT_MOC_LITERAL(3, 54, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 77, 40), // "0dce25c23392bcb848529e49e6028..."
QT_MOC_LITERAL(5, 118, 10), // "mphChanged"
QT_MOC_LITERAL(6, 129, 0), // ""
QT_MOC_LITERAL(7, 130, 7), // "pushMph"
QT_MOC_LITERAL(8, 138, 3) // "mph"

    },
    "SpeedometerSimpleSource\0RemoteObject Type\0"
    "Speedometer\0RemoteObject Signature\0"
    "0dce25c23392bcb848529e49e60283f15d63c141\0"
    "mphChanged\0\0pushMph\0mph"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpeedometerSimpleSource[] = {

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
       7,    1,   31,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void SpeedometerSimpleSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpeedometerSimpleSource *_t = static_cast<SpeedometerSimpleSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mphChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->pushMph((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SpeedometerSimpleSource::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpeedometerSimpleSource::mphChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SpeedometerSimpleSource *_t = static_cast<SpeedometerSimpleSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->mph(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SpeedometerSimpleSource *_t = static_cast<SpeedometerSimpleSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMph(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SpeedometerSimpleSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SpeedometerSimpleSource.data,
      qt_meta_data_SpeedometerSimpleSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SpeedometerSimpleSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpeedometerSimpleSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpeedometerSimpleSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SpeedometerSimpleSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SpeedometerSimpleSource::mphChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
