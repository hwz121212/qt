/****************************************************************************
** Meta object code from reading C++ file 'qinvokable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qinvokable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qinvokable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InvokableBeforeReturnType_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InvokableBeforeReturnType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InvokableBeforeReturnType_t qt_meta_stringdata_InvokableBeforeReturnType = {
    {
QT_MOC_LITERAL(0, 0, 25), // "InvokableBeforeReturnType"
QT_MOC_LITERAL(1, 26, 3), // "foo"
QT_MOC_LITERAL(2, 30, 11), // "const char*"
QT_MOC_LITERAL(3, 42, 0) // ""

    },
    "InvokableBeforeReturnType\0foo\0const char*\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InvokableBeforeReturnType[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2,

       0        // eod
};

void InvokableBeforeReturnType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InvokableBeforeReturnType *_t = static_cast<InvokableBeforeReturnType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { const char* _r = _t->foo();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject InvokableBeforeReturnType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InvokableBeforeReturnType.data,
      qt_meta_data_InvokableBeforeReturnType,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InvokableBeforeReturnType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InvokableBeforeReturnType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InvokableBeforeReturnType.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int InvokableBeforeReturnType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_InvokableBeforeInline_t {
    QByteArrayData data[4];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InvokableBeforeInline_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InvokableBeforeInline_t qt_meta_stringdata_InvokableBeforeInline = {
    {
QT_MOC_LITERAL(0, 0, 21), // "InvokableBeforeInline"
QT_MOC_LITERAL(1, 22, 3), // "foo"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3) // "bar"

    },
    "InvokableBeforeInline\0foo\0\0bar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InvokableBeforeInline[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x02 /* Public */,
       3,    0,   25,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InvokableBeforeInline::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InvokableBeforeInline *_t = static_cast<InvokableBeforeInline *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->foo(); break;
        case 1: _t->bar(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject InvokableBeforeInline::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InvokableBeforeInline.data,
      qt_meta_data_InvokableBeforeInline,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InvokableBeforeInline::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InvokableBeforeInline::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InvokableBeforeInline.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int InvokableBeforeInline::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
