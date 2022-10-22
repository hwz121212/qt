/****************************************************************************
** Meta object code from reading C++ file 'simpleax_main.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../simpleax_main.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simpleax_main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSimpleAX_t {
    QByteArrayData data[18];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSimpleAX_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSimpleAX_t qt_meta_stringdata_QSimpleAX = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QSimpleAX"
QT_MOC_LITERAL(1, 10, 7), // "ClassID"
QT_MOC_LITERAL(2, 18, 38), // "{DF16845C-92CD-4AAB-A982-EB98..."
QT_MOC_LITERAL(3, 57, 11), // "InterfaceID"
QT_MOC_LITERAL(4, 69, 38), // "{616F620B-91C5-4410-A74E-6B81..."
QT_MOC_LITERAL(5, 108, 8), // "EventsID"
QT_MOC_LITERAL(6, 117, 38), // "{E1816BBA-BF5D-4A31-9855-D6BA..."
QT_MOC_LITERAL(7, 156, 10), // "someSignal"
QT_MOC_LITERAL(8, 167, 0), // ""
QT_MOC_LITERAL(9, 168, 12), // "valueChanged"
QT_MOC_LITERAL(10, 181, 11), // "textChanged"
QT_MOC_LITERAL(11, 193, 7), // "setText"
QT_MOC_LITERAL(12, 201, 6), // "string"
QT_MOC_LITERAL(13, 208, 5), // "about"
QT_MOC_LITERAL(14, 214, 8), // "setValue"
QT_MOC_LITERAL(15, 223, 1), // "i"
QT_MOC_LITERAL(16, 225, 4), // "text"
QT_MOC_LITERAL(17, 230, 5) // "value"

    },
    "QSimpleAX\0ClassID\0"
    "{DF16845C-92CD-4AAB-A982-EB9840E74669}\0"
    "InterfaceID\0{616F620B-91C5-4410-A74E-6B81C76FFFE0}\0"
    "EventsID\0{E1816BBA-BF5D-4A31-9855-D6BA432055FF}\0"
    "someSignal\0\0valueChanged\0textChanged\0"
    "setText\0string\0about\0setValue\0i\0text\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSimpleAX[] = {

 // content:
       7,       // revision
       0,       // classname
       3,   14, // classinfo
       6,   20, // methods
       2,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    6,

 // signals: name, argc, parameters, tag, flags
       7,    0,   50,    8, 0x06 /* Public */,
       9,    1,   51,    8, 0x06 /* Public */,
      10,    1,   54,    8, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   57,    8, 0x0a /* Public */,
      13,    0,   60,    8, 0x0a /* Public */,
      14,    1,   61,    8, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,

 // properties: name, type, flags
      16, QMetaType::QString, 0x00095103,
      17, QMetaType::Int, 0x00095103,

       0        // eod
};

void QSimpleAX::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSimpleAX *_t = static_cast<QSimpleAX *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->someSignal(); break;
        case 1: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->about(); break;
        case 5: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QSimpleAX::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSimpleAX::someSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QSimpleAX::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSimpleAX::valueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QSimpleAX::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSimpleAX::textChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QSimpleAX *_t = static_cast<QSimpleAX *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QSimpleAX *_t = static_cast<QSimpleAX *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setValue(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QSimpleAX::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QSimpleAX.data,
      qt_meta_data_QSimpleAX,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QSimpleAX::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSimpleAX::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSimpleAX.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QAxBindable"))
        return static_cast< QAxBindable*>(this);
    return QWidget::qt_metacast(_clname);
}

int QSimpleAX::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QSimpleAX::someSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QSimpleAX::valueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSimpleAX::textChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
