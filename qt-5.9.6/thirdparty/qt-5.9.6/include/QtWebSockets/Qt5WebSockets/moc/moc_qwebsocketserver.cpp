/****************************************************************************
** Meta object code from reading C++ file 'qwebsocketserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qwebsocketserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwebsocketserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWebSocketServer_t {
    QByteArrayData data[15];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebSocketServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebSocketServer_t qt_meta_stringdata_QWebSocketServer = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QWebSocketServer"
QT_MOC_LITERAL(1, 17, 11), // "acceptError"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(4, 59, 11), // "socketError"
QT_MOC_LITERAL(5, 71, 11), // "serverError"
QT_MOC_LITERAL(6, 83, 29), // "QWebSocketProtocol::CloseCode"
QT_MOC_LITERAL(7, 113, 9), // "closeCode"
QT_MOC_LITERAL(8, 123, 28), // "originAuthenticationRequired"
QT_MOC_LITERAL(9, 152, 28), // "QWebSocketCorsAuthenticator*"
QT_MOC_LITERAL(10, 181, 14), // "pAuthenticator"
QT_MOC_LITERAL(11, 196, 13), // "newConnection"
QT_MOC_LITERAL(12, 210, 6), // "closed"
QT_MOC_LITERAL(13, 217, 7), // "SslMode"
QT_MOC_LITERAL(14, 225, 13) // "NonSecureMode"

    },
    "QWebSocketServer\0acceptError\0\0"
    "QAbstractSocket::SocketError\0socketError\0"
    "serverError\0QWebSocketProtocol::CloseCode\0"
    "closeCode\0originAuthenticationRequired\0"
    "QWebSocketCorsAuthenticator*\0"
    "pAuthenticator\0newConnection\0closed\0"
    "SslMode\0NonSecureMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebSocketServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       1,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       8,    1,   45,    2, 0x06 /* Public */,
      11,    0,   48,    2, 0x06 /* Public */,
      12,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
      13, 0x0,    1,   54,

 // enum data: key, value
      14, uint(QWebSocketServer::NonSecureMode),

       0        // eod
};

void QWebSocketServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWebSocketServer *_t = static_cast<QWebSocketServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->acceptError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 1: _t->serverError((*reinterpret_cast< QWebSocketProtocol::CloseCode(*)>(_a[1]))); break;
        case 2: _t->originAuthenticationRequired((*reinterpret_cast< QWebSocketCorsAuthenticator*(*)>(_a[1]))); break;
        case 3: _t->newConnection(); break;
        case 4: _t->closed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QWebSocketServer::*_t)(QAbstractSocket::SocketError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSocketServer::acceptError)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QWebSocketServer::*_t)(QWebSocketProtocol::CloseCode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSocketServer::serverError)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QWebSocketServer::*_t)(QWebSocketCorsAuthenticator * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSocketServer::originAuthenticationRequired)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QWebSocketServer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSocketServer::newConnection)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QWebSocketServer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebSocketServer::closed)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QWebSocketServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWebSocketServer.data,
      qt_meta_data_QWebSocketServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWebSocketServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebSocketServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWebSocketServer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QWebSocketServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QWebSocketServer::acceptError(QAbstractSocket::SocketError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWebSocketServer::serverError(QWebSocketProtocol::CloseCode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QWebSocketServer::originAuthenticationRequired(QWebSocketCorsAuthenticator * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QWebSocketServer::newConnection()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QWebSocketServer::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
