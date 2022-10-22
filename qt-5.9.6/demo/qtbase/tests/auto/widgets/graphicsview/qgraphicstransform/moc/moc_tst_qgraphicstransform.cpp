/****************************************************************************
** Meta object code from reading C++ file 'tst_qgraphicstransform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qgraphicstransform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qgraphicstransform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QGraphicsTransform_t {
    QByteArrayData data[8];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QGraphicsTransform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QGraphicsTransform_t qt_meta_stringdata_tst_QGraphicsTransform = {
    {
QT_MOC_LITERAL(0, 0, 22), // "tst_QGraphicsTransform"
QT_MOC_LITERAL(1, 23, 5), // "scale"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 8), // "rotation"
QT_MOC_LITERAL(4, 39, 15), // "rotation3d_data"
QT_MOC_LITERAL(5, 55, 10), // "rotation3d"
QT_MOC_LITERAL(6, 66, 28), // "rotation3dArbitraryAxis_data"
QT_MOC_LITERAL(7, 95, 23) // "rotation3dArbitraryAxis"

    },
    "tst_QGraphicsTransform\0scale\0\0rotation\0"
    "rotation3d_data\0rotation3d\0"
    "rotation3dArbitraryAxis_data\0"
    "rotation3dArbitraryAxis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QGraphicsTransform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tst_QGraphicsTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QGraphicsTransform *_t = static_cast<tst_QGraphicsTransform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scale(); break;
        case 1: _t->rotation(); break;
        case 2: _t->rotation3d_data(); break;
        case 3: _t->rotation3d(); break;
        case 4: _t->rotation3dArbitraryAxis_data(); break;
        case 5: _t->rotation3dArbitraryAxis(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QGraphicsTransform::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QGraphicsTransform.data,
      qt_meta_data_tst_QGraphicsTransform,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QGraphicsTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QGraphicsTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QGraphicsTransform.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QGraphicsTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
