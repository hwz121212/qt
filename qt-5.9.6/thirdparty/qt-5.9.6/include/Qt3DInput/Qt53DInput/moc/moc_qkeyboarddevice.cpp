/****************************************************************************
** Meta object code from reading C++ file 'qkeyboarddevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qkeyboarddevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qkeyboarddevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DInput__QKeyboardDevice_t {
    QByteArrayData data[6];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DInput__QKeyboardDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DInput__QKeyboardDevice_t qt_meta_stringdata_Qt3DInput__QKeyboardDevice = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Qt3DInput::QKeyboardDevice"
QT_MOC_LITERAL(1, 27, 18), // "activeInputChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 17), // "QKeyboardHandler*"
QT_MOC_LITERAL(4, 65, 11), // "activeInput"
QT_MOC_LITERAL(5, 77, 28) // "Qt3DInput::QKeyboardHandler*"

    },
    "Qt3DInput::QKeyboardDevice\0"
    "activeInputChanged\0\0QKeyboardHandler*\0"
    "activeInput\0Qt3DInput::QKeyboardHandler*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DInput__QKeyboardDevice[] = {

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
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00495009,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Qt3DInput::QKeyboardDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QKeyboardDevice *_t = static_cast<QKeyboardDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeInputChanged((*reinterpret_cast< QKeyboardHandler*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QKeyboardHandler* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QKeyboardDevice::*_t)(QKeyboardHandler * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QKeyboardDevice::activeInputChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DInput::QKeyboardHandler* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QKeyboardDevice *_t = static_cast<QKeyboardDevice *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt3DInput::QKeyboardHandler**>(_v) = _t->activeInput(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DInput::QKeyboardDevice::staticMetaObject = {
    { &Qt3DInput::QAbstractPhysicalDevice::staticMetaObject, qt_meta_stringdata_Qt3DInput__QKeyboardDevice.data,
      qt_meta_data_Qt3DInput__QKeyboardDevice,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DInput::QKeyboardDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DInput::QKeyboardDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DInput__QKeyboardDevice.stringdata0))
        return static_cast<void*>(this);
    return Qt3DInput::QAbstractPhysicalDevice::qt_metacast(_clname);
}

int Qt3DInput::QKeyboardDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DInput::QAbstractPhysicalDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
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
void Qt3DInput::QKeyboardDevice::activeInputChanged(QKeyboardHandler * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
