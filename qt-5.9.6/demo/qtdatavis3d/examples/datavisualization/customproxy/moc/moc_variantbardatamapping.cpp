/****************************************************************************
** Meta object code from reading C++ file 'variantbardatamapping.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../variantbardatamapping.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'variantbardatamapping.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VariantBarDataMapping_t {
    QByteArrayData data[8];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VariantBarDataMapping_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VariantBarDataMapping_t qt_meta_stringdata_VariantBarDataMapping = {
    {
QT_MOC_LITERAL(0, 0, 21), // "VariantBarDataMapping"
QT_MOC_LITERAL(1, 22, 14), // "mappingChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 8), // "rowIndex"
QT_MOC_LITERAL(4, 47, 11), // "columnIndex"
QT_MOC_LITERAL(5, 59, 10), // "valueIndex"
QT_MOC_LITERAL(6, 70, 13), // "rowCategories"
QT_MOC_LITERAL(7, 84, 16) // "columnCategories"

    },
    "VariantBarDataMapping\0mappingChanged\0"
    "\0rowIndex\0columnIndex\0valueIndex\0"
    "rowCategories\0columnCategories"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VariantBarDataMapping[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       5,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00095103,
       4, QMetaType::Int, 0x00095103,
       5, QMetaType::Int, 0x00095103,
       6, QMetaType::QStringList, 0x00095103,
       7, QMetaType::QStringList, 0x00095103,

       0        // eod
};

void VariantBarDataMapping::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VariantBarDataMapping *_t = static_cast<VariantBarDataMapping *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mappingChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (VariantBarDataMapping::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VariantBarDataMapping::mappingChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        VariantBarDataMapping *_t = static_cast<VariantBarDataMapping *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->rowIndex(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->columnIndex(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->valueIndex(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->rowCategories(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->columnCategories(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        VariantBarDataMapping *_t = static_cast<VariantBarDataMapping *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRowIndex(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setColumnIndex(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setValueIndex(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setRowCategories(*reinterpret_cast< QStringList*>(_v)); break;
        case 4: _t->setColumnCategories(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject VariantBarDataMapping::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VariantBarDataMapping.data,
      qt_meta_data_VariantBarDataMapping,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VariantBarDataMapping::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VariantBarDataMapping::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VariantBarDataMapping.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VariantBarDataMapping::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VariantBarDataMapping::mappingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
