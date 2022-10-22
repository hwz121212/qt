/****************************************************************************
** Meta object code from reading C++ file 'tst_qfileiconprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qfileiconprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qfileiconprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QFileIconProvider_t {
    QByteArrayData data[11];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QFileIconProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QFileIconProvider_t qt_meta_stringdata_tst_QFileIconProvider = {
    {
QT_MOC_LITERAL(0, 0, 21), // "tst_QFileIconProvider"
QT_MOC_LITERAL(1, 22, 22), // "qfileiconprovider_data"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 17), // "qfileiconprovider"
QT_MOC_LITERAL(4, 64, 13), // "iconType_data"
QT_MOC_LITERAL(5, 78, 8), // "iconType"
QT_MOC_LITERAL(6, 87, 13), // "iconInfo_data"
QT_MOC_LITERAL(7, 101, 8), // "iconInfo"
QT_MOC_LITERAL(8, 110, 9), // "type_data"
QT_MOC_LITERAL(9, 120, 4), // "type"
QT_MOC_LITERAL(10, 125, 37) // "taskQTBUG_46755_QFileIconEngi..."

    },
    "tst_QFileIconProvider\0qfileiconprovider_data\0"
    "\0qfileiconprovider\0iconType_data\0"
    "iconType\0iconInfo_data\0iconInfo\0"
    "type_data\0type\0taskQTBUG_46755_QFileIconEngine_crash"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QFileIconProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tst_QFileIconProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QFileIconProvider *_t = static_cast<tst_QFileIconProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->qfileiconprovider_data(); break;
        case 1: _t->qfileiconprovider(); break;
        case 2: _t->iconType_data(); break;
        case 3: _t->iconType(); break;
        case 4: _t->iconInfo_data(); break;
        case 5: _t->iconInfo(); break;
        case 6: _t->type_data(); break;
        case 7: _t->type(); break;
        case 8: _t->taskQTBUG_46755_QFileIconEngine_crash(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QFileIconProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QFileIconProvider.data,
      qt_meta_data_tst_QFileIconProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QFileIconProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QFileIconProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QFileIconProvider.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QFileIconProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
