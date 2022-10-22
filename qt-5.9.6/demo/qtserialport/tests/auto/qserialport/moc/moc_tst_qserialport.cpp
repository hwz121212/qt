/****************************************************************************
** Meta object code from reading C++ file 'tst_qserialport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qserialport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qserialport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QSerialPortInfo_t {
    QByteArrayData data[5];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QSerialPortInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QSerialPortInfo_t qt_meta_stringdata_tst_QSerialPortInfo = {
    {
QT_MOC_LITERAL(0, 0, 19), // "tst_QSerialPortInfo"
QT_MOC_LITERAL(1, 20, 12), // "initTestCase"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "constructors"
QT_MOC_LITERAL(4, 47, 10) // "assignment"

    },
    "tst_QSerialPortInfo\0initTestCase\0\0"
    "constructors\0assignment"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QSerialPortInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tst_QSerialPortInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QSerialPortInfo *_t = static_cast<tst_QSerialPortInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->constructors(); break;
        case 2: _t->assignment(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QSerialPortInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QSerialPortInfo.data,
      qt_meta_data_tst_QSerialPortInfo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QSerialPortInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QSerialPortInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QSerialPortInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QSerialPortInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_tst_QSerialPort_t {
    QByteArrayData data[41];
    char stringdata0[808];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QSerialPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QSerialPort_t qt_meta_stringdata_tst_QSerialPort = {
    {
QT_MOC_LITERAL(0, 0, 15), // "tst_QSerialPort"
QT_MOC_LITERAL(1, 16, 12), // "openExisting"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 20), // "openNotExisting_data"
QT_MOC_LITERAL(4, 51, 15), // "openNotExisting"
QT_MOC_LITERAL(5, 67, 13), // "baudRate_data"
QT_MOC_LITERAL(6, 81, 8), // "baudRate"
QT_MOC_LITERAL(7, 90, 13), // "dataBits_data"
QT_MOC_LITERAL(8, 104, 8), // "dataBits"
QT_MOC_LITERAL(9, 113, 11), // "parity_data"
QT_MOC_LITERAL(10, 125, 6), // "parity"
QT_MOC_LITERAL(11, 132, 13), // "stopBits_data"
QT_MOC_LITERAL(12, 146, 8), // "stopBits"
QT_MOC_LITERAL(13, 155, 16), // "flowControl_data"
QT_MOC_LITERAL(14, 172, 11), // "flowControl"
QT_MOC_LITERAL(15, 184, 3), // "rts"
QT_MOC_LITERAL(16, 188, 3), // "dtr"
QT_MOC_LITERAL(17, 192, 21), // "independenceRtsAndDtr"
QT_MOC_LITERAL(18, 214, 5), // "flush"
QT_MOC_LITERAL(19, 220, 11), // "doubleFlush"
QT_MOC_LITERAL(20, 232, 19), // "waitForBytesWritten"
QT_MOC_LITERAL(21, 252, 27), // "waitForReadyReadWithTimeout"
QT_MOC_LITERAL(22, 280, 27), // "waitForReadyReadWithOneByte"
QT_MOC_LITERAL(23, 308, 28), // "waitForReadyReadWithAlphabet"
QT_MOC_LITERAL(24, 337, 27), // "twoStageSynchronousLoopback"
QT_MOC_LITERAL(25, 365, 20), // "synchronousReadWrite"
QT_MOC_LITERAL(26, 386, 36), // "asynchronousWriteByBytesWritt..."
QT_MOC_LITERAL(27, 423, 31), // "asynchronousWriteByBytesWritten"
QT_MOC_LITERAL(28, 455, 29), // "asynchronousWriteByTimer_data"
QT_MOC_LITERAL(29, 485, 24), // "asynchronousWriteByTimer"
QT_MOC_LITERAL(30, 510, 34), // "asyncReadWithLimitedReadBuffe..."
QT_MOC_LITERAL(31, 545, 18), // "readBufferOverflow"
QT_MOC_LITERAL(32, 564, 19), // "readAfterInputClear"
QT_MOC_LITERAL(33, 584, 46), // "synchronousReadWriteAfterAsyn..."
QT_MOC_LITERAL(34, 631, 12), // "controlBreak"
QT_MOC_LITERAL(35, 644, 14), // "clearAfterOpen"
QT_MOC_LITERAL(36, 659, 35), // "readWriteWithDifferentBaudRat..."
QT_MOC_LITERAL(37, 695, 30), // "readWriteWithDifferentBaudRate"
QT_MOC_LITERAL(38, 726, 33), // "handleBytesWrittenAndExitLoop..."
QT_MOC_LITERAL(39, 760, 12), // "bytesWritten"
QT_MOC_LITERAL(40, 773, 34) // "handleBytesWrittenAndExitLoop..."

    },
    "tst_QSerialPort\0openExisting\0\0"
    "openNotExisting_data\0openNotExisting\0"
    "baudRate_data\0baudRate\0dataBits_data\0"
    "dataBits\0parity_data\0parity\0stopBits_data\0"
    "stopBits\0flowControl_data\0flowControl\0"
    "rts\0dtr\0independenceRtsAndDtr\0flush\0"
    "doubleFlush\0waitForBytesWritten\0"
    "waitForReadyReadWithTimeout\0"
    "waitForReadyReadWithOneByte\0"
    "waitForReadyReadWithAlphabet\0"
    "twoStageSynchronousLoopback\0"
    "synchronousReadWrite\0"
    "asynchronousWriteByBytesWritten_data\0"
    "asynchronousWriteByBytesWritten\0"
    "asynchronousWriteByTimer_data\0"
    "asynchronousWriteByTimer\0"
    "asyncReadWithLimitedReadBufferSize\0"
    "readBufferOverflow\0readAfterInputClear\0"
    "synchronousReadWriteAfterAsynchronousReadWrite\0"
    "controlBreak\0clearAfterOpen\0"
    "readWriteWithDifferentBaudRate_data\0"
    "readWriteWithDifferentBaudRate\0"
    "handleBytesWrittenAndExitLoopSlot\0"
    "bytesWritten\0handleBytesWrittenAndExitLoopSlot2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QSerialPort[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  204,    2, 0x08 /* Private */,
       3,    0,  205,    2, 0x08 /* Private */,
       4,    0,  206,    2, 0x08 /* Private */,
       5,    0,  207,    2, 0x08 /* Private */,
       6,    0,  208,    2, 0x08 /* Private */,
       7,    0,  209,    2, 0x08 /* Private */,
       8,    0,  210,    2, 0x08 /* Private */,
       9,    0,  211,    2, 0x08 /* Private */,
      10,    0,  212,    2, 0x08 /* Private */,
      11,    0,  213,    2, 0x08 /* Private */,
      12,    0,  214,    2, 0x08 /* Private */,
      13,    0,  215,    2, 0x08 /* Private */,
      14,    0,  216,    2, 0x08 /* Private */,
      15,    0,  217,    2, 0x08 /* Private */,
      16,    0,  218,    2, 0x08 /* Private */,
      17,    0,  219,    2, 0x08 /* Private */,
      18,    0,  220,    2, 0x08 /* Private */,
      19,    0,  221,    2, 0x08 /* Private */,
      20,    0,  222,    2, 0x08 /* Private */,
      21,    0,  223,    2, 0x08 /* Private */,
      22,    0,  224,    2, 0x08 /* Private */,
      23,    0,  225,    2, 0x08 /* Private */,
      24,    0,  226,    2, 0x08 /* Private */,
      25,    0,  227,    2, 0x08 /* Private */,
      26,    0,  228,    2, 0x08 /* Private */,
      27,    0,  229,    2, 0x08 /* Private */,
      28,    0,  230,    2, 0x08 /* Private */,
      29,    0,  231,    2, 0x08 /* Private */,
      30,    0,  232,    2, 0x08 /* Private */,
      31,    0,  233,    2, 0x08 /* Private */,
      32,    0,  234,    2, 0x08 /* Private */,
      33,    0,  235,    2, 0x08 /* Private */,
      34,    0,  236,    2, 0x08 /* Private */,
      35,    0,  237,    2, 0x08 /* Private */,
      36,    0,  238,    2, 0x08 /* Private */,
      37,    0,  239,    2, 0x08 /* Private */,
      38,    1,  240,    2, 0x09 /* Protected */,
      40,    1,  243,    2, 0x09 /* Protected */,

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
    QMetaType::Void, QMetaType::LongLong,   39,
    QMetaType::Void, QMetaType::LongLong,   39,

       0        // eod
};

