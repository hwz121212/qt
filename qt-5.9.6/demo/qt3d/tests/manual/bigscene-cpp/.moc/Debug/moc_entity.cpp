/****************************************************************************
** Meta object code from reading C++ file 'entity.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../entity.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'entity.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Entity_t {
    QByteArrayData data[14];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Entity_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Entity_t qt_meta_stringdata_Entity = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Entity"
QT_MOC_LITERAL(1, 7, 12), // "thetaChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "theta"
QT_MOC_LITERAL(4, 27, 10), // "phiChanged"
QT_MOC_LITERAL(5, 38, 3), // "phi"
QT_MOC_LITERAL(6, 42, 15), // "positionChanged"
QT_MOC_LITERAL(7, 58, 8), // "position"
QT_MOC_LITERAL(8, 67, 19), // "diffuseColorChanged"
QT_MOC_LITERAL(9, 87, 12), // "diffuseColor"
QT_MOC_LITERAL(10, 100, 8), // "setTheta"
QT_MOC_LITERAL(11, 109, 6), // "setPhi"
QT_MOC_LITERAL(12, 116, 11), // "setPosition"
QT_MOC_LITERAL(13, 128, 15) // "setDiffuseColor"

    },
    "Entity\0thetaChanged\0\0theta\0phiChanged\0"
    "phi\0positionChanged\0position\0"
    "diffuseColorChanged\0diffuseColor\0"
    "setTheta\0setPhi\0setPosition\0setDiffuseColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Entity[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       8,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   66,    2, 0x0a /* Public */,
      11,    1,   69,    2, 0x0a /* Public */,
      12,    1,   72,    2, 0x0a /* Public */,
      13,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::QVector3D,    7,
    QMetaType::Void, QMetaType::QColor,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::QVector3D,    7,
    QMetaType::Void, QMetaType::QColor,    9,

 // properties: name, type, flags
       3, QMetaType::Float, 0x00495103,
       5, QMetaType::Float, 0x00495103,
       7, QMetaType::QVector3D, 0x00495103,
       9, QMetaType::QColor, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Entity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Entity *_t = static_cast<Entity *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->thetaChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->phiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->positionChanged((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 3: _t->diffuseColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 4: _t->setTheta((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setPhi((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->setPosition((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 7: _t->setDiffuseColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Entity::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Entity::thetaChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Entity::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Entity::phiChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Entity::*_t)(QVector3D );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Entity::positionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Entity::*_t)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Entity::diffuseColorChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Entity *_t = static_cast<Entity *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->theta(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->phi(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = _t->position(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->diffuseColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Entity *_t = static_cast<Entity *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTheta(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setPhi(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setPosition(*reinterpret_cast< QVector3D*>(_v)); break;
        case 3: _t->setDiffuseColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Entity::staticMetaObject = {
    { &Qt3DCore::QEntity::staticMetaObject, qt_meta_stringdata_Entity.data,
      qt_meta_data_Entity,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Entity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Entity::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Entity.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QEntity::qt_metacast(_clname);
}

int Entity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QEntity::qt_metacall(_c, _id, _a);
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
void Entity::thetaChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Entity::phiChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Entity::positionChanged(QVector3D _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Entity::diffuseColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
