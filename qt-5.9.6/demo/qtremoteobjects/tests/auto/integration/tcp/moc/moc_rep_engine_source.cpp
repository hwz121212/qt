/****************************************************************************
** Meta object code from reading C++ file 'rep_engine_source.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rep_engine_source.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rep_engine_source.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EngineSource_t {
    QByteArrayData data[34];
    char stringdata0[431];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EngineSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EngineSource_t qt_meta_stringdata_EngineSource = {
    {
QT_MOC_LITERAL(0, 0, 12), // "EngineSource"
QT_MOC_LITERAL(1, 13, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 31, 6), // "Engine"
QT_MOC_LITERAL(3, 38, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 61, 40), // "251e6cd1e5d8070a848b9f195be8b..."
QT_MOC_LITERAL(5, 102, 14), // "startedChanged"
QT_MOC_LITERAL(6, 117, 0), // ""
QT_MOC_LITERAL(7, 118, 10), // "rpmChanged"
QT_MOC_LITERAL(8, 129, 17), // "engineTypeChanged"
QT_MOC_LITERAL(9, 147, 24), // "EngineSource::EngineType"
QT_MOC_LITERAL(10, 172, 11), // "pushStarted"
QT_MOC_LITERAL(11, 184, 7), // "started"
QT_MOC_LITERAL(12, 192, 14), // "pushEngineType"
QT_MOC_LITERAL(13, 207, 10), // "EngineType"
QT_MOC_LITERAL(14, 218, 10), // "engineType"
QT_MOC_LITERAL(15, 229, 5), // "start"
QT_MOC_LITERAL(16, 235, 11), // "increaseRpm"
QT_MOC_LITERAL(17, 247, 8), // "deltaRpm"
QT_MOC_LITERAL(18, 256, 21), // "unnormalizedSignature"
QT_MOC_LITERAL(19, 278, 1), // "a"
QT_MOC_LITERAL(20, 280, 1), // "b"
QT_MOC_LITERAL(21, 282, 11), // "temperature"
QT_MOC_LITERAL(22, 294, 11), // "Temperature"
QT_MOC_LITERAL(23, 306, 20), // "setSharedTemperature"
QT_MOC_LITERAL(24, 327, 16), // "Temperature::Ptr"
QT_MOC_LITERAL(25, 344, 17), // "sharedTemperature"
QT_MOC_LITERAL(26, 362, 12), // "myTestString"
QT_MOC_LITERAL(27, 375, 15), // "setMyTestString"
QT_MOC_LITERAL(28, 391, 5), // "value"
QT_MOC_LITERAL(29, 397, 9), // "cylinders"
QT_MOC_LITERAL(30, 407, 3), // "rpm"
QT_MOC_LITERAL(31, 411, 3), // "GAS"
QT_MOC_LITERAL(32, 415, 8), // "ELECTRIC"
QT_MOC_LITERAL(33, 424, 6) // "HYBRID"

    },
    "EngineSource\0RemoteObject Type\0Engine\0"
    "RemoteObject Signature\0"
    "251e6cd1e5d8070a848b9f195be8bde5a0fb488d\0"
    "startedChanged\0\0rpmChanged\0engineTypeChanged\0"
    "EngineSource::EngineType\0pushStarted\0"
    "started\0pushEngineType\0EngineType\0"
    "engineType\0start\0increaseRpm\0deltaRpm\0"
    "unnormalizedSignature\0a\0b\0temperature\0"
    "Temperature\0setSharedTemperature\0"
    "Temperature::Ptr\0sharedTemperature\0"
    "myTestString\0setMyTestString\0value\0"
    "cylinders\0rpm\0GAS\0ELECTRIC\0HYBRID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EngineSource[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
      12,   18, // methods
       4,  110, // properties
       1,  126, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   78,    6, 0x06 /* Public */,
       7,    1,   81,    6, 0x06 /* Public */,
       8,    1,   84,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   87,    6, 0x0a /* Public */,
      12,    1,   90,    6, 0x0a /* Public */,
      15,    0,   93,    6, 0x0a /* Public */,
      16,    1,   94,    6, 0x0a /* Public */,
      18,    2,   97,    6, 0x0a /* Public */,
      21,    0,  102,    6, 0x0a /* Public */,
      23,    1,  103,    6, 0x0a /* Public */,
      26,    0,  106,    6, 0x0a /* Public */,
      27,    1,  107,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 9,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   20,
    0x80000000 | 22,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   28,

 // properties: name, type, flags
      29, QMetaType::Int, 0x00095401,
      11, QMetaType::Bool, 0x00495103,
      30, QMetaType::Int, 0x00495103,
      14, 0x80000000 | 13, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,

 // enums: name, flags, count, data
      13, 0x0,    3,  130,

 // enum data: key, value
      31, uint(EngineSource::GAS),
      32, uint(EngineSource::ELECTRIC),
      33, uint(EngineSource::HYBRID),

       0        // eod
};

void EngineSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EngineSource *_t = static_cast<EngineSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->rpmChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->engineTypeChanged((*reinterpret_cast< EngineSource::EngineType(*)>(_a[1]))); break;
        case 3: _t->pushStarted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->pushEngineType((*reinterpret_cast< EngineType(*)>(_a[1]))); break;
        case 5: { bool _r = _t->start();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->increaseRpm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->unnormalizedSignature((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: { Temperature _r = _t->temperature();
            if (_a[0]) *reinterpret_cast< Temperature*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setSharedTemperature((*reinterpret_cast< const Temperature::Ptr(*)>(_a[1]))); break;
        case 10: { QString _r = _t->myTestString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setMyTestString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Temperature::Ptr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (EngineSource::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EngineSource::startedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (EngineSource::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EngineSource::rpmChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (EngineSource::*_t)(EngineSource::EngineType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EngineSource::engineTypeChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        EngineSource *_t = static_cast<EngineSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->cylinders(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->started(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->rpm(); break;
        case 3: *reinterpret_cast< EngineType*>(_v) = _t->engineType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        EngineSource *_t = static_cast<EngineSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setStarted(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setRpm(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setEngineType(*reinterpret_cast< EngineType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject EngineSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EngineSource.data,
      qt_meta_data_EngineSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EngineSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EngineSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EngineSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int EngineSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void EngineSource::startedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EngineSource::rpmChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EngineSource::engineTypeChanged(EngineSource::EngineType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_EngineSimpleSource_t {
    QByteArrayData data[34];
    char stringdata0[443];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EngineSimpleSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EngineSimpleSource_t qt_meta_stringdata_EngineSimpleSource = {
    {
QT_MOC_LITERAL(0, 0, 18), // "EngineSimpleSource"
QT_MOC_LITERAL(1, 19, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 37, 6), // "Engine"
QT_MOC_LITERAL(3, 44, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 67, 40), // "251e6cd1e5d8070a848b9f195be8b..."
QT_MOC_LITERAL(5, 108, 14), // "startedChanged"
QT_MOC_LITERAL(6, 123, 0), // ""
QT_MOC_LITERAL(7, 124, 10), // "rpmChanged"
QT_MOC_LITERAL(8, 135, 17), // "engineTypeChanged"
QT_MOC_LITERAL(9, 153, 30), // "EngineSimpleSource::EngineType"
QT_MOC_LITERAL(10, 184, 11), // "pushStarted"
QT_MOC_LITERAL(11, 196, 7), // "started"
QT_MOC_LITERAL(12, 204, 14), // "pushEngineType"
QT_MOC_LITERAL(13, 219, 10), // "EngineType"
QT_MOC_LITERAL(14, 230, 10), // "engineType"
QT_MOC_LITERAL(15, 241, 5), // "start"
QT_MOC_LITERAL(16, 247, 11), // "increaseRpm"
QT_MOC_LITERAL(17, 259, 8), // "deltaRpm"
QT_MOC_LITERAL(18, 268, 21), // "unnormalizedSignature"
QT_MOC_LITERAL(19, 290, 1), // "a"
QT_MOC_LITERAL(20, 292, 1), // "b"
QT_MOC_LITERAL(21, 294, 11), // "temperature"
QT_MOC_LITERAL(22, 306, 11), // "Temperature"
QT_MOC_LITERAL(23, 318, 20), // "setSharedTemperature"
QT_MOC_LITERAL(24, 339, 16), // "Temperature::Ptr"
QT_MOC_LITERAL(25, 356, 17), // "sharedTemperature"
QT_MOC_LITERAL(26, 374, 12), // "myTestString"
QT_MOC_LITERAL(27, 387, 15), // "setMyTestString"
QT_MOC_LITERAL(28, 403, 5), // "value"
QT_MOC_LITERAL(29, 409, 9), // "cylinders"
QT_MOC_LITERAL(30, 419, 3), // "rpm"
QT_MOC_LITERAL(31, 423, 3), // "GAS"
QT_MOC_LITERAL(32, 427, 8), // "ELECTRIC"
QT_MOC_LITERAL(33, 436, 6) // "HYBRID"

    },
    "EngineSimpleSource\0RemoteObject Type\0"
    "Engine\0RemoteObject Signature\0"
    "251e6cd1e5d8070a848b9f195be8bde5a0fb488d\0"
    "startedChanged\0\0rpmChanged\0engineTypeChanged\0"
    "EngineSimpleSource::EngineType\0"
    "pushStarted\0started\0pushEngineType\0"
    "EngineType\0engineType\0start\0increaseRpm\0"
    "deltaRpm\0unnormalizedSignature\0a\0b\0"
    "temperature\0Temperature\0setSharedTemperature\0"
    "Temperature::Ptr\0sharedTemperature\0"
    "myTestString\0setMyTestString\0value\0"
    "cylinders\0rpm\0GAS\0ELECTRIC\0HYBRID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EngineSimpleSource[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
      12,   18, // methods
       4,  110, // properties
       1,  126, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   78,    6, 0x06 /* Public */,
       7,    1,   81,    6, 0x06 /* Public */,
       8,    1,   84,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   87,    6, 0x0a /* Public */,
      12,    1,   90,    6, 0x0a /* Public */,
      15,    0,   93,    6, 0x0a /* Public */,
      16,    1,   94,    6, 0x0a /* Public */,
      18,    2,   97,    6, 0x0a /* Public */,
      21,    0,  102,    6, 0x0a /* Public */,
      23,    1,  103,    6, 0x0a /* Public */,
      26,    0,  106,    6, 0x0a /* Public */,
      27,    1,  107,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 9,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   20,
    0x80000000 | 22,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   28,

 // properties: name, type, flags
      29, QMetaType::Int, 0x00095401,
      11, QMetaType::Bool, 0x00495103,
      30, QMetaType::Int, 0x00495103,
      14, 0x80000000 | 13, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,

 // enums: name, flags, count, data
      13, 0x0,    3,  130,

 // enum data: key, value
      31, uint(EngineSimpleSource::GAS),
      32, uint(EngineSimpleSource::ELECTRIC),
      33, uint(EngineSimpleSource::HYBRID),

       0        // eod
};

void EngineSimpleSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EngineSimpleSource *_t = static_cast<EngineSimpleSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->rpmChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->engineTypeChanged((*reinterpret_cast< EngineSimpleSource::EngineType(*)>(_a[1]))); break;
        case 3: _t->pushStarted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->pushEngineType((*reinterpret_cast< EngineType(*)>(_a[1]))); break;
        case 5: { bool _r = _t->start();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->increaseRpm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->unnormalizedSignature((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: { Temperature _r = _t->temperature();
            if (_a[0]) *reinterpret_cast< Temperature*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setSharedTemperature((*reinterpret_cast< const Temperature::Ptr(*)>(_a[1]))); break;
        case 10: { QString _r = _t->myTestString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setMyTestString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Temperature::Ptr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (EngineSimpleSource::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EngineSimpleSource::startedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (EngineSimpleSource::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EngineSimpleSource::rpmChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (EngineSimpleSource::*_t)(EngineSimpleSource::EngineType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EngineSimpleSource::engineTypeChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        EngineSimpleSource *_t = static_cast<EngineSimpleSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->cylinders(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->started(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->rpm(); break;
        case 3: *reinterpret_cast< EngineType*>(_v) = _t->engineType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        EngineSimpleSource *_t = static_cast<EngineSimpleSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setStarted(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setRpm(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setEngineType(*reinterpret_cast< EngineType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject EngineSimpleSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EngineSimpleSource.data,
      qt_meta_data_EngineSimpleSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EngineSimpleSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EngineSimpleSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EngineSimpleSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int EngineSimpleSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void EngineSimpleSource::startedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EngineSimpleSource::rpmChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EngineSimpleSource::engineTypeChanged(EngineSimpleSource::EngineType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
