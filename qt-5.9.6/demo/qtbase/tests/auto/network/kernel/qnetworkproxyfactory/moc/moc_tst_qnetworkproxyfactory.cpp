/****************************************************************************
** Meta object code from reading C++ file 'tst_qnetworkproxyfactory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qnetworkproxyfactory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qnetworkproxyfactory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QNetworkProxyFactory_t {
    QByteArrayData data[11];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QNetworkProxyFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QNetworkProxyFactory_t qt_meta_stringdata_tst_QNetworkProxyFactory = {
    {
QT_MOC_LITERAL(0, 0, 24), // "tst_QNetworkProxyFactory"
QT_MOC_LITERAL(1, 25, 35), // "systemProxyForQueryCalledFrom..."
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 24), // "systemProxyForQuery_data"
QT_MOC_LITERAL(4, 87, 19), // "systemProxyForQuery"
QT_MOC_LITERAL(5, 107, 25), // "systemProxyForQuery_local"
QT_MOC_LITERAL(6, 133, 18), // "fromConfigurations"
QT_MOC_LITERAL(7, 152, 27), // "inNetworkAccessManager_data"
QT_MOC_LITERAL(8, 180, 22), // "inNetworkAccessManager"
QT_MOC_LITERAL(9, 203, 18), // "genericSystemProxy"
QT_MOC_LITERAL(10, 222, 23) // "genericSystemProxy_data"

    },
    "tst_QNetworkProxyFactory\0"
    "systemProxyForQueryCalledFromThread\0"
    "\0systemProxyForQuery_data\0systemProxyForQuery\0"
    "systemProxyForQuery_local\0fromConfigurations\0"
    "inNetworkAccessManager_data\0"
    "inNetworkAccessManager\0genericSystemProxy\0"
    "genericSystemProxy_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QNetworkProxyFactory[] = {

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

void tst_QNetworkProxyFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QNetworkProxyFactory *_t = static_cast<tst_QNetworkProxyFactory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->systemProxyForQueryCalledFromThread(); break;
        case 1: _t->systemProxyForQuery_data(); break;
        case 2: _t->systemProxyForQuery(); break;
        case 3: _t->systemProxyForQuery_local(); break;
        case 4: _t->fromConfigurations(); break;
        case 5: _t->inNetworkAccessManager_data(); break;
        case 6: _t->inNetworkAccessManager(); break;
        case 7: _t->genericSystemProxy(); break;
        case 8: _t->genericSystemProxy_data(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QNetworkProxyFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QNetworkProxyFactory.data,
      qt_meta_data_tst_QNetworkProxyFactory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QNetworkProxyFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QNetworkProxyFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QNetworkProxyFactory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QNetworkProxyFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
