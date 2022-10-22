/****************************************************************************
** Meta object code from reading C++ file 'volumetric.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../volumetric.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'volumetric.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VolumetricModifier_t {
    QByteArrayData data[31];
    char stringdata0[413];
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
QT_MOC_LITERAL(11, 110, 3), // "fps"
QT_MOC_LITERAL(12, 114, 13), // "handleTimeout"
QT_MOC_LITERAL(13, 128, 15), // "toggleLowDetail"
QT_MOC_LITERAL(14, 144, 18), // "toggleMediumDetail"
QT_MOC_LITERAL(15, 163, 16), // "toggleHighDetail"
QT_MOC_LITERAL(16, 180, 17), // "setFpsMeasurement"
QT_MOC_LITERAL(17, 198, 15), // "setSliceSliders"
QT_MOC_LITERAL(18, 214, 8), // "QSlider*"
QT_MOC_LITERAL(19, 223, 7), // "sliderX"
QT_MOC_LITERAL(20, 231, 7), // "sliderY"
QT_MOC_LITERAL(21, 239, 7), // "sliderZ"
QT_MOC_LITERAL(22, 247, 16), // "changeColorTable"
QT_MOC_LITERAL(23, 264, 18), // "setPreserveOpacity"
QT_MOC_LITERAL(24, 283, 20), // "setTransparentGround"
QT_MOC_LITERAL(25, 304, 19), // "setUseHighDefShader"
QT_MOC_LITERAL(26, 324, 21), // "adjustAlphaMultiplier"
QT_MOC_LITERAL(27, 346, 13), // "toggleAreaAll"
QT_MOC_LITERAL(28, 360, 14), // "toggleAreaMine"
QT_MOC_LITERAL(29, 375, 18), // "toggleAreaMountain"
QT_MOC_LITERAL(30, 394, 18) // "setDrawSliceFrames"

    },
    "VolumetricModifier\0sliceX\0\0enabled\0"
    "sliceY\0sliceZ\0adjustSliceX\0value\0"
    "adjustSliceY\0adjustSliceZ\0handleFpsChange\0"
    "fps\0handleTimeout\0toggleLowDetail\0"
    "toggleMediumDetail\0toggleHighDetail\0"
    "setFpsMeasurement\0setSliceSliders\0"
    "QSlider*\0sliderX\0sliderY\0sliderZ\0"
    "changeColorTable\0setPreserveOpacity\0"
    "setTransparentGround\0setUseHighDefShader\0"
    "adjustAlphaMultiplier\0toggleAreaAll\0"
    "toggleAreaMine\0toggleAreaMountain\0"
    "setDrawSliceFrames"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VolumetricModifier[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x0a /* Public */,
       4,    1,  127,    2, 0x0a /* Public */,
       5,    1,  130,    2, 0x0a /* Public */,
       6,    1,  133,    2, 0x0a /* Public */,
       8,    1,  136,    2, 0x0a /* Public */,
       9,    1,  139,    2, 0x0a /* Public */,
      10,    1,  142,    2, 0x0a /* Public */,
      12,    0,  145,    2, 0x0a /* Public */,
      13,    1,  146,    2, 0x0a /* Public */,
      14,    1,  149,    2, 0x0a /* Public */,
      15,    1,  152,    2, 0x0a /* Public */,
      16,    1,  155,    2, 0x0a /* Public */,
      17,    3,  158,    2, 0x0a /* Public */,
      22,    1,  165,    2, 0x0a /* Public */,
      23,    1,  168,    2, 0x0a /* Public */,
      24,    1,  171,    2, 0x0a /* Public */,
      25,    1,  174,    2, 0x0a /* Public */,
      26,    1,  177,    2, 0x0a /* Public */,
      27,    1,  180,    2, 0x0a /* Public */,
      28,    1,  183,    2, 0x0a /* Public */,
      29,    1,  186,    2, 0x0a /* Public */,
      30,    1,  189,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QReal,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18, 0x80000000 | 18,   19,   20,   21,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    3,

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
        case 6: _t->handleFpsChange((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->handleTimeout(); break;
        case 8: _t->toggleLowDetail((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->toggleMediumDetail((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->toggleHighDetail((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setFpsMeasurement((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setSliceSliders((*reinterpret_cast< QSlider*(*)>(_a[1])),(*reinterpret_cast< QSlider*(*)>(_a[2])),(*reinterpret_cast< QSlider*(*)>(_a[3]))); break;
        case 13: _t->changeColorTable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setPreserveOpacity((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setTransparentGround((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->setUseHighDefShader((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->adjustAlphaMultiplier((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->toggleAreaAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->toggleAreaMine((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->toggleAreaMountain((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->setDrawSliceFrames((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSlider* >(); break;
            }
            break;
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
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
