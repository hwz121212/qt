/****************************************************************************
** Meta object code from reading C++ file 'qmlrotationsensor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmlrotationsensor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlrotationsensor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmlRotationSensor_t {
    QByteArrayData data[4];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlRotationSensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlRotationSensor_t qt_meta_stringdata_QmlRotationSensor = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QmlRotationSensor"
QT_MOC_LITERAL(1, 18, 11), // "hasZChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4) // "hasZ"

    },
    "QmlRotationSensor\0hasZChanged\0\0hasZ"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlRotationSensor[] = {

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
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QmlRotationSensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlRotationSensor *_t = static_cast<QmlRotationSensor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hasZChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QmlRotationSensor::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlRotationSensor::hasZChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QmlRotationSensor *_t = static_cast<QmlRotationSensor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hasZ(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QmlRotationSensor::staticMetaObject = {
    { &QmlSensor::staticMetaObject, qt_meta_stringdata_QmlRotationSensor.data,
      qt_meta_data_QmlRotationSensor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmlRotationSensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlRotationSensor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlRotationSensor.stringdata0))
        return static_cast<void*>(this);
    return QmlSensor::qt_metacast(_clname);
}

int QmlRotationSensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmlSensor::qt_metacall(_c, _id, _a);
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
void QmlRotationSensor::hasZChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QmlRotationSensorReading_t {
    QByteArrayData data[8];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlRotationSensorReading_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlRotationSensorReading_t qt_meta_stringdata_QmlRotationSensorReading = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QmlRotationSensorReading"
QT_MOC_LITERAL(1, 25, 8), // "xChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 8), // "yChanged"
QT_MOC_LITERAL(4, 44, 8), // "zChanged"
QT_MOC_LITERAL(5, 53, 1), // "x"
QT_MOC_LITERAL(6, 55, 1), // "y"
QT_MOC_LITERAL(7, 57, 1) // "z"

    },
    "QmlRotationSensorReading\0xChanged\0\0"
    "yChanged\0zChanged\0x\0y\0z"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlRotationSensorReading[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QReal, 0x00495001,
       6, QMetaType::QReal, 0x00495001,
       7, QMetaType::QReal, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QmlRotationSensorReading::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlRotationSensorReading *_t = static_cast<QmlRotationSensorReading *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xChanged(); break;
        case 1: _t->yChanged(); break;
        case 2: _t->zChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QmlRotationSensorReading::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlRotationSensorReading::xChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QmlRotationSensorReading::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlRotationSensorReading::yChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QmlRotationSensorReading::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlRotationSensorReading::zChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QmlRotationSensorReading *_t = static_cast<QmlRotationSensorReading *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->z(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QmlRotationSensorReading::staticMetaObject = {
    { &QmlSensorReading::staticMetaObject, qt_meta_stringdata_QmlRotationSensorReading.data,
      qt_meta_data_QmlRotationSensorReading,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmlRotationSensorReading::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlRotationSensorReading::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlRotationSensorReading.stringdata0))
        return static_cast<void*>(this);
    return QmlSensorReading::qt_metacast(_clname);
}

int QmlRotationSensorReading::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmlSensorReading::qt_metacall(_c, _id, _a);
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
void QmlRotationSensorReading::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QmlRotationSensorReading::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QmlRotationSensorReading::zChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
