/****************************************************************************
** Meta object code from reading C++ file 'qcomponent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcomponent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcomponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DCore__QComponent_t {
    QByteArrayData data[9];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DCore__QComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DCore__QComponent_t qt_meta_stringdata_Qt3DCore__QComponent = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Qt3DCore::QComponent"
QT_MOC_LITERAL(1, 21, 16), // "shareableChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "isShareable"
QT_MOC_LITERAL(4, 51, 13), // "addedToEntity"
QT_MOC_LITERAL(5, 65, 8), // "QEntity*"
QT_MOC_LITERAL(6, 74, 6), // "entity"
QT_MOC_LITERAL(7, 81, 17), // "removedFromEntity"
QT_MOC_LITERAL(8, 99, 12) // "setShareable"

    },
    "Qt3DCore::QComponent\0shareableChanged\0"
    "\0isShareable\0addedToEntity\0QEntity*\0"
    "entity\0removedFromEntity\0setShareable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DCore__QComponent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       7,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Qt3DCore::QComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QComponent *_t = static_cast<QComponent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shareableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->addedToEntity((*reinterpret_cast< QEntity*(*)>(_a[1]))); break;
        case 2: _t->removedFromEntity((*reinterpret_cast< QEntity*(*)>(_a[1]))); break;
        case 3: _t->setShareable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QComponent::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QComponent::shareableChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QComponent::*_t)(QEntity * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QComponent::addedToEntity)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QComponent::*_t)(QEntity * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QComponent::removedFromEntity)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QComponent *_t = static_cast<QComponent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isShareable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QComponent *_t = static_cast<QComponent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShareable(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DCore::QComponent::staticMetaObject = {
    { &QNode::staticMetaObject, qt_meta_stringdata_Qt3DCore__QComponent.data,
      qt_meta_data_Qt3DCore__QComponent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DCore::QComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DCore::QComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DCore__QComponent.stringdata0))
        return static_cast<void*>(this);
    return QNode::qt_metacast(_clname);
}

int Qt3DCore::QComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void Qt3DCore::QComponent::shareableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DCore::QComponent::addedToEntity(QEntity * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DCore::QComponent::removedFromEntity(QEntity * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
