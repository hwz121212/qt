/****************************************************************************
** Meta object code from reading C++ file 'tst_qsizepolicy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qsizepolicy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qsizepolicy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QSizePolicy_t {
    QByteArrayData data[15];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QSizePolicy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QSizePolicy_t qt_meta_stringdata_tst_QSizePolicy = {
    {
QT_MOC_LITERAL(0, 0, 15), // "tst_QSizePolicy"
QT_MOC_LITERAL(1, 16, 7), // "cleanup"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "qtest"
QT_MOC_LITERAL(4, 31, 9), // "constExpr"
QT_MOC_LITERAL(5, 41, 13), // "defaultValues"
QT_MOC_LITERAL(6, 55, 16), // "getSetCheck_data"
QT_MOC_LITERAL(7, 72, 11), // "getSetCheck"
QT_MOC_LITERAL(8, 84, 15), // "transposed_data"
QT_MOC_LITERAL(9, 100, 10), // "transposed"
QT_MOC_LITERAL(10, 111, 10), // "dataStream"
QT_MOC_LITERAL(11, 122, 17), // "horizontalStretch"
QT_MOC_LITERAL(12, 140, 15), // "verticalStretch"
QT_MOC_LITERAL(13, 156, 10), // "qhash_data"
QT_MOC_LITERAL(14, 167, 5) // "qhash"

    },
    "tst_QSizePolicy\0cleanup\0\0qtest\0constExpr\0"
    "defaultValues\0getSetCheck_data\0"
    "getSetCheck\0transposed_data\0transposed\0"
    "dataStream\0horizontalStretch\0"
    "verticalStretch\0qhash_data\0qhash"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QSizePolicy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tst_QSizePolicy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QSizePolicy *_t = static_cast<tst_QSizePolicy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cleanup(); break;
        case 1: _t->qtest(); break;
        case 2: _t->constExpr(); break;
        case 3: _t->defaultValues(); break;
        case 4: _t->getSetCheck_data(); break;
        case 5: _t->getSetCheck(); break;
        case 6: _t->transposed_data(); break;
        case 7: _t->transposed(); break;
        case 8: _t->dataStream(); break;
        case 9: _t->horizontalStretch(); break;
        case 10: _t->verticalStretch(); break;
        case 11: _t->qhash_data(); break;
        case 12: _t->qhash(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QSizePolicy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QSizePolicy.data,
      qt_meta_data_tst_QSizePolicy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QSizePolicy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QSizePolicy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QSizePolicy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QSizePolicy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
