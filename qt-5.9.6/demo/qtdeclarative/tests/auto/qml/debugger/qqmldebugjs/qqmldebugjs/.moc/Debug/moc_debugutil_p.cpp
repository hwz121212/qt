/****************************************************************************
** Meta object code from reading C++ file 'debugutil_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../shared/debugutil_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'debugutil_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlDebugTestClient_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlDebugTestClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlDebugTestClient_t qt_meta_stringdata_QQmlDebugTestClient = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQmlDebugTestClient"
QT_MOC_LITERAL(1, 20, 15), // "stateHasChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13) // "serverMessage"

    },
    "QQmlDebugTestClient\0stateHasChanged\0"
    "\0serverMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlDebugTestClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    2,

       0        // eod
};

void QQmlDebugTestClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlDebugTestClient *_t = static_cast<QQmlDebugTestClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateHasChanged(); break;
        case 1: _t->serverMessage((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQmlDebugTestClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlDebugTestClient::stateHasChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQmlDebugTestClient::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlDebugTestClient::serverMessage)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QQmlDebugTestClient::staticMetaObject = {
    { &QQmlDebugClient::staticMetaObject, qt_meta_stringdata_QQmlDebugTestClient.data,
      qt_meta_data_QQmlDebugTestClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlDebugTestClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlDebugTestClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlDebugTestClient.stringdata0))
        return static_cast<void*>(this);
    return QQmlDebugClient::qt_metacast(_clname);
}

int QQmlDebugTestClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQmlDebugClient::qt_metacall(_c, _id, _a);
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
void QQmlDebugTestClient::stateHasChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQmlDebugTestClient::serverMessage(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QQmlDebugProcess_t {
    QByteArrayData data[8];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlDebugProcess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlDebugProcess_t qt_meta_stringdata_QQmlDebugProcess = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQmlDebugProcess"
QT_MOC_LITERAL(1, 17, 23), // "readyReadStandardOutput"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 7), // "timeout"
QT_MOC_LITERAL(4, 50, 16), // "processAppOutput"
QT_MOC_LITERAL(5, 67, 12), // "processError"
QT_MOC_LITERAL(6, 80, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(7, 103, 5) // "error"

    },
    "QQmlDebugProcess\0readyReadStandardOutput\0"
    "\0timeout\0processAppOutput\0processError\0"
    "QProcess::ProcessError\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlDebugProcess[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void QQmlDebugProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlDebugProcess *_t = static_cast<QQmlDebugProcess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyReadStandardOutput(); break;
        case 1: _t->timeout(); break;
        case 2: _t->processAppOutput(); break;
        case 3: _t->processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQmlDebugProcess::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlDebugProcess::readyReadStandardOutput)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QQmlDebugProcess::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQmlDebugProcess.data,
      qt_meta_data_QQmlDebugProcess,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlDebugProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlDebugProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlDebugProcess.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQmlDebugProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QQmlDebugProcess::readyReadStandardOutput()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QQmlInspectorResultRecipient_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlInspectorResultRecipient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlInspectorResultRecipient_t qt_meta_stringdata_QQmlInspectorResultRecipient = {
    {
QT_MOC_LITERAL(0, 0, 28) // "QQmlInspectorResultRecipient"

    },
    "QQmlInspectorResultRecipient"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlInspectorResultRecipient[] = {

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

void QQmlInspectorResultRecipient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQmlInspectorResultRecipient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQmlInspectorResultRecipient.data,
      qt_meta_data_QQmlInspectorResultRecipient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlInspectorResultRecipient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlInspectorResultRecipient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlInspectorResultRecipient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQmlInspectorResultRecipient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
