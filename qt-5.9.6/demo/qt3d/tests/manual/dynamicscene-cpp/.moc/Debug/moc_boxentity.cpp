/****************************************************************************
** Meta object code from reading C++ file 'boxentity.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../boxentity.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boxentity.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BoxEntity_t {
    QByteArrayData data[12];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoxEntity_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoxEntity_t qt_meta_stringdata_BoxEntity = {
    {
QT_MOC_LITERAL(0, 0, 9), // "BoxEntity"
QT_MOC_LITERAL(1, 10, 19), // "diffuseColorChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "angleChanged"
QT_MOC_LITERAL(4, 44, 13), // "radiusChanged"
QT_MOC_LITERAL(5, 58, 15), // "setDiffuseColor"
QT_MOC_LITERAL(6, 74, 12), // "diffuseColor"
QT_MOC_LITERAL(7, 87, 8), // "setAngle"
QT_MOC_LITERAL(8, 96, 3), // "arg"
QT_MOC_LITERAL(9, 100, 9), // "setRadius"
QT_MOC_LITERAL(10, 110, 5), // "angle"
QT_MOC_LITERAL(11, 116, 6) // "radius"

    },
    "BoxEntity\0diffuseColorChanged\0\0"
    "angleChanged\0radiusChanged\0setDiffuseColor\0"
    "diffuseColor\0setAngle\0arg\0setRadius\0"
    "angle\0radius"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoxEntity[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    0,   47,    2, 0x06 /* Public */,
       4,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   49,    2, 0x0a /* Public */,
       7,    1,   52,    2, 0x0a /* Public */,
       9,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    6,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Void, QMetaType::Float,    8,

 // properties: name, type, flags
       6, QMetaType::QColor, 0x00495103,
      10, QMetaType::Float, 0x00495103,
      11, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void BoxEntity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BoxEntity *_t = static_cast<BoxEntity *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->diffuseColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->angleChanged(); break;
        case 2: _t->radiusChanged(); break;
        case 3: _t->setDiffuseColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->setAngle((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setRadius((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BoxEntity::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoxEntity::diffuseColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BoxEntity::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoxEntity::angleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BoxEntity::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoxEntity::radiusChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BoxEntity *_t = static_cast<BoxEntity *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->diffuseColor(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->angle(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->radius(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BoxEntity *_t = static_cast<BoxEntity *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDiffuseColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setAngle(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setRadius(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject BoxEntity::staticMetaObject = {
    { &Qt3DCore::QEntity::staticMetaObject, qt_meta_stringdata_BoxEntity.data,
      qt_meta_data_BoxEntity,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BoxEntity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoxEntity::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BoxEntity.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QEntity::qt_metacast(_clname);
}

int BoxEntity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QEntity::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void BoxEntity::diffuseColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BoxEntity::angleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BoxEntity::radiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
