/****************************************************************************
** Meta object code from reading C++ file 'customformatter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../customformatter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customformatter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CustomFormatter_t {
    QByteArrayData data[10];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomFormatter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomFormatter_t qt_meta_stringdata_CustomFormatter = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CustomFormatter"
QT_MOC_LITERAL(1, 16, 17), // "originDateChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "date"
QT_MOC_LITERAL(4, 40, 22), // "selectionFormatChanged"
QT_MOC_LITERAL(5, 63, 6), // "format"
QT_MOC_LITERAL(6, 70, 13), // "setOriginDate"
QT_MOC_LITERAL(7, 84, 18), // "setSelectionFormat"
QT_MOC_LITERAL(8, 103, 10), // "originDate"
QT_MOC_LITERAL(9, 114, 15) // "selectionFormat"

    },
    "CustomFormatter\0originDateChanged\0\0"
    "date\0selectionFormatChanged\0format\0"
    "setOriginDate\0setSelectionFormat\0"
    "originDate\0selectionFormat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomFormatter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // properties: name, type, flags
       8, QMetaType::QDate, 0x00495103,
       9, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void CustomFormatter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CustomFormatter *_t = static_cast<CustomFormatter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->originDateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 1: _t->selectionFormatChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setOriginDate((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 3: _t->setSelectionFormat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CustomFormatter::*_t)(const QDate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomFormatter::originDateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CustomFormatter::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomFormatter::selectionFormatChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CustomFormatter *_t = static_cast<CustomFormatter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDate*>(_v) = _t->originDate(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->selectionFormat(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CustomFormatter *_t = static_cast<CustomFormatter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOriginDate(*reinterpret_cast< QDate*>(_v)); break;
        case 1: _t->setSelectionFormat(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject CustomFormatter::staticMetaObject = {
    { &QValue3DAxisFormatter::staticMetaObject, qt_meta_stringdata_CustomFormatter.data,
      qt_meta_data_CustomFormatter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CustomFormatter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomFormatter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomFormatter.stringdata0))
        return static_cast<void*>(this);
    return QValue3DAxisFormatter::qt_metacast(_clname);
}

int CustomFormatter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValue3DAxisFormatter::qt_metacall(_c, _id, _a);
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
void CustomFormatter::originDateChanged(const QDate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CustomFormatter::selectionFormatChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
