/****************************************************************************
** Meta object code from reading C++ file 'rep_simpleswitch_source.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rep_simpleswitch_source.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rep_simpleswitch_source.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SimpleSwitchSource_t {
    QByteArrayData data[11];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimpleSwitchSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimpleSwitchSource_t qt_meta_stringdata_SimpleSwitchSource = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SimpleSwitchSource"
QT_MOC_LITERAL(1, 19, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 37, 12), // "SimpleSwitch"
QT_MOC_LITERAL(3, 50, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 73, 40), // "848df11717af2d8be5106a80a701b..."
QT_MOC_LITERAL(5, 114, 16), // "currStateChanged"
QT_MOC_LITERAL(6, 131, 0), // ""
QT_MOC_LITERAL(7, 132, 13), // "pushCurrState"
QT_MOC_LITERAL(8, 146, 9), // "currState"
QT_MOC_LITERAL(9, 156, 11), // "server_slot"
QT_MOC_LITERAL(10, 168, 11) // "clientState"

    },
    "SimpleSwitchSource\0RemoteObject Type\0"
    "SimpleSwitch\0RemoteObject Signature\0"
    "848df11717af2d8be5106a80a701bfc5723baba7\0"
    "currStateChanged\0\0pushCurrState\0"
    "currState\0server_slot\0clientState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimpleSwitchSource[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       3,   18, // methods
       1,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   33,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   36,    6, 0x0a /* Public */,
       9,    1,   39,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,

 // properties: name, type, flags
       8, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void SimpleSwitchSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SimpleSwitchSource *_t = static_cast<SimpleSwitchSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->pushCurrState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->server_slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SimpleSwitchSource::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimpleSwitchSource::currStateChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SimpleSwitchSource *_t = static_cast<SimpleSwitchSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->currState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SimpleSwitchSource *_t = static_cast<SimpleSwitchSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrState(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SimpleSwitchSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SimpleSwitchSource.data,
      qt_meta_data_SimpleSwitchSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SimpleSwitchSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimpleSwitchSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimpleSwitchSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SimpleSwitchSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SimpleSwitchSource::currStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SimpleSwitchSimpleSource_t {
    QByteArrayData data[11];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimpleSwitchSimpleSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimpleSwitchSimpleSource_t qt_meta_stringdata_SimpleSwitchSimpleSource = {
    {
QT_MOC_LITERAL(0, 0, 24), // "SimpleSwitchSimpleSource"
QT_MOC_LITERAL(1, 25, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 43, 12), // "SimpleSwitch"
QT_MOC_LITERAL(3, 56, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 79, 40), // "848df11717af2d8be5106a80a701b..."
QT_MOC_LITERAL(5, 120, 16), // "currStateChanged"
QT_MOC_LITERAL(6, 137, 0), // ""
QT_MOC_LITERAL(7, 138, 13), // "pushCurrState"
QT_MOC_LITERAL(8, 152, 9), // "currState"
QT_MOC_LITERAL(9, 162, 11), // "server_slot"
QT_MOC_LITERAL(10, 174, 11) // "clientState"

    },
    "SimpleSwitchSimpleSource\0RemoteObject Type\0"
    "SimpleSwitch\0RemoteObject Signature\0"
    "848df11717af2d8be5106a80a701bfc5723baba7\0"
    "currStateChanged\0\0pushCurrState\0"
    "currState\0server_slot\0clientState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimpleSwitchSimpleSource[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       3,   18, // methods
       1,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   33,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   36,    6, 0x0a /* Public */,
       9,    1,   39,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,

 // properties: name, type, flags
       8, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void SimpleSwitchSimpleSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SimpleSwitchSimpleSource *_t = static_cast<SimpleSwitchSimpleSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->pushCurrState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->server_slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SimpleSwitchSimpleSource::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimpleSwitchSimpleSource::currStateChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SimpleSwitchSimpleSource *_t = static_cast<SimpleSwitchSimpleSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->currState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SimpleSwitchSimpleSource *_t = static_cast<SimpleSwitchSimpleSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrState(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SimpleSwitchSimpleSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SimpleSwitchSimpleSource.data,
      qt_meta_data_SimpleSwitchSimpleSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SimpleSwitchSimpleSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimpleSwitchSimpleSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimpleSwitchSimpleSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SimpleSwitchSimpleSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SimpleSwitchSimpleSource::currStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
