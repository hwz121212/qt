/****************************************************************************
** Meta object code from reading C++ file 'tst_qnetworkinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qnetworkinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qnetworkinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QNetworkInterface_t {
    QByteArrayData data[12];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QNetworkInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QNetworkInterface_t qt_meta_stringdata_tst_QNetworkInterface = {
    {
QT_MOC_LITERAL(0, 0, 21), // "tst_QNetworkInterface"
QT_MOC_LITERAL(1, 22, 12), // "initTestCase"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "cleanupTestCase"
QT_MOC_LITERAL(4, 52, 4), // "dump"
QT_MOC_LITERAL(5, 57, 16), // "consistencyCheck"
QT_MOC_LITERAL(6, 74, 12), // "loopbackIPv4"
QT_MOC_LITERAL(7, 87, 12), // "loopbackIPv6"
QT_MOC_LITERAL(8, 100, 12), // "localAddress"
QT_MOC_LITERAL(9, 113, 21), // "interfaceFromXXX_data"
QT_MOC_LITERAL(10, 135, 16), // "interfaceFromXXX"
QT_MOC_LITERAL(11, 152, 20) // "copyInvalidInterface"

    },
    "tst_QNetworkInterface\0initTestCase\0\0"
    "cleanupTestCase\0dump\0consistencyCheck\0"
    "loopbackIPv4\0loopbackIPv6\0localAddress\0"
    "interfaceFromXXX_data\0interfaceFromXXX\0"
    "copyInvalidInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QNetworkInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

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

       0        // eod
};

void tst_QNetworkInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QNetworkInterface *_t = static_cast<tst_QNetworkInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanupTestCase(); break;
        case 2: _t->dump(); break;
        case 3: _t->consistencyCheck(); break;
        case 4: _t->loopbackIPv4(); break;
        case 5: _t->loopbackIPv6(); break;
        case 6: _t->localAddress(); break;
        case 7: _t->interfaceFromXXX_data(); break;
        case 8: _t->interfaceFromXXX(); break;
        case 9: _t->copyInvalidInterface(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QNetworkInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QNetworkInterface.data,
      qt_meta_data_tst_QNetworkInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QNetworkInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QNetworkInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QNetworkInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QNetworkInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
