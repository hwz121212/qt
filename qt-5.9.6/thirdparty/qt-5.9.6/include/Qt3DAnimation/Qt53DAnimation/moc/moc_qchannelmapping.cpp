/****************************************************************************
** Meta object code from reading C++ file 'qchannelmapping.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qchannelmapping.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qchannelmapping.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DAnimation__QChannelMapping_t {
    QByteArrayData data[12];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DAnimation__QChannelMapping_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DAnimation__QChannelMapping_t qt_meta_stringdata_Qt3DAnimation__QChannelMapping = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Qt3DAnimation::QChannelMapping"
QT_MOC_LITERAL(1, 31, 18), // "channelNameChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 11), // "channelName"
QT_MOC_LITERAL(4, 63, 13), // "targetChanged"
QT_MOC_LITERAL(5, 77, 16), // "Qt3DCore::QNode*"
QT_MOC_LITERAL(6, 94, 6), // "target"
QT_MOC_LITERAL(7, 101, 15), // "propertyChanged"
QT_MOC_LITERAL(8, 117, 8), // "property"
QT_MOC_LITERAL(9, 126, 14), // "setChannelName"
QT_MOC_LITERAL(10, 141, 9), // "setTarget"
QT_MOC_LITERAL(11, 151, 11) // "setProperty"

    },
    "Qt3DAnimation::QChannelMapping\0"
    "channelNameChanged\0\0channelName\0"
    "targetChanged\0Qt3DCore::QNode*\0target\0"
    "propertyChanged\0property\0setChannelName\0"
    "setTarget\0setProperty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DAnimation__QChannelMapping[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   53,    2, 0x0a /* Public */,
      10,    1,   56,    2, 0x0a /* Public */,
      11,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       6, 0x80000000 | 5, 0x0049510b,
       8, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Qt3DAnimation::QChannelMapping::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QChannelMapping *_t = static_cast<QChannelMapping *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->channelNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->targetChanged((*reinterpret_cast< Qt3DCore::QNode*(*)>(_a[1]))); break;
        case 2: _t->propertyChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setChannelName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setTarget((*reinterpret_cast< Qt3DCore::QNode*(*)>(_a[1]))); break;
        case 5: _t->setProperty((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DCore::QNode* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DCore::QNode* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QChannelMapping::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QChannelMapping::channelNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QChannelMapping::*_t)(Qt3DCore::QNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QChannelMapping::targetChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QChannelMapping::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QChannelMapping::propertyChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DCore::QNode* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QChannelMapping *_t = static_cast<QChannelMapping *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->channelName(); break;
        case 1: *reinterpret_cast< Qt3DCore::QNode**>(_v) = _t->target(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->property(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QChannelMapping *_t = static_cast<QChannelMapping *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setChannelName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setTarget(*reinterpret_cast< Qt3DCore::QNode**>(_v)); break;
        case 2: _t->setProperty(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DAnimation::QChannelMapping::staticMetaObject = {
    { &Qt3DCore::QNode::staticMetaObject, qt_meta_stringdata_Qt3DAnimation__QChannelMapping.data,
      qt_meta_data_Qt3DAnimation__QChannelMapping,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DAnimation::QChannelMapping::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DAnimation::QChannelMapping::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DAnimation__QChannelMapping.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QNode::qt_metacast(_clname);
}

int Qt3DAnimation::QChannelMapping::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QNode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
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
void Qt3DAnimation::QChannelMapping::channelNameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DAnimation::QChannelMapping::targetChanged(Qt3DCore::QNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DAnimation::QChannelMapping::propertyChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
