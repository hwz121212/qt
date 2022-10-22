/****************************************************************************
** Meta object code from reading C++ file 'tst_qwebp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qwebp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qwebp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_qwebp_t {
    QByteArrayData data[9];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_qwebp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_qwebp_t qt_meta_stringdata_tst_qwebp = {
    {
QT_MOC_LITERAL(0, 0, 9), // "tst_qwebp"
QT_MOC_LITERAL(1, 10, 12), // "initTestCase"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "readImage_data"
QT_MOC_LITERAL(4, 39, 9), // "readImage"
QT_MOC_LITERAL(5, 49, 18), // "readAnimation_data"
QT_MOC_LITERAL(6, 68, 13), // "readAnimation"
QT_MOC_LITERAL(7, 82, 15), // "writeImage_data"
QT_MOC_LITERAL(8, 98, 10) // "writeImage"

    },
    "tst_qwebp\0initTestCase\0\0readImage_data\0"
    "readImage\0readAnimation_data\0readAnimation\0"
    "writeImage_data\0writeImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_qwebp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tst_qwebp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_qwebp *_t = static_cast<tst_qwebp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->readImage_data(); break;
        case 2: _t->readImage(); break;
        case 3: _t->readAnimation_data(); break;
        case 4: _t->readAnimation(); break;
        case 5: _t->writeImage_data(); break;
        case 6: _t->writeImage(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_qwebp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_qwebp.data,
      qt_meta_data_tst_qwebp,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_qwebp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_qwebp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_qwebp.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_qwebp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
