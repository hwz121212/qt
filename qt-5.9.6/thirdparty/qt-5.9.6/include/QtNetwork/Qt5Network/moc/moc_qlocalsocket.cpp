/****************************************************************************
** Meta object code from reading C++ file 'qlocalsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qlocalsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlocalsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QLocalSocket_t {
    QByteArrayData data[13];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QLocalSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QLocalSocket_t qt_meta_stringdata_QLocalSocket = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QLocalSocket"
QT_MOC_LITERAL(1, 13, 9), // "connected"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "disconnected"
QT_MOC_LITERAL(4, 37, 5), // "error"
QT_MOC_LITERAL(5, 43, 30), // "QLocalSocket::LocalSocketError"
QT_MOC_LITERAL(6, 74, 11), // "socketError"
QT_MOC_LITERAL(7, 86, 12), // "stateChanged"
QT_MOC_LITERAL(8, 99, 30), // "QLocalSocket::LocalSocketState"
QT_MOC_LITERAL(9, 130, 11), // "socketState"
QT_MOC_LITERAL(10, 142, 11), // "_q_canWrite"
QT_MOC_LITERAL(11, 154, 13), // "_q_pipeClosed"
QT_MOC_LITERAL(12, 168, 11) // "_q_winError"

    },
    "QLocalSocket\0connected\0\0disconnected\0"
    "error\0QLocalSocket::LocalSocketError\0"
    "socketError\0stateChanged\0"
    "QLocalSocket::LocalSocketState\0"
    "socketState\0_q_canWrite\0_q_pipeClosed\0"
    "_q_winError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLocalSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x06 /* Public */,
       7,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   57,    2, 0x08 /* Private */,
      11,    0,   58,    2, 0x08 /* Private */,
      12,    2,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULong, QMetaType::QString,    2,    2,

       0        // eod
};

void QLocalSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLocalSocket *_t = static_cast<QLocalSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->error((*reinterpret_cast< QLocalSocket::LocalSocketError(*)>(_a[1]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< QLocalSocket::LocalSocketState(*)>(_a[1]))); break;
        case 4: _t->d_func()->_q_canWrite(); break;
        case 5: _t->d_func()->_q_pipeClosed(); break;
        case 6: _t->d_func()->_q_winError((*reinterpret_cast< ulong(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QLocalSocket::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLocalSocket::connected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QLocalSocket::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLocalSocket::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QLocalSocket::*_t)(QLocalSocket::LocalSocketError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLocalSocket::error)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QLocalSocket::*_t)(QLocalSocket::LocalSocketState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLocalSocket::stateChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QLocalSocket::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_QLocalSocket.data,
      qt_meta_data_QLocalSocket,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QLocalSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLocalSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QLocalSocket.stringdata0))
        return static_cast<void*>(this);
    return QIODevice::qt_metacast(_clname);
}

int QLocalSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QLocalSocket::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QLocalSocket::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QLocalSocket::error(QLocalSocket::LocalSocketError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QLocalSocket::stateChanged(QLocalSocket::LocalSocketState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE