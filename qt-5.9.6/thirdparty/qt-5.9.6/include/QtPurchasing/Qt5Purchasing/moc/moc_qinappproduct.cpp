/****************************************************************************
** Meta object code from reading C++ file 'qinappproduct.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qinappproduct.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qinappproduct.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInAppProduct_t {
    QByteArrayData data[11];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInAppProduct_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInAppProduct_t qt_meta_stringdata_QInAppProduct = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QInAppProduct"
QT_MOC_LITERAL(1, 14, 8), // "purchase"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "identifier"
QT_MOC_LITERAL(4, 35, 11), // "productType"
QT_MOC_LITERAL(5, 47, 11), // "ProductType"
QT_MOC_LITERAL(6, 59, 5), // "price"
QT_MOC_LITERAL(7, 65, 5), // "title"
QT_MOC_LITERAL(8, 71, 11), // "description"
QT_MOC_LITERAL(9, 83, 10), // "Consumable"
QT_MOC_LITERAL(10, 94, 10) // "Unlockable"

    },
    "QInAppProduct\0purchase\0\0identifier\0"
    "productType\0ProductType\0price\0title\0"
    "description\0Consumable\0Unlockable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInAppProduct[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       5,   20, // properties
       1,   35, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,
       4, 0x80000000 | 5, 0x00095409,
       6, QMetaType::QString, 0x00095401,
       7, QMetaType::QString, 0x00095401,
       8, QMetaType::QString, 0x00095401,

 // enums: name, flags, count, data
       5, 0x0,    2,   39,

 // enum data: key, value
       9, uint(QInAppProduct::Consumable),
      10, uint(QInAppProduct::Unlockable),

       0        // eod
};

void QInAppProduct::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QInAppProduct *_t = static_cast<QInAppProduct *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->purchase(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QInAppProduct *_t = static_cast<QInAppProduct *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->identifier(); break;
        case 1: *reinterpret_cast< ProductType*>(_v) = _t->productType(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->price(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QInAppProduct::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QInAppProduct.data,
      qt_meta_data_QInAppProduct,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QInAppProduct::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInAppProduct::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInAppProduct.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInAppProduct::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
