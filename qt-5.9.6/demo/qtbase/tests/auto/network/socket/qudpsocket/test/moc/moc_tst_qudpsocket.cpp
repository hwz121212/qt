/****************************************************************************
** Meta object code from reading C++ file 'tst_qudpsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tst_qudpsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qudpsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QUdpSocket_t {
    QByteArrayData data[52];
    char stringdata0[976];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QUdpSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QUdpSocket_t qt_meta_stringdata_tst_QUdpSocket = {
    {
QT_MOC_LITERAL(0, 0, 14), // "tst_QUdpSocket"
QT_MOC_LITERAL(1, 15, 17), // "initTestCase_data"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "initTestCase"
QT_MOC_LITERAL(4, 47, 4), // "init"
QT_MOC_LITERAL(5, 52, 7), // "cleanup"
QT_MOC_LITERAL(6, 60, 12), // "constructing"
QT_MOC_LITERAL(7, 73, 30), // "unconnectedServerAndClientTest"
QT_MOC_LITERAL(8, 104, 12), // "broadcasting"
QT_MOC_LITERAL(9, 117, 9), // "loop_data"
QT_MOC_LITERAL(10, 127, 4), // "loop"
QT_MOC_LITERAL(11, 132, 13), // "ipv6Loop_data"
QT_MOC_LITERAL(12, 146, 8), // "ipv6Loop"
QT_MOC_LITERAL(13, 155, 9), // "dualStack"
QT_MOC_LITERAL(14, 165, 20), // "dualStackAutoBinding"
QT_MOC_LITERAL(15, 186, 23), // "dualStackNoIPv4onV6only"
QT_MOC_LITERAL(16, 210, 13), // "connectToHost"
QT_MOC_LITERAL(17, 224, 20), // "bindAndConnectToHost"
QT_MOC_LITERAL(18, 245, 19), // "pendingDatagramSize"
QT_MOC_LITERAL(19, 265, 13), // "writeDatagram"
QT_MOC_LITERAL(20, 279, 11), // "performance"
QT_MOC_LITERAL(21, 291, 8), // "bindMode"
QT_MOC_LITERAL(22, 300, 35), // "writeDatagramToNonExistingPee..."
QT_MOC_LITERAL(23, 336, 30), // "writeDatagramToNonExistingPeer"
QT_MOC_LITERAL(24, 367, 27), // "writeToNonExistingPeer_data"
QT_MOC_LITERAL(25, 395, 22), // "writeToNonExistingPeer"
QT_MOC_LITERAL(26, 418, 37), // "outOfProcessConnectedClientSe..."
QT_MOC_LITERAL(27, 456, 39), // "outOfProcessUnconnectedClient..."
QT_MOC_LITERAL(28, 496, 18), // "zeroLengthDatagram"
QT_MOC_LITERAL(29, 515, 23), // "multicastTtlOption_data"
QT_MOC_LITERAL(30, 539, 18), // "multicastTtlOption"
QT_MOC_LITERAL(31, 558, 28), // "multicastLoopbackOption_data"
QT_MOC_LITERAL(32, 587, 23), // "multicastLoopbackOption"
QT_MOC_LITERAL(33, 611, 28), // "multicastJoinBeforeBind_data"
QT_MOC_LITERAL(34, 640, 23), // "multicastJoinBeforeBind"
QT_MOC_LITERAL(35, 664, 29), // "multicastLeaveAfterClose_data"
QT_MOC_LITERAL(36, 694, 24), // "multicastLeaveAfterClose"
QT_MOC_LITERAL(37, 719, 26), // "setMulticastInterface_data"
QT_MOC_LITERAL(38, 746, 21), // "setMulticastInterface"
QT_MOC_LITERAL(39, 768, 14), // "multicast_data"
QT_MOC_LITERAL(40, 783, 9), // "multicast"
QT_MOC_LITERAL(41, 793, 9), // "echo_data"
QT_MOC_LITERAL(42, 803, 4), // "echo"
QT_MOC_LITERAL(43, 808, 13), // "linkLocalIPv6"
QT_MOC_LITERAL(44, 822, 13), // "linkLocalIPv4"
QT_MOC_LITERAL(45, 836, 9), // "readyRead"
QT_MOC_LITERAL(46, 846, 25), // "readyReadForEmptyDatagram"
QT_MOC_LITERAL(47, 872, 17), // "asyncReadDatagram"
QT_MOC_LITERAL(48, 890, 22), // "writeInHostLookupState"
QT_MOC_LITERAL(49, 913, 19), // "empty_readyReadSlot"
QT_MOC_LITERAL(50, 933, 19), // "empty_connectedSlot"
QT_MOC_LITERAL(51, 953, 22) // "async_readDatagramSlot"

    },
    "tst_QUdpSocket\0initTestCase_data\0\0"
    "initTestCase\0init\0cleanup\0constructing\0"
    "unconnectedServerAndClientTest\0"
    "broadcasting\0loop_data\0loop\0ipv6Loop_data\0"
    "ipv6Loop\0dualStack\0dualStackAutoBinding\0"
    "dualStackNoIPv4onV6only\0connectToHost\0"
    "bindAndConnectToHost\0pendingDatagramSize\0"
    "writeDatagram\0performance\0bindMode\0"
    "writeDatagramToNonExistingPeer_data\0"
    "writeDatagramToNonExistingPeer\0"
    "writeToNonExistingPeer_data\0"
    "writeToNonExistingPeer\0"
    "outOfProcessConnectedClientServerTest\0"
    "outOfProcessUnconnectedClientServerTest\0"
    "zeroLengthDatagram\0multicastTtlOption_data\0"
    "multicastTtlOption\0multicastLoopbackOption_data\0"
    "multicastLoopbackOption\0"
    "multicastJoinBeforeBind_data\0"
    "multicastJoinBeforeBind\0"
    "multicastLeaveAfterClose_data\0"
    "multicastLeaveAfterClose\0"
    "setMulticastInterface_data\0"
    "setMulticastInterface\0multicast_data\0"
    "multicast\0echo_data\0echo\0linkLocalIPv6\0"
    "linkLocalIPv4\0readyRead\0"
    "readyReadForEmptyDatagram\0asyncReadDatagram\0"
    "writeInHostLookupState\0empty_readyReadSlot\0"
    "empty_connectedSlot\0async_readDatagramSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QUdpSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  264,    2, 0x08 /* Private */,
       3,    0,  265,    2, 0x08 /* Private */,
       4,    0,  266,    2, 0x08 /* Private */,
       5,    0,  267,    2, 0x08 /* Private */,
       6,    0,  268,    2, 0x08 /* Private */,
       7,    0,  269,    2, 0x08 /* Private */,
       8,    0,  270,    2, 0x08 /* Private */,
       9,    0,  271,    2, 0x08 /* Private */,
      10,    0,  272,    2, 0x08 /* Private */,
      11,    0,  273,    2, 0x08 /* Private */,
      12,    0,  274,    2, 0x08 /* Private */,
      13,    0,  275,    2, 0x08 /* Private */,
      14,    0,  276,    2, 0x08 /* Private */,
      15,    0,  277,    2, 0x08 /* Private */,
      16,    0,  278,    2, 0x08 /* Private */,
      17,    0,  279,    2, 0x08 /* Private */,
      18,    0,  280,    2, 0x08 /* Private */,
      19,    0,  281,    2, 0x08 /* Private */,
      20,    0,  282,    2, 0x08 /* Private */,
      21,    0,  283,    2, 0x08 /* Private */,
      22,    0,  284,    2, 0x08 /* Private */,
      23,    0,  285,    2, 0x08 /* Private */,
      24,    0,  286,    2, 0x08 /* Private */,
      25,    0,  287,    2, 0x08 /* Private */,
      26,    0,  288,    2, 0x08 /* Private */,
      27,    0,  289,    2, 0x08 /* Private */,
      28,    0,  290,    2, 0x08 /* Private */,
      29,    0,  291,    2, 0x08 /* Private */,
      30,    0,  292,    2, 0x08 /* Private */,
      31,    0,  293,    2, 0x08 /* Private */,
      32,    0,  294,    2, 0x08 /* Private */,
      33,    0,  295,    2, 0x08 /* Private */,
      34,    0,  296,    2, 0x08 /* Private */,
      35,    0,  297,    2, 0x08 /* Private */,
      36,    0,  298,    2, 0x08 /* Private */,
      37,    0,  299,    2, 0x08 /* Private */,
      38,    0,  300,    2, 0x08 /* Private */,
      39,    0,  301,    2, 0x08 /* Private */,
      40,    0,  302,    2, 0x08 /* Private */,
      41,    0,  303,    2, 0x08 /* Private */,
      42,    0,  304,    2, 0x08 /* Private */,
      43,    0,  305,    2, 0x08 /* Private */,
      44,    0,  306,    2, 0x08 /* Private */,
      45,    0,  307,    2, 0x08 /* Private */,
      46,    0,  308,    2, 0x08 /* Private */,
      47,    0,  309,    2, 0x08 /* Private */,
      48,    0,  310,    2, 0x08 /* Private */,
      49,    0,  311,    2, 0x09 /* Protected */,
      50,    0,  312,    2, 0x09 /* Protected */,
      51,    0,  313,    2, 0x09 /* Protected */,

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

