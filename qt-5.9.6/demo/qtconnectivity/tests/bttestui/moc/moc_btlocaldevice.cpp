/****************************************************************************
** Meta object code from reading C++ file 'btlocaldevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../btlocaldevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'btlocaldevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BtLocalDevice_t {
    QByteArrayData data[72];
    char stringdata0[1236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BtLocalDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BtLocalDevice_t qt_meta_stringdata_BtLocalDevice = {
    {
QT_MOC_LITERAL(0, 0, 13), // "BtLocalDevice"
QT_MOC_LITERAL(1, 14, 5), // "error"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 28), // "QBluetoothLocalDevice::Error"
QT_MOC_LITERAL(4, 50, 20), // "hostModeStateChanged"
QT_MOC_LITERAL(5, 71, 17), // "socketStateUpdate"
QT_MOC_LITERAL(6, 89, 6), // "foobar"
QT_MOC_LITERAL(7, 96, 15), // "secFlagsChanged"
QT_MOC_LITERAL(8, 112, 15), // "dumpInformation"
QT_MOC_LITERAL(9, 128, 7), // "powerOn"
QT_MOC_LITERAL(10, 136, 5), // "reset"
QT_MOC_LITERAL(11, 142, 11), // "setHostMode"
QT_MOC_LITERAL(12, 154, 7), // "newMode"
QT_MOC_LITERAL(13, 162, 20), // "requestPairingUpdate"
QT_MOC_LITERAL(14, 183, 9), // "isPairing"
QT_MOC_LITERAL(15, 193, 15), // "pairingFinished"
QT_MOC_LITERAL(16, 209, 17), // "QBluetoothAddress"
QT_MOC_LITERAL(17, 227, 7), // "address"
QT_MOC_LITERAL(18, 235, 30), // "QBluetoothLocalDevice::Pairing"
QT_MOC_LITERAL(19, 266, 7), // "pairing"
QT_MOC_LITERAL(20, 274, 9), // "connected"
QT_MOC_LITERAL(21, 284, 4), // "addr"
QT_MOC_LITERAL(22, 289, 12), // "disconnected"
QT_MOC_LITERAL(23, 302, 26), // "pairingDisplayConfirmation"
QT_MOC_LITERAL(24, 329, 3), // "pin"
QT_MOC_LITERAL(25, 333, 14), // "confirmPairing"
QT_MOC_LITERAL(26, 348, 18), // "cycleSecurityFlags"
QT_MOC_LITERAL(27, 367, 16), // "deviceDiscovered"
QT_MOC_LITERAL(28, 384, 20), // "QBluetoothDeviceInfo"
QT_MOC_LITERAL(29, 405, 4), // "info"
QT_MOC_LITERAL(30, 410, 17), // "discoveryFinished"
QT_MOC_LITERAL(31, 428, 17), // "discoveryCanceled"
QT_MOC_LITERAL(32, 446, 14), // "discoveryError"
QT_MOC_LITERAL(33, 461, 37), // "QBluetoothDeviceDiscoveryAgen..."
QT_MOC_LITERAL(34, 499, 14), // "startDiscovery"
QT_MOC_LITERAL(35, 514, 13), // "stopDiscovery"
QT_MOC_LITERAL(36, 528, 21), // "startServiceDiscovery"
QT_MOC_LITERAL(37, 550, 18), // "isMinimalDiscovery"
QT_MOC_LITERAL(38, 569, 30), // "startTargettedServiceDiscovery"
QT_MOC_LITERAL(39, 600, 20), // "stopServiceDiscovery"
QT_MOC_LITERAL(40, 621, 17), // "serviceDiscovered"
QT_MOC_LITERAL(41, 639, 21), // "QBluetoothServiceInfo"
QT_MOC_LITERAL(42, 661, 24), // "serviceDiscoveryFinished"
QT_MOC_LITERAL(43, 686, 24), // "serviceDiscoveryCanceled"
QT_MOC_LITERAL(44, 711, 21), // "serviceDiscoveryError"
QT_MOC_LITERAL(45, 733, 38), // "QBluetoothServiceDiscoveryAge..."
QT_MOC_LITERAL(46, 772, 20), // "dumpServiceDiscovery"
QT_MOC_LITERAL(47, 793, 16), // "connectToService"
QT_MOC_LITERAL(48, 810, 25), // "connectToServiceViaSearch"
QT_MOC_LITERAL(49, 836, 19), // "disconnectToService"
QT_MOC_LITERAL(50, 856, 11), // "closeSocket"
QT_MOC_LITERAL(51, 868, 11), // "abortSocket"
QT_MOC_LITERAL(52, 880, 15), // "socketConnected"
QT_MOC_LITERAL(53, 896, 18), // "socketDisconnected"
QT_MOC_LITERAL(54, 915, 11), // "socketError"
QT_MOC_LITERAL(55, 927, 29), // "QBluetoothSocket::SocketError"
QT_MOC_LITERAL(56, 957, 18), // "socketStateChanged"
QT_MOC_LITERAL(57, 976, 29), // "QBluetoothSocket::SocketState"
QT_MOC_LITERAL(58, 1006, 21), // "dumpSocketInformation"
QT_MOC_LITERAL(59, 1028, 9), // "writeData"
QT_MOC_LITERAL(60, 1038, 8), // "readData"
QT_MOC_LITERAL(61, 1047, 11), // "serverError"
QT_MOC_LITERAL(62, 1059, 23), // "QBluetoothServer::Error"
QT_MOC_LITERAL(63, 1083, 16), // "serverListenPort"
QT_MOC_LITERAL(64, 1100, 16), // "serverListenUuid"
QT_MOC_LITERAL(65, 1117, 11), // "serverClose"
QT_MOC_LITERAL(66, 1129, 19), // "serverNewConnection"
QT_MOC_LITERAL(67, 1149, 24), // "clientSocketDisconnected"
QT_MOC_LITERAL(68, 1174, 21), // "clientSocketReadyRead"
QT_MOC_LITERAL(69, 1196, 21), // "dumpServerInformation"
QT_MOC_LITERAL(70, 1218, 8), // "hostMode"
QT_MOC_LITERAL(71, 1227, 8) // "secFlags"

    },
    "BtLocalDevice\0error\0\0QBluetoothLocalDevice::Error\0"
    "hostModeStateChanged\0socketStateUpdate\0"
    "foobar\0secFlagsChanged\0dumpInformation\0"
    "powerOn\0reset\0setHostMode\0newMode\0"
    "requestPairingUpdate\0isPairing\0"
    "pairingFinished\0QBluetoothAddress\0"
    "address\0QBluetoothLocalDevice::Pairing\0"
    "pairing\0connected\0addr\0disconnected\0"
    "pairingDisplayConfirmation\0pin\0"
    "confirmPairing\0cycleSecurityFlags\0"
    "deviceDiscovered\0QBluetoothDeviceInfo\0"
    "info\0discoveryFinished\0discoveryCanceled\0"
    "discoveryError\0QBluetoothDeviceDiscoveryAgent::Error\0"
    "startDiscovery\0stopDiscovery\0"
    "startServiceDiscovery\0isMinimalDiscovery\0"
    "startTargettedServiceDiscovery\0"
    "stopServiceDiscovery\0serviceDiscovered\0"
    "QBluetoothServiceInfo\0serviceDiscoveryFinished\0"
    "serviceDiscoveryCanceled\0serviceDiscoveryError\0"
    "QBluetoothServiceDiscoveryAgent::Error\0"
    "dumpServiceDiscovery\0connectToService\0"
    "connectToServiceViaSearch\0disconnectToService\0"
    "closeSocket\0abortSocket\0socketConnected\0"
    "socketDisconnected\0socketError\0"
    "QBluetoothSocket::SocketError\0"
    "socketStateChanged\0QBluetoothSocket::SocketState\0"
    "dumpSocketInformation\0writeData\0"
    "readData\0serverError\0QBluetoothServer::Error\0"
    "serverListenPort\0serverListenUuid\0"
    "serverClose\0serverNewConnection\0"
    "clientSocketDisconnected\0clientSocketReadyRead\0"
    "dumpServerInformation\0hostMode\0secFlags"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BtLocalDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       2,  344, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  259,    2, 0x06 /* Public */,
       4,    0,  262,    2, 0x06 /* Public */,
       5,    1,  263,    2, 0x06 /* Public */,
       7,    0,  266,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  267,    2, 0x0a /* Public */,
       9,    0,  268,    2, 0x0a /* Public */,
      10,    0,  269,    2, 0x0a /* Public */,
      11,    1,  270,    2, 0x0a /* Public */,
      13,    1,  273,    2, 0x0a /* Public */,
      15,    2,  276,    2, 0x0a /* Public */,
      20,    1,  281,    2, 0x0a /* Public */,
      22,    1,  284,    2, 0x0a /* Public */,
      23,    2,  287,    2, 0x0a /* Public */,
      25,    0,  292,    2, 0x0a /* Public */,
      26,    0,  293,    2, 0x0a /* Public */,
      27,    1,  294,    2, 0x0a /* Public */,
      30,    0,  297,    2, 0x0a /* Public */,
      31,    0,  298,    2, 0x0a /* Public */,
      32,    1,  299,    2, 0x0a /* Public */,
      34,    0,  302,    2, 0x0a /* Public */,
      35,    0,  303,    2, 0x0a /* Public */,
      36,    1,  304,    2, 0x0a /* Public */,
      38,    0,  307,    2, 0x0a /* Public */,
      39,    0,  308,    2, 0x0a /* Public */,
      40,    1,  309,    2, 0x0a /* Public */,
      42,    0,  312,    2, 0x0a /* Public */,
      43,    0,  313,    2, 0x0a /* Public */,
      44,    1,  314,    2, 0x0a /* Public */,
      46,    0,  317,    2, 0x0a /* Public */,
      47,    0,  318,    2, 0x0a /* Public */,
      48,    0,  319,    2, 0x0a /* Public */,
      49,    0,  320,    2, 0x0a /* Public */,
      50,    0,  321,    2, 0x0a /* Public */,
      51,    0,  322,    2, 0x0a /* Public */,
      52,    0,  323,    2, 0x0a /* Public */,
      53,    0,  324,    2, 0x0a /* Public */,
      54,    1,  325,    2, 0x0a /* Public */,
      56,    1,  328,    2, 0x0a /* Public */,
      58,    0,  331,    2, 0x0a /* Public */,
      59,    0,  332,    2, 0x0a /* Public */,
      60,    0,  333,    2, 0x0a /* Public */,
      61,    1,  334,    2, 0x0a /* Public */,
      63,    0,  337,    2, 0x0a /* Public */,
      64,    0,  338,    2, 0x0a /* Public */,
      65,    0,  339,    2, 0x0a /* Public */,
      66,    0,  340,    2, 0x0a /* Public */,
      67,    0,  341,    2, 0x0a /* Public */,
      68,    0,  342,    2, 0x0a /* Public */,
      69,    0,  343,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    1,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 18,   17,   19,
    QMetaType::Void, 0x80000000 | 16,   21,
    QMetaType::Void, 0x80000000 | 16,   21,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QString,   17,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,    1,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 41,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 45,    1,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 55,    1,
    QMetaType::Void, 0x80000000 | 57,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 62,    1,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      70, QMetaType::QString, 0x00495001,
      71, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       1,
       3,

       0        // eod
};

void BtLocalDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BtLocalDevice *_t = static_cast<BtLocalDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QBluetoothLocalDevice::Error(*)>(_a[1]))); break;
        case 1: _t->hostModeStateChanged(); break;
        case 2: _t->socketStateUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->secFlagsChanged(); break;
        case 4: _t->dumpInformation(); break;
        case 5: _t->powerOn(); break;
        case 6: _t->reset(); break;
        case 7: _t->setHostMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->requestPairingUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->pairingFinished((*reinterpret_cast< const QBluetoothAddress(*)>(_a[1])),(*reinterpret_cast< QBluetoothLocalDevice::Pairing(*)>(_a[2]))); break;
        case 10: _t->connected((*reinterpret_cast< const QBluetoothAddress(*)>(_a[1]))); break;
        case 11: _t->disconnected((*reinterpret_cast< const QBluetoothAddress(*)>(_a[1]))); break;
        case 12: _t->pairingDisplayConfirmation((*reinterpret_cast< const QBluetoothAddress(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->confirmPairing(); break;
        case 14: _t->cycleSecurityFlags(); break;
        case 15: _t->deviceDiscovered((*reinterpret_cast< const QBluetoothDeviceInfo(*)>(_a[1]))); break;
        case 16: _t->discoveryFinished(); break;
        case 17: _t->discoveryCanceled(); break;
        case 18: _t->discoveryError((*reinterpret_cast< QBluetoothDeviceDiscoveryAgent::Error(*)>(_a[1]))); break;
        case 19: _t->startDiscovery(); break;
        case 20: _t->stopDiscovery(); break;
        case 21: _t->startServiceDiscovery((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->startTargettedServiceDiscovery(); break;
        case 23: _t->stopServiceDiscovery(); break;
        case 24: _t->serviceDiscovered((*reinterpret_cast< const QBluetoothServiceInfo(*)>(_a[1]))); break;
        case 25: _t->serviceDiscoveryFinished(); break;
        case 26: _t->serviceDiscoveryCanceled(); break;
        case 27: _t->serviceDiscoveryError((*reinterpret_cast< QBluetoothServiceDiscoveryAgent::Error(*)>(_a[1]))); break;
        case 28: _t->dumpServiceDiscovery(); break;
        case 29: _t->connectToService(); break;
        case 30: _t->connectToServiceViaSearch(); break;
        case 31: _t->disconnectToService(); break;
        case 32: _t->closeSocket(); break;
        case 33: _t->abortSocket(); break;
        case 34: _t->socketConnected(); break;
        case 35: _t->socketDisconnected(); break;
        case 36: _t->socketError((*reinterpret_cast< QBluetoothSocket::SocketError(*)>(_a[1]))); break;
        case 37: _t->socketStateChanged((*reinterpret_cast< QBluetoothSocket::SocketState(*)>(_a[1]))); break;
        case 38: _t->dumpSocketInformation(); break;
        case 39: _t->writeData(); break;
        case 40: _t->readData(); break;
        case 41: _t->serverError((*reinterpret_cast< QBluetoothServer::Error(*)>(_a[1]))); break;
        case 42: _t->serverListenPort(); break;
        case 43: _t->serverListenUuid(); break;
        case 44: _t->serverClose(); break;
        case 45: _t->serverNewConnection(); break;
        case 46: _t->clientSocketDisconnected(); break;
        case 47: _t->clientSocketReadyRead(); break;
        case 48: _t->dumpServerInformation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothLocalDevice::Error >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothAddress >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothLocalDevice::Pairing >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothAddress >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothAddress >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothAddress >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothDeviceInfo >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothServiceInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BtLocalDevice::*_t)(QBluetoothLocalDevice::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BtLocalDevice::error)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BtLocalDevice::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BtLocalDevice::hostModeStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BtLocalDevice::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BtLocalDevice::socketStateUpdate)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BtLocalDevice::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BtLocalDevice::secFlagsChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BtLocalDevice *_t = static_cast<BtLocalDevice *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->hostMode(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->secFlags(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BtLocalDevice *_t = static_cast<BtLocalDevice *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setSecFlags(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject BtLocalDevice::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BtLocalDevice.data,
      qt_meta_data_BtLocalDevice,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BtLocalDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BtLocalDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BtLocalDevice.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BtLocalDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void BtLocalDevice::error(QBluetoothLocalDevice::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BtLocalDevice::hostModeStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BtLocalDevice::socketStateUpdate(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BtLocalDevice::secFlagsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
