/****************************************************************************
** Meta object code from reading C++ file 'tst_qobjectrace.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qobjectrace.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qobjectrace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QObjectRace_t {
    QByteArrayData data[5];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QObjectRace_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QObjectRace_t qt_meta_stringdata_tst_QObjectRace = {
    {
QT_MOC_LITERAL(0, 0, 15), // "tst_QObjectRace"
QT_MOC_LITERAL(1, 16, 16), // "moveToThreadRace"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "destroyRace"
QT_MOC_LITERAL(4, 46, 14) // "disconnectRace"

    },
    "tst_QObjectRace\0moveToThreadRace\0\0"
    "destroyRace\0disconnectRace"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QObjectRace[] = {

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

void tst_QObjectRace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QObjectRace *_t = static_cast<tst_QObjectRace *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->moveToThreadRace(); break;
        case 1: _t->destroyRace(); break;
        case 2: _t->disconnectRace(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QObjectRace::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QObjectRace.data,
      qt_meta_data_tst_QObjectRace,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QObjectRace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QObjectRace::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QObjectRace.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QObjectRace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_RaceObject_t {
    QByteArrayData data[5];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RaceObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RaceObject_t qt_meta_stringdata_RaceObject = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RaceObject"
QT_MOC_LITERAL(1, 11, 9), // "theSignal"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "theSlot"
QT_MOC_LITERAL(4, 30, 10) // "destroSlot"

    },
    "RaceObject\0theSignal\0\0theSlot\0destroSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RaceObject[] = {

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
       4,    0,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RaceObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RaceObject *_t = static_cast<RaceObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->theSignal(); break;
        case 1: _t->theSlot(); break;
        case 2: _t->destroSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RaceObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RaceObject::theSignal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RaceObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RaceObject.data,
      qt_meta_data_RaceObject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RaceObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RaceObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RaceObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RaceObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void RaceObject::theSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_RaceThread_t {
    QByteArrayData data[4];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RaceThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RaceThread_t qt_meta_stringdata_RaceThread = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RaceThread"
QT_MOC_LITERAL(1, 11, 9), // "theSignal"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14) // "checkStopWatch"

    },
    "RaceThread\0theSignal\0\0checkStopWatch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RaceThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void RaceThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RaceThread *_t = static_cast<RaceThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->theSignal(); break;
        case 1: _t->checkStopWatch(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RaceThread::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RaceThread::theSignal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RaceThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_RaceThread.data,
      qt_meta_data_RaceThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RaceThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RaceThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RaceThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int RaceThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void RaceThread::theSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_MyObject_t {
    QByteArrayData data[16];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyObject_t qt_meta_stringdata_MyObject = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MyObject"
QT_MOC_LITERAL(1, 9, 7), // "signal1"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 7), // "signal2"
QT_MOC_LITERAL(4, 26, 7), // "signal3"
QT_MOC_LITERAL(5, 34, 7), // "signal4"
QT_MOC_LITERAL(6, 42, 7), // "signal5"
QT_MOC_LITERAL(7, 50, 7), // "signal6"
QT_MOC_LITERAL(8, 58, 7), // "signal7"
QT_MOC_LITERAL(9, 66, 5), // "slot1"
QT_MOC_LITERAL(10, 72, 5), // "slot2"
QT_MOC_LITERAL(11, 78, 5), // "slot3"
QT_MOC_LITERAL(12, 84, 5), // "slot4"
QT_MOC_LITERAL(13, 90, 5), // "slot5"
QT_MOC_LITERAL(14, 96, 5), // "slot6"
QT_MOC_LITERAL(15, 102, 5) // "slot7"

    },
    "MyObject\0signal1\0\0signal2\0signal3\0"
    "signal4\0signal5\0signal6\0signal7\0slot1\0"
    "slot2\0slot3\0slot4\0slot5\0slot6\0slot7"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,
       5,    0,   87,    2, 0x06 /* Public */,
       6,    0,   88,    2, 0x06 /* Public */,
       7,    0,   89,    2, 0x06 /* Public */,
       8,    0,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   91,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x0a /* Public */,
      11,    0,   93,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    0,   95,    2, 0x0a /* Public */,
      14,    0,   96,    2, 0x0a /* Public */,
      15,    0,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MyObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyObject *_t = static_cast<MyObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal1(); break;
        case 1: _t->signal2(); break;
        case 2: _t->signal3(); break;
        case 3: _t->signal4(); break;
        case 4: _t->signal5(); break;
        case 5: _t->signal6(); break;
        case 6: _t->signal7(); break;
        case 7: _t->slot1(); break;
        case 8: _t->slot2(); break;
        case 9: _t->slot3(); break;
        case 10: _t->slot4(); break;
        case 11: _t->slot5(); break;
        case 12: _t->slot6(); break;
        case 13: _t->slot7(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MyObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyObject::signal1)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyObject::signal2)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MyObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyObject::signal3)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MyObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyObject::signal4)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MyObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyObject::signal5)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MyObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyObject::signal6)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MyObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyObject::signal7)) {
                *result = 6;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MyObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyObject.data,
      qt_meta_data_MyObject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MyObject::signal1()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MyObject::signal2()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MyObject::signal3()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MyObject::signal4()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MyObject::signal5()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MyObject::signal6()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MyObject::signal7()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
struct qt_meta_stringdata_DestroyThread_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DestroyThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DestroyThread_t qt_meta_stringdata_DestroyThread = {
    {
QT_MOC_LITERAL(0, 0, 13) // "DestroyThread"

    },
    "DestroyThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DestroyThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DestroyThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject DestroyThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DestroyThread.data,
      qt_meta_data_DestroyThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DestroyThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DestroyThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DestroyThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int DestroyThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DisconnectRaceSenderObject_t {
    QByteArrayData data[3];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DisconnectRaceSenderObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DisconnectRaceSenderObject_t qt_meta_stringdata_DisconnectRaceSenderObject = {
    {
QT_MOC_LITERAL(0, 0, 26), // "DisconnectRaceSenderObject"
QT_MOC_LITERAL(1, 27, 9), // "theSignal"
QT_MOC_LITERAL(2, 37, 0) // ""

    },
    "DisconnectRaceSenderObject\0theSignal\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DisconnectRaceSenderObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void DisconnectRaceSenderObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DisconnectRaceSenderObject *_t = static_cast<DisconnectRaceSenderObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->theSignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DisconnectRaceSenderObject::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DisconnectRaceSenderObject::theSignal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DisconnectRaceSenderObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DisconnectRaceSenderObject.data,
      qt_meta_data_DisconnectRaceSenderObject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DisconnectRaceSenderObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisconnectRaceSenderObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DisconnectRaceSenderObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DisconnectRaceSenderObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void DisconnectRaceSenderObject::theSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_DisconnectRaceThread_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DisconnectRaceThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DisconnectRaceThread_t qt_meta_stringdata_DisconnectRaceThread = {
    {
QT_MOC_LITERAL(0, 0, 20) // "DisconnectRaceThread"

    },
    "DisconnectRaceThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DisconnectRaceThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DisconnectRaceThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject DisconnectRaceThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DisconnectRaceThread.data,
      qt_meta_data_DisconnectRaceThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DisconnectRaceThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisconnectRaceThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DisconnectRaceThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int DisconnectRaceThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DeleteReceiverRaceSenderThread_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeleteReceiverRaceSenderThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeleteReceiverRaceSenderThread_t qt_meta_stringdata_DeleteReceiverRaceSenderThread = {
    {
QT_MOC_LITERAL(0, 0, 30) // "DeleteReceiverRaceSenderThread"

    },
    "DeleteReceiverRaceSenderThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeleteReceiverRaceSenderThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DeleteReceiverRaceSenderThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject DeleteReceiverRaceSenderThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DeleteReceiverRaceSenderThread.data,
      qt_meta_data_DeleteReceiverRaceSenderThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DeleteReceiverRaceSenderThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeleteReceiverRaceSenderThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeleteReceiverRaceSenderThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int DeleteReceiverRaceSenderThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DeleteReceiverRaceReceiver_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeleteReceiverRaceReceiver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeleteReceiverRaceReceiver_t qt_meta_stringdata_DeleteReceiverRaceReceiver = {
    {
QT_MOC_LITERAL(0, 0, 26) // "DeleteReceiverRaceReceiver"

    },
    "DeleteReceiverRaceReceiver"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeleteReceiverRaceReceiver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DeleteReceiverRaceReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject DeleteReceiverRaceReceiver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DeleteReceiverRaceReceiver.data,
      qt_meta_data_DeleteReceiverRaceReceiver,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DeleteReceiverRaceReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeleteReceiverRaceReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeleteReceiverRaceReceiver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DeleteReceiverRaceReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DeleteReceiverRaceReceiverThread_t {
    QByteArrayData data[1];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeleteReceiverRaceReceiverThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeleteReceiverRaceReceiverThread_t qt_meta_stringdata_DeleteReceiverRaceReceiverThread = {
    {
QT_MOC_LITERAL(0, 0, 32) // "DeleteReceiverRaceReceiverThread"

    },
    "DeleteReceiverRaceReceiverThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeleteReceiverRaceReceiverThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DeleteReceiverRaceReceiverThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject DeleteReceiverRaceReceiverThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DeleteReceiverRaceReceiverThread.data,
      qt_meta_data_DeleteReceiverRaceReceiverThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DeleteReceiverRaceReceiverThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeleteReceiverRaceReceiverThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeleteReceiverRaceReceiverThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int DeleteReceiverRaceReceiverThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
