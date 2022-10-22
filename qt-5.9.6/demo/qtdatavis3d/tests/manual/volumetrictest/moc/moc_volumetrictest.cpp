/****************************************************************************
** Meta object code from reading C++ file 'volumetrictest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../volumetrictest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'volumetrictest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VolumetricModifier_t {
    QByteArrayData data[16];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VolumetricModifier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VolumetricModifier_t qt_meta_stringdata_VolumetricModifier = {
    {
QT_MOC_LITERAL(0, 0, 18), // "VolumetricModifier"
QT_MOC_LITERAL(1, 19, 6), // "sliceX"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "enabled"
QT_MOC_LITERAL(4, 35, 6), // "sliceY"
QT_MOC_LITERAL(5, 42, 6), // "sliceZ"
QT_MOC_LITERAL(6, 49, 12), // "adjustSliceX"
QT_MOC_LITERAL(7, 62, 5), // "value"
QT_MOC_LITERAL(8, 68, 12), // "adjustSliceY"
QT_MOC_LITERAL(9, 81, 12), // "adjustSliceZ"
QT_MOC_LITERAL(10, 94, 15), // "handleFpsChange"
QT_MOC_LITERAL(11, 110, 21), // "testSubtextureSetting"
QT_MOC_LITERAL(12, 132, 12), // "adjustRangeX"
QT_MOC_LITERAL(13, 145, 12), // "adjustRangeY"
QT_MOC_LITERAL(14, 158, 12), // "adjustRangeZ"
QT_MOC_LITERAL(15, 171, 17) // "testBoundsSetting"

    },
    "VolumetricModifier\0sliceX\0\0enabled\0"
    "sliceY\0sliceZ\0adjustSliceX\0value\0"
    "adjustSliceY\0adjustSliceZ\0handleFpsChange\0"
    "testSubtextureSetting\0adjustRangeX\0"
    "adjustRangeY\0adjustRangeZ\0testBoundsSetting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VolumetricModifier[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       4,    1,   77,    2, 0x0a /* Public */,
       5,    1,   80,    2, 0x0a /* Public */,
       6,    1,   83,    2, 0x0a /* Public */,
       8,    1,   86,    2, 0x0a /* Public */,
       9,    1,   89,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x0a /* Public */,
      11,    0,   93,    2, 0x0a /* Public */,
      12,    1,   94,    2, 0x0a /* Public */,
      13,    1,   97,    2, 0x0a /* Public */,
      14,    1,  100,    2, 0x0a /* Public */,
      15,    0,  103,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void VolumetricModifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VolumetricModifier *_t = static_cast<VolumetricModifier *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sliceX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sliceY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sliceZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->adjustSliceX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->adjustSliceY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->adjustSliceZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->handleFpsChange(); break;
        case 7: _t->testSubtextureSetting(); break;
        case 8: _t->adjustRangeX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->adjustRangeY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->adjustRangeZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->testBoundsSetting(); break;
        default: ;
        }
    }
}

const QMetaObject VolumetricModifier::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VolumetricModifier.data,
      qt_meta_data_VolumetricModifier,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VolumetricModifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VolumetricModifier::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VolumetricModifier.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VolumetricModifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