void tst_QUdpSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QUdpSocket *_t = static_cast<tst_QUdpSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase_data(); break;
        case 1: _t->initTestCase(); break;
        case 2: _t->init(); break;
        case 3: _t->cleanup(); break;
        case 4: _t->constructing(); break;
        case 5: _t->unconnectedServerAndClientTest(); break;
        case 6: _t->broadcasting(); break;
        case 7: _t->loop_data(); break;
        case 8: _t->loop(); break;
        case 9: _t->ipv6Loop_data(); break;
        case 10: _t->ipv6Loop(); break;
        case 11: _t->dualStack(); break;
        case 12: _t->dualStackAutoBinding(); break;
        case 13: _t->dualStackNoIPv4onV6only(); break;
        case 14: _t->connectToHost(); break;
        case 15: _t->bindAndConnectToHost(); break;
        case 16: _t->pendingDatagramSize(); break;
        case 17: _t->writeDatagram(); break;
        case 18: _t->performance(); break;
        case 19: _t->bindMode(); break;
        case 20: _t->writeDatagramToNonExistingPeer_data(); break;
        case 21: _t->writeDatagramToNonExistingPeer(); break;
        case 22: _t->writeToNonExistingPeer_data(); break;
        case 23: _t->writeToNonExistingPeer(); break;
        case 24: _t->outOfProcessConnectedClientServerTest(); break;
        case 25: _t->outOfProcessUnconnectedClientServerTest(); break;
        case 26: _t->zeroLengthDatagram(); break;
        case 27: _t->multicastTtlOption_data(); break;
        case 28: _t->multicastTtlOption(); break;
        case 29: _t->multicastLoopbackOption_data(); break;
        case 30: _t->multicastLoopbackOption(); break;
        case 31: _t->multicastJoinBeforeBind_data(); break;
        case 32: _t->multicastJoinBeforeBind(); break;
        case 33: _t->multicastLeaveAfterClose_data(); break;
        case 34: _t->multicastLeaveAfterClose(); break;
        case 35: _t->setMulticastInterface_data(); break;
        case 36: _t->setMulticastInterface(); break;
        case 37: _t->multicast_data(); break;
        case 38: _t->multicast(); break;
        case 39: _t->echo_data(); break;
        case 40: _t->echo(); break;
        case 41: _t->linkLocalIPv6(); break;
        case 42: _t->linkLocalIPv4(); break;
        case 43: _t->readyRead(); break;
        case 44: _t->readyReadForEmptyDatagram(); break;
        case 45: _t->asyncReadDatagram(); break;
        case 46: _t->writeInHostLookupState(); break;
        case 47: _t->empty_readyReadSlot(); break;
        case 48: _t->empty_connectedSlot(); break;
        case 49: _t->async_readDatagramSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QUdpSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QUdpSocket.data,
      qt_meta_data_tst_QUdpSocket,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QUdpSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QUdpSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QUdpSocket.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QUdpSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 50;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
