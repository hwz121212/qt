/****************************************************************************
** Meta object code from reading C++ file 'shaderprecisionformat_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtCanvas3D/private/shaderprecisionformat_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shaderprecisionformat_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCanvas3D__CanvasShaderPrecisionFormat_t {
    QByteArrayData data[8];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCanvas3D__CanvasShaderPrecisionFormat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCanvas3D__CanvasShaderPrecisionFormat_t qt_meta_stringdata_QtCanvas3D__CanvasShaderPrecisionFormat = {
    {
QT_MOC_LITERAL(0, 0, 39), // "QtCanvas3D::CanvasShaderPreci..."
QT_MOC_LITERAL(1, 40, 15), // "rangeMinChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 8), // "rangeMin"
QT_MOC_LITERAL(4, 66, 15), // "rangeMaxChanged"
QT_MOC_LITERAL(5, 82, 8), // "rangeMax"
QT_MOC_LITERAL(6, 91, 16), // "precisionChanged"
QT_MOC_LITERAL(7, 108, 9) // "precision"

    },
    "QtCanvas3D::CanvasShaderPrecisionFormat\0"
    "rangeMinChanged\0\0rangeMin\0rangeMaxChanged\0"
    "rangeMax\0precisionChanged\0precision"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCanvas3D__CanvasShaderPrecisionFormat[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495001,
       5, QMetaType::Int, 0x00495001,
       7, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QtCanvas3D::CanvasShaderPrecisionFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CanvasShaderPrecisionFormat *_t = static_cast<CanvasShaderPrecisionFormat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rangeMinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->rangeMaxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->precisionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CanvasShaderPrecisionFormat::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasShaderPrecisionFormat::rangeMinChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CanvasShaderPrecisionFormat::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasShaderPrecisionFormat::rangeMaxChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CanvasShaderPrecisionFormat::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasShaderPrecisionFormat::precisionChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CanvasShaderPrecisionFormat *_t = static_cast<CanvasShaderPrecisionFormat *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->rangeMin(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->rangeMax(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->precision(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCanvas3D::CanvasShaderPrecisionFormat::staticMetaObject = {
    { &CanvasAbstractObject::staticMetaObject, qt_meta_stringdata_QtCanvas3D__CanvasShaderPrecisionFormat.data,
      qt_meta_data_QtCanvas3D__CanvasShaderPrecisionFormat,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCanvas3D::CanvasShaderPrecisionFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCanvas3D::CanvasShaderPrecisionFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCanvas3D__CanvasShaderPrecisionFormat.stringdata0))
        return static_cast<void*>(this);
    return CanvasAbstractObject::qt_metacast(_clname);
}

int QtCanvas3D::CanvasShaderPrecisionFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CanvasAbstractObject::qt_metacall(_c, _id, _a);
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
void QtCanvas3D::CanvasShaderPrecisionFormat::rangeMinChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCanvas3D::CanvasShaderPrecisionFormat::rangeMaxChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCanvas3D::CanvasShaderPrecisionFormat::precisionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
