/****************************************************************************
** Meta object code from reading C++ file 'maskedmousearea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../maskedmousearea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maskedmousearea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MaskedMouseArea_t {
    QByteArrayData data[13];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MaskedMouseArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MaskedMouseArea_t qt_meta_stringdata_MaskedMouseArea = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MaskedMouseArea"
QT_MOC_LITERAL(1, 16, 7), // "pressed"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "released"
QT_MOC_LITERAL(4, 34, 7), // "clicked"
QT_MOC_LITERAL(5, 42, 8), // "canceled"
QT_MOC_LITERAL(6, 51, 14), // "pressedChanged"
QT_MOC_LITERAL(7, 66, 17), // "maskSourceChanged"
QT_MOC_LITERAL(8, 84, 20), // "containsMouseChanged"
QT_MOC_LITERAL(9, 105, 21), // "alphaThresholdChanged"
QT_MOC_LITERAL(10, 127, 13), // "containsMouse"
QT_MOC_LITERAL(11, 141, 10), // "maskSource"
QT_MOC_LITERAL(12, 152, 14) // "alphaThreshold"

    },
    "MaskedMouseArea\0pressed\0\0released\0"
    "clicked\0canceled\0pressedChanged\0"
    "maskSourceChanged\0containsMouseChanged\0"
    "alphaThresholdChanged\0containsMouse\0"
    "maskSource\0alphaThreshold"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MaskedMouseArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,
       8,    0,   60,    2, 0x06 /* Public */,
       9,    0,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00495001,
      10, QMetaType::Bool, 0x00495001,
      11, QMetaType::QUrl, 0x00495103,
      12, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       4,
       6,
       5,
       7,

       0        // eod
};

void MaskedMouseArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MaskedMouseArea *_t = static_cast<MaskedMouseArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pressed(); break;
        case 1: _t->released(); break;
        case 2: _t->clicked(); break;
        case 3: _t->canceled(); break;
        case 4: _t->pressedChanged(); break;
        case 5: _t->maskSourceChanged(); break;
        case 6: _t->containsMouseChanged(); break;
        case 7: _t->alphaThresholdChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MaskedMouseArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MaskedMouseArea::pressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MaskedMouseArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MaskedMouseArea::released)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MaskedMouseArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MaskedMouseArea::clicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MaskedMouseArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MaskedMouseArea::canceled)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MaskedMouseArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MaskedMouseArea::pressedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MaskedMouseArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MaskedMouseArea::maskSourceChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MaskedMouseArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MaskedMouseArea::containsMouseChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MaskedMouseArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MaskedMouseArea::alphaThresholdChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MaskedMouseArea *_t = static_cast<MaskedMouseArea *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isPressed(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->containsMouse(); break;
        case 2: *reinterpret_cast< QUrl*>(_v) = _t->maskSource(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->alphaThreshold(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MaskedMouseArea *_t = static_cast<MaskedMouseArea *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setMaskSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 3: _t->setAlphaThreshold(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject MaskedMouseArea::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_MaskedMouseArea.data,
      qt_meta_data_MaskedMouseArea,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MaskedMouseArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaskedMouseArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MaskedMouseArea.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int MaskedMouseArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
void MaskedMouseArea::pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MaskedMouseArea::released()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MaskedMouseArea::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MaskedMouseArea::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MaskedMouseArea::pressedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MaskedMouseArea::maskSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MaskedMouseArea::containsMouseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MaskedMouseArea::alphaThresholdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
