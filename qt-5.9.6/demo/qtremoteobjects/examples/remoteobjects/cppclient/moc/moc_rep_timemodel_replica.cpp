/****************************************************************************
** Meta object code from reading C++ file 'rep_timemodel_replica.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rep_timemodel_replica.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rep_timemodel_replica.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PresetInfo_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PresetInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PresetInfo_t qt_meta_stringdata_PresetInfo = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PresetInfo"
QT_MOC_LITERAL(1, 11, 12), // "presetNumber"
QT_MOC_LITERAL(2, 24, 9), // "frequency"
QT_MOC_LITERAL(3, 34, 11) // "stationName"

    },
    "PresetInfo\0presetNumber\0frequency\0"
    "stationName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PresetInfo[] = {

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

void PresetInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        PresetInfo *_t = reinterpret_cast<PresetInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->presetNumber(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->frequency(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->stationName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PresetInfo *_t = reinterpret_cast<PresetInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPresetNumber(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setFrequency(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setStationName(*reinterpret_cast< QString*>(_v)); break;
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

const QMetaObject PresetInfo::staticMetaObject = {
    { nullptr, qt_meta_stringdata_PresetInfo.data,
      qt_meta_data_PresetInfo,  qt_static_metacall, nullptr, nullptr}
};

struct qt_meta_stringdata_MinuteTimerReplica_t {
    QByteArrayData data[20];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MinuteTimerReplica_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MinuteTimerReplica_t qt_meta_stringdata_MinuteTimerReplica = {
    {
QT_MOC_LITERAL(0, 0, 18), // "MinuteTimerReplica"
QT_MOC_LITERAL(1, 19, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 37, 11), // "MinuteTimer"
QT_MOC_LITERAL(3, 49, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 72, 40), // "32c23d5a3ecb323ef3a644e9e67f1..."
QT_MOC_LITERAL(5, 113, 11), // "hourChanged"
QT_MOC_LITERAL(6, 125, 0), // ""
QT_MOC_LITERAL(7, 126, 13), // "minuteChanged"
QT_MOC_LITERAL(8, 140, 11), // "timeChanged"
QT_MOC_LITERAL(9, 152, 12), // "timeChanged2"
QT_MOC_LITERAL(10, 165, 1), // "t"
QT_MOC_LITERAL(11, 167, 10), // "sendCustom"
QT_MOC_LITERAL(12, 178, 10), // "PresetInfo"
QT_MOC_LITERAL(13, 189, 4), // "info"
QT_MOC_LITERAL(14, 194, 8), // "pushHour"
QT_MOC_LITERAL(15, 203, 4), // "hour"
QT_MOC_LITERAL(16, 208, 10), // "pushMinute"
QT_MOC_LITERAL(17, 219, 6), // "minute"
QT_MOC_LITERAL(18, 226, 11), // "SetTimeZone"
QT_MOC_LITERAL(19, 238, 2) // "zn"

    },
    "MinuteTimerReplica\0RemoteObject Type\0"
    "MinuteTimer\0RemoteObject Signature\0"
    "32c23d5a3ecb323ef3a644e9e67f16560b756714\0"
    "hourChanged\0\0minuteChanged\0timeChanged\0"
    "timeChanged2\0t\0sendCustom\0PresetInfo\0"
    "info\0pushHour\0hour\0pushMinute\0minute\0"
    "SetTimeZone\0zn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MinuteTimerReplica[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       8,   18, // methods
       2,   80, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   58,    6, 0x06 /* Public */,
       7,    1,   61,    6, 0x06 /* Public */,
       8,    0,   64,    6, 0x06 /* Public */,
       9,    1,   65,    6, 0x06 /* Public */,
      11,    1,   68,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   71,    6, 0x0a /* Public */,
      16,    1,   74,    6, 0x0a /* Public */,
      18,    1,   77,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QTime,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   19,

 // properties: name, type, flags
      15, QMetaType::Int, 0x00495001,
      17, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void MinuteTimerReplica::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MinuteTimerReplica *_t = static_cast<MinuteTimerReplica *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hourChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->minuteChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->timeChanged(); break;
        case 3: _t->timeChanged2((*reinterpret_cast< QTime(*)>(_a[1]))); break;
        case 4: _t->sendCustom((*reinterpret_cast< PresetInfo(*)>(_a[1]))); break;
        case 5: _t->pushHour((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->pushMinute((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->SetTimeZone((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MinuteTimerReplica::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MinuteTimerReplica::hourChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MinuteTimerReplica::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MinuteTimerReplica::minuteChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MinuteTimerReplica::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MinuteTimerReplica::timeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MinuteTimerReplica::*_t)(QTime );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MinuteTimerReplica::timeChanged2)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MinuteTimerReplica::*_t)(PresetInfo );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MinuteTimerReplica::sendCustom)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MinuteTimerReplica *_t = static_cast<MinuteTimerReplica *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->hour(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->minute(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject MinuteTimerReplica::staticMetaObject = {
    { &QRemoteObjectReplica::staticMetaObject, qt_meta_stringdata_MinuteTimerReplica.data,
      qt_meta_data_MinuteTimerReplica,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MinuteTimerReplica::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MinuteTimerReplica::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MinuteTimerReplica.stringdata0))
        return static_cast<void*>(this);
    return QRemoteObjectReplica::qt_metacast(_clname);
}

int MinuteTimerReplica::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRemoteObjectReplica::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void MinuteTimerReplica::hourChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MinuteTimerReplica::minuteChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MinuteTimerReplica::timeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MinuteTimerReplica::timeChanged2(QTime _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MinuteTimerReplica::sendCustom(PresetInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