void tst_QSerialPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QSerialPort *_t = static_cast<tst_QSerialPort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openExisting(); break;
        case 1: _t->openNotExisting_data(); break;
        case 2: _t->openNotExisting(); break;
        case 3: _t->baudRate_data(); break;
        case 4: _t->baudRate(); break;
        case 5: _t->dataBits_data(); break;
        case 6: _t->dataBits(); break;
        case 7: _t->parity_data(); break;
        case 8: _t->parity(); break;
        case 9: _t->stopBits_data(); break;
        case 10: _t->stopBits(); break;
        case 11: _t->flowControl_data(); break;
        case 12: _t->flowControl(); break;
        case 13: _t->rts(); break;
        case 14: _t->dtr(); break;
        case 15: _t->independenceRtsAndDtr(); break;
        case 16: _t->flush(); break;
        case 17: _t->doubleFlush(); break;
        case 18: _t->waitForBytesWritten(); break;
        case 19: _t->waitForReadyReadWithTimeout(); break;
        case 20: _t->waitForReadyReadWithOneByte(); break;
        case 21: _t->waitForReadyReadWithAlphabet(); break;
        case 22: _t->twoStageSynchronousLoopback(); break;
        case 23: _t->synchronousReadWrite(); break;
        case 24: _t->asynchronousWriteByBytesWritten_data(); break;
        case 25: _t->asynchronousWriteByBytesWritten(); break;
        case 26: _t->asynchronousWriteByTimer_data(); break;
        case 27: _t->asynchronousWriteByTimer(); break;
        case 28: _t->asyncReadWithLimitedReadBufferSize(); break;
        case 29: _t->readBufferOverflow(); break;
        case 30: _t->readAfterInputClear(); break;
        case 31: _t->synchronousReadWriteAfterAsynchronousReadWrite(); break;
        case 32: _t->controlBreak(); break;
        case 33: _t->clearAfterOpen(); break;
        case 34: _t->readWriteWithDifferentBaudRate_data(); break;
        case 35: _t->readWriteWithDifferentBaudRate(); break;
        case 36: _t->handleBytesWrittenAndExitLoopSlot((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 37: _t->handleBytesWrittenAndExitLoopSlot2((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject tst_QSerialPort::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QSerialPort.data,
      qt_meta_data_tst_QSerialPort,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QSerialPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QSerialPort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QSerialPort.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QSerialPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 38;
    }
    return _id;
}
struct qt_meta_stringdata_AsyncReader_t {
    QByteArrayData data[3];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AsyncReader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AsyncReader_t qt_meta_stringdata_AsyncReader = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AsyncReader"
QT_MOC_LITERAL(1, 12, 7), // "receive"
QT_MOC_LITERAL(2, 20, 0) // ""

    },
    "AsyncReader\0receive\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AsyncReader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AsyncReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AsyncReader *_t = static_cast<AsyncReader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receive(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AsyncReader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AsyncReader.data,
      qt_meta_data_AsyncReader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AsyncReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AsyncReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AsyncReader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AsyncReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_AsyncWriterByBytesWritten_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AsyncWriterByBytesWritten_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AsyncWriterByBytesWritten_t qt_meta_stringdata_AsyncWriterByBytesWritten = {
    {
QT_MOC_LITERAL(0, 0, 25), // "AsyncWriterByBytesWritten"
QT_MOC_LITERAL(1, 26, 4), // "send"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "AsyncWriterByBytesWritten\0send\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AsyncWriterByBytesWritten[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AsyncWriterByBytesWritten::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AsyncWriterByBytesWritten *_t = static_cast<AsyncWriterByBytesWritten *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AsyncWriterByBytesWritten::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AsyncWriterByBytesWritten.data,
      qt_meta_data_AsyncWriterByBytesWritten,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AsyncWriterByBytesWritten::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AsyncWriterByBytesWritten::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AsyncWriterByBytesWritten.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AsyncWriterByBytesWritten::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_AsyncWriterByTimer_t {
    QByteArrayData data[3];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AsyncWriterByTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AsyncWriterByTimer_t qt_meta_stringdata_AsyncWriterByTimer = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AsyncWriterByTimer"
QT_MOC_LITERAL(1, 19, 4), // "send"
QT_MOC_LITERAL(2, 24, 0) // ""

    },
    "AsyncWriterByTimer\0send\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AsyncWriterByTimer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AsyncWriterByTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AsyncWriterByTimer *_t = static_cast<AsyncWriterByTimer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AsyncWriterByTimer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AsyncWriterByTimer.data,
      qt_meta_data_AsyncWriterByTimer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AsyncWriterByTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AsyncWriterByTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AsyncWriterByTimer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AsyncWriterByTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_AsyncReader2_t {
    QByteArrayData data[3];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AsyncReader2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AsyncReader2_t qt_meta_stringdata_AsyncReader2 = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AsyncReader2"
QT_MOC_LITERAL(1, 13, 7), // "receive"
QT_MOC_LITERAL(2, 21, 0) // ""

    },
    "AsyncReader2\0receive\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AsyncReader2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AsyncReader2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AsyncReader2 *_t = static_cast<AsyncReader2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receive(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AsyncReader2::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AsyncReader2.data,
      qt_meta_data_AsyncReader2,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AsyncReader2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AsyncReader2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AsyncReader2.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AsyncReader2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_MasterTransactor_t {
    QByteArrayData data[5];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MasterTransactor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MasterTransactor_t qt_meta_stringdata_MasterTransactor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MasterTransactor"
QT_MOC_LITERAL(1, 17, 4), // "open"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 22), // "synchronousTransaction"
QT_MOC_LITERAL(4, 46, 11) // "transaction"

    },
    "MasterTransactor\0open\0\0synchronousTransaction\0"
    "transaction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasterTransactor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MasterTransactor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MasterTransactor *_t = static_cast<MasterTransactor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->open(); break;
        case 1: _t->synchronousTransaction(); break;
        case 2: _t->transaction(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MasterTransactor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MasterTransactor.data,
      qt_meta_data_MasterTransactor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MasterTransactor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasterTransactor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MasterTransactor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MasterTransactor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SlaveTransactor_t {
    QByteArrayData data[5];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SlaveTransactor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SlaveTransactor_t qt_meta_stringdata_SlaveTransactor = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SlaveTransactor"
QT_MOC_LITERAL(1, 16, 5), // "ready"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "open"
QT_MOC_LITERAL(4, 28, 11) // "transaction"

    },
    "SlaveTransactor\0ready\0\0open\0transaction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SlaveTransactor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SlaveTransactor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SlaveTransactor *_t = static_cast<SlaveTransactor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ready(); break;
        case 1: _t->open(); break;
        case 2: _t->transaction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SlaveTransactor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlaveTransactor::ready)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SlaveTransactor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SlaveTransactor.data,
      qt_meta_data_SlaveTransactor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SlaveTransactor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SlaveTransactor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SlaveTransactor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SlaveTransactor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void SlaveTransactor::ready()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_BreakReader_t {
    QByteArrayData data[3];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BreakReader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BreakReader_t qt_meta_stringdata_BreakReader = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BreakReader"
QT_MOC_LITERAL(1, 12, 7), // "receive"
QT_MOC_LITERAL(2, 20, 0) // ""

    },
    "BreakReader\0receive\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BreakReader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void BreakReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BreakReader *_t = static_cast<BreakReader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receive(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BreakReader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BreakReader.data,
      qt_meta_data_BreakReader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BreakReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BreakReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BreakReader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BreakReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
