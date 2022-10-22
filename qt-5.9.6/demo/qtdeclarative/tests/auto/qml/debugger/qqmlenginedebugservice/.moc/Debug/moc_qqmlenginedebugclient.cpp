/****************************************************************************
** Meta object code from reading C++ file 'qqmlenginedebugclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../shared/qqmlenginedebugclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmlenginedebugclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlEngineDebugClient_t {
    QByteArrayData data[6];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlEngineDebugClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlEngineDebugClient_t qt_meta_stringdata_QQmlEngineDebugClient = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQmlEngineDebugClient"
QT_MOC_LITERAL(1, 22, 9), // "newObject"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "objectId"
QT_MOC_LITERAL(4, 42, 12), // "valueChanged"
QT_MOC_LITERAL(5, 55, 6) // "result"

    },
    "QQmlEngineDebugClient\0newObject\0\0"
    "objectId\0valueChanged\0result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlEngineDebugClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    2,   32,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QVariant,    2,    2,
    QMetaType::Void,

       0        // eod
};

void QQmlEngineDebugClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlEngineDebugClient *_t = static_cast<QQmlEngineDebugClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newObject((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 2: _t->result(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQmlEngineDebugClient::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlEngineDebugClient::newObject)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQmlEngineDebugClient::*_t)(QByteArray , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlEngineDebugClient::valueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQmlEngineDebugClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlEngineDebugClient::result)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QQmlEngineDebugClient::staticMetaObject = {
    { &QQmlDebugClient::staticMetaObject, qt_meta_stringdata_QQmlEngineDebugClient.data,
      qt_meta_data_QQmlEngineDebugClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlEngineDebugClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlEngineDebugClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlEngineDebugClient.stringdata0))
        return static_cast<void*>(this);
    return QQmlDebugClient::qt_metacast(_clname);
}

int QQmlEngineDebugClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQmlDebugClient::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QQmlEngineDebugClient::newObject(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQmlEngineDebugClient::valueChanged(QByteArray _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQmlEngineDebugClient::result()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
