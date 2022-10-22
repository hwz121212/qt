/****************************************************************************
** Meta object code from reading C++ file 'rep_tcpdatacenter_source.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rep_tcpdatacenter_source.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rep_tcpdatacenter_source.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TcpDataCenterSource_t {
    QByteArrayData data[19];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpDataCenterSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpDataCenterSource_t qt_meta_stringdata_TcpDataCenterSource = {
    {
QT_MOC_LITERAL(0, 0, 19), // "TcpDataCenterSource"
QT_MOC_LITERAL(1, 20, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 38, 13), // "TcpDataCenter"
QT_MOC_LITERAL(3, 52, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 75, 40), // "74c97ce2d11992e333571d1e53f1b..."
QT_MOC_LITERAL(5, 116, 12), // "data1Changed"
QT_MOC_LITERAL(6, 129, 0), // ""
QT_MOC_LITERAL(7, 130, 12), // "data2Changed"
QT_MOC_LITERAL(8, 143, 12), // "data3Changed"
QT_MOC_LITERAL(9, 156, 12), // "data4Changed"
QT_MOC_LITERAL(10, 169, 12), // "QVector<int>"
QT_MOC_LITERAL(11, 182, 9), // "pushData1"
QT_MOC_LITERAL(12, 192, 5), // "data1"
QT_MOC_LITERAL(13, 198, 9), // "pushData2"
QT_MOC_LITERAL(14, 208, 5), // "data2"
QT_MOC_LITERAL(15, 214, 9), // "pushData3"
QT_MOC_LITERAL(16, 224, 5), // "data3"
QT_MOC_LITERAL(17, 230, 9), // "pushData4"
QT_MOC_LITERAL(18, 240, 5) // "data4"

    },
    "TcpDataCenterSource\0RemoteObject Type\0"
    "TcpDataCenter\0RemoteObject Signature\0"
    "74c97ce2d11992e333571d1e53f1b76d2abb6623\0"
    "data1Changed\0\0data2Changed\0data3Changed\0"
    "data4Changed\0QVector<int>\0pushData1\0"
    "data1\0pushData2\0data2\0pushData3\0data3\0"
    "pushData4\0data4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpDataCenterSource[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       8,   18, // methods
       4,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   58,    6, 0x06 /* Public */,
       7,    1,   61,    6, 0x06 /* Public */,
       8,    1,   64,    6, 0x06 /* Public */,
       9,    1,   67,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   70,    6, 0x0a /* Public */,
      13,    1,   73,    6, 0x0a /* Public */,
      15,    1,   76,    6, 0x0a /* Public */,
      17,    1,   79,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 10,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Float,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, 0x80000000 | 10,   18,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00495103,
      14, QMetaType::Float, 0x00495103,
      16, QMetaType::QString, 0x00495103,
      18, 0x80000000 | 10, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void TcpDataCenterSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TcpDataCenterSource *_t = static_cast<TcpDataCenterSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->data1Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->data2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->data3Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->data4Changed((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 4: _t->pushData1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->pushData2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->pushData3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->pushData4((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
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
        case 7:
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
            typedef void (TcpDataCenterSource::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpDataCenterSource::data1Changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TcpDataCenterSource::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpDataCenterSource::data2Changed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TcpDataCenterSource::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpDataCenterSource::data3Changed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TcpDataCenterSource::*_t)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpDataCenterSource::data4Changed)) {
                *result = 3;
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
        TcpDataCenterSource *_t = static_cast<TcpDataCenterSource *>(_o);
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
        TcpDataCenterSource *_t = static_cast<TcpDataCenterSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setData1(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setData2(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setData3(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setData4(*reinterpret_cast< QVector<int>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TcpDataCenterSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TcpDataCenterSource.data,
      qt_meta_data_TcpDataCenterSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TcpDataCenterSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpDataCenterSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TcpDataCenterSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TcpDataCenterSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
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
void TcpDataCenterSource::data1Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TcpDataCenterSource::data2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TcpDataCenterSource::data3Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TcpDataCenterSource::data4Changed(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_TcpDataCenterSimpleSource_t {
    QByteArrayData data[19];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpDataCenterSimpleSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpDataCenterSimpleSource_t qt_meta_stringdata_TcpDataCenterSimpleSource = {
    {
QT_MOC_LITERAL(0, 0, 25), // "TcpDataCenterSimpleSource"
QT_MOC_LITERAL(1, 26, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 44, 13), // "TcpDataCenter"
QT_MOC_LITERAL(3, 58, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 81, 40), // "74c97ce2d11992e333571d1e53f1b..."
QT_MOC_LITERAL(5, 122, 12), // "data1Changed"
QT_MOC_LITERAL(6, 135, 0), // ""
QT_MOC_LITERAL(7, 136, 12), // "data2Changed"
QT_MOC_LITERAL(8, 149, 12), // "data3Changed"
QT_MOC_LITERAL(9, 162, 12), // "data4Changed"
QT_MOC_LITERAL(10, 175, 12), // "QVector<int>"
QT_MOC_LITERAL(11, 188, 9), // "pushData1"
QT_MOC_LITERAL(12, 198, 5), // "data1"
QT_MOC_LITERAL(13, 204, 9), // "pushData2"
QT_MOC_LITERAL(14, 214, 5), // "data2"
QT_MOC_LITERAL(15, 220, 9), // "pushData3"
QT_MOC_LITERAL(16, 230, 5), // "data3"
QT_MOC_LITERAL(17, 236, 9), // "pushData4"
QT_MOC_LITERAL(18, 246, 5) // "data4"

    },
    "TcpDataCenterSimpleSource\0RemoteObject Type\0"
    "TcpDataCenter\0RemoteObject Signature\0"
    "74c97ce2d11992e333571d1e53f1b76d2abb6623\0"
    "data1Changed\0\0data2Changed\0data3Changed\0"
    "data4Changed\0QVector<int>\0pushData1\0"
    "data1\0pushData2\0data2\0pushData3\0data3\0"
    "pushData4\0data4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpDataCenterSimpleSource[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       8,   18, // methods
       4,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   58,    6, 0x06 /* Public */,
       7,    1,   61,    6, 0x06 /* Public */,
       8,    1,   64,    6, 0x06 /* Public */,
       9,    1,   67,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   70,    6, 0x0a /* Public */,
      13,    1,   73,    6, 0x0a /* Public */,
      15,    1,   76,    6, 0x0a /* Public */,
      17,    1,   79,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 10,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Float,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, 0x80000000 | 10,   18,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00495103,
      14, QMetaType::Float, 0x00495103,
      16, QMetaType::QString, 0x00495103,
      18, 0x80000000 | 10, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void TcpDataCenterSimpleSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TcpDataCenterSimpleSource *_t = static_cast<TcpDataCenterSimpleSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->data1Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->data2Changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->data3Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->data4Changed((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 4: _t->pushData1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->pushData2((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->pushData3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->pushData4((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
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
        case 7:
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
            typedef void (TcpDataCenterSimpleSource::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpDataCenterSimpleSource::data1Changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TcpDataCenterSimpleSource::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpDataCenterSimpleSource::data2Changed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TcpDataCenterSimpleSource::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpDataCenterSimpleSource::data3Changed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TcpDataCenterSimpleSource::*_t)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpDataCenterSimpleSource::data4Changed)) {
                *result = 3;
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
        TcpDataCenterSimpleSource *_t = static_cast<TcpDataCenterSimpleSource *>(_o);
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
        TcpDataCenterSimpleSource *_t = static_cast<TcpDataCenterSimpleSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setData1(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setData2(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setData3(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setData4(*reinterpret_cast< QVector<int>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TcpDataCenterSimpleSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TcpDataCenterSimpleSource.data,
      qt_meta_data_TcpDataCenterSimpleSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TcpDataCenterSimpleSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpDataCenterSimpleSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TcpDataCenterSimpleSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TcpDataCenterSimpleSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
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
void TcpDataCenterSimpleSource::data1Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TcpDataCenterSimpleSource::data2Changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TcpDataCenterSimpleSource::data3Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TcpDataCenterSimpleSource::data4Changed(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
