/****************************************************************************
** Meta object code from reading C++ file 'pure-virtual-signals.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pure-virtual-signals.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pure-virtual-signals.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PureVirtualSignalsTest_t {
    QByteArrayData data[6];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PureVirtualSignalsTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PureVirtualSignalsTest_t qt_meta_stringdata_PureVirtualSignalsTest = {
    {
QT_MOC_LITERAL(0, 0, 22), // "PureVirtualSignalsTest"
QT_MOC_LITERAL(1, 23, 8), // "mySignal"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "myOtherSignal"
QT_MOC_LITERAL(4, 47, 9), // "mySignal2"
QT_MOC_LITERAL(5, 57, 3) // "foo"

    },
    "PureVirtualSignalsTest\0mySignal\0\0"
    "myOtherSignal\0mySignal2\0foo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PureVirtualSignalsTest[] = {

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
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    1,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void PureVirtualSignalsTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PureVirtualSignalsTest *_t = static_cast<PureVirtualSignalsTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mySignal(); break;
        case 1: _t->myOtherSignal(); break;
        case 2: _t->mySignal2((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PureVirtualSignalsTest::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PureVirtualSignalsTest::mySignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PureVirtualSignalsTest::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PureVirtualSignalsTest::myOtherSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PureVirtualSignalsTest::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PureVirtualSignalsTest::mySignal2)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject PureVirtualSignalsTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PureVirtualSignalsTest.data,
      qt_meta_data_PureVirtualSignalsTest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PureVirtualSignalsTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PureVirtualSignalsTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PureVirtualSignalsTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PureVirtualSignalsTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 1
void PureVirtualSignalsTest::myOtherSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_PureVirtualSignalsImpl_t {
    QByteArrayData data[5];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PureVirtualSignalsImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PureVirtualSignalsImpl_t qt_meta_stringdata_PureVirtualSignalsImpl = {
    {
QT_MOC_LITERAL(0, 0, 22), // "PureVirtualSignalsImpl"
QT_MOC_LITERAL(1, 23, 8), // "mySignal"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "mySignal2"
QT_MOC_LITERAL(4, 43, 3) // "foo"

    },
    "PureVirtualSignalsImpl\0mySignal\0\0"
    "mySignal2\0foo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PureVirtualSignalsImpl[] = {

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
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void PureVirtualSignalsImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PureVirtualSignalsImpl *_t = static_cast<PureVirtualSignalsImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mySignal(); break;
        case 1: _t->mySignal2((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PureVirtualSignalsImpl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PureVirtualSignalsImpl::mySignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PureVirtualSignalsImpl::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PureVirtualSignalsImpl::mySignal2)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject PureVirtualSignalsImpl::staticMetaObject = {
    { &PureVirtualSignalsTest::staticMetaObject, qt_meta_stringdata_PureVirtualSignalsImpl.data,
      qt_meta_data_PureVirtualSignalsImpl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PureVirtualSignalsImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PureVirtualSignalsImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PureVirtualSignalsImpl.stringdata0))
        return static_cast<void*>(this);
    return PureVirtualSignalsTest::qt_metacast(_clname);
}

int PureVirtualSignalsImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PureVirtualSignalsTest::qt_metacall(_c, _id, _a);
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
void PureVirtualSignalsImpl::mySignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PureVirtualSignalsImpl::mySignal2(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
