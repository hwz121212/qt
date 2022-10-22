/****************************************************************************
** Meta object code from reading C++ file 'rep_localdatacenter_replica.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rep_localdatacenter_replica.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rep_localdatacenter_replica.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LocalDataCenterReplica_t {
    QByteArrayData data[21];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocalDataCenterReplica_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocalDataCenterReplica_t qt_meta_stringdata_LocalDataCenterReplica = {
    {
QT_MOC_LITERAL(0, 0, 22), // "LocalDataCenterReplica"
QT_MOC_LITERAL(1, 23, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 41, 15), // "LocalDataCenter"
QT_MOC_LITERAL(3, 57, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 80, 40), // "d811753f10a2fa083dd2142282718..."
QT_MOC_LITERAL(5, 121, 12), // "data1Changed"
QT_MOC_LITERAL(6, 134, 0), // ""
QT_MOC_LITERAL(7, 135, 12), // "data2Changed"
QT_MOC_LITERAL(8, 148, 12), // "data3Changed"
QT_MOC_LITERAL(9, 161, 12), // "data4Changed"
QT_MOC_LITERAL(10, 174, 12), // "QVector<int>"
QT_MOC_LITERAL(11, 187, 6), // "callMe"
QT_MOC_LITERAL(12, 194, 3), // "fun"
QT_MOC_LITERAL(13, 198, 9), // "pushData1"
QT_MOC_LITERAL(14, 208, 5), // "data1"
QT_MOC_LITERAL(15, 214, 9), // "pushData2"
QT_MOC_LITERAL(16, 224, 5), // "data2"
QT_MOC_LITERAL(17, 230, 9), // "pushData3"
QT_MOC_LITERAL(18, 240, 5), // "data3"
QT_MOC_LITERAL(19, 246, 9), // "pushData4"
QT_MOC_LITERAL(20, 256, 5) // "data4"

    },
    "LocalDataCenterReplica\0RemoteObject Type\0"
    "LocalDataCenter\0RemoteObject Signature\0"
    "d811753f10a2fa083dd21422827185fe466ab8b4\0"
    "data1Changed\0\0data2Changed\0data3Changed\0"
    "data4Changed\0QVector<int>\0callMe\0fun\0"
    "pushData1\0data1\0pushData2\0data2\0"
    "pushData3\0data3\0pushData4\0data4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocalDataCenterReplica[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       9,   18, // methods
       4,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   63,    6, 0x06 /* Public */,
       7,    1,   66,    6, 0x06 /* Public */,
       8,    1,   69,    6, 0x06 /* Public */,
       9,    1,   72,    6, 0x06 /* Public */,
      11,    1,   75,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   78,    6, 0x0a /* Public */,
      15,    1,   81,    6, 0x0a /* Public */,
      17,    1,   84,    6, 0x0a /* Public */,
      19,    1,   87,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 10,    6,
    QMetaType::Void, 0x80000000 | 10,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, 0x80000000 | 10,   20,

 // properties: name, type, flags
      14, QMetaType::Int, 0x00495001,
      16, QMetaType::Float, 0x00495001,
      18, QMetaType::QString, 0x00495001,
      20, 0x80000000 | 10, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void LocalDataCenterReplica::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LocalDataCenterReplica *_t = static_cast<LocalDataCenterReplica *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->data1Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->data2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->data3Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->data4Changed((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 4: _t->callMe((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 5: _t->pushData1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->pushData2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->pushData3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->pushData4((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (LocalDataCenterReplica::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalDataCenterReplica::data1Changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LocalDataCenterReplica::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalDataCenterReplica::data2Changed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LocalDataCenterReplica::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalDataCenterReplica::data3Changed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (LocalDataCenterReplica::*_t)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalDataCenterReplica::data4Changed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (LocalDataCenterReplica::*_t)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalDataCenterReplica::callMe)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        LocalDataCenterReplica *_t = static_cast<LocalDataCenterReplica *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->data1(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->data2(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->data3(); break;
        case 3: *reinterpret_cast< QVector<int>*>(_v) = _t->data4(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject LocalDataCenterReplica::staticMetaObject = {
    { &QRemoteObjectReplica::staticMetaObject, qt_meta_stringdata_LocalDataCenterReplica.data,
      qt_meta_data_LocalDataCenterReplica,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LocalDataCenterReplica::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocalDataCenterReplica::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LocalDataCenterReplica.stringdata0))
        return static_cast<void*>(this);
    return QRemoteObjectReplica::qt_metacast(_clname);
}

int LocalDataCenterReplica::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRemoteObjectReplica::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LocalDataCenterReplica::data1Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LocalDataCenterReplica::data2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LocalDataCenterReplica::data3Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LocalDataCenterReplica::data4Changed(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LocalDataCenterReplica::callMe(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
