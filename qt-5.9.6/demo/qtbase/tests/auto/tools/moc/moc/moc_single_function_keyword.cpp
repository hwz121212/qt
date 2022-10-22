/****************************************************************************
** Meta object code from reading C++ file 'single_function_keyword.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../single_function_keyword.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'single_function_keyword.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SingleFunctionKeywordBeforeReturnType_t {
    QByteArrayData data[4];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SingleFunctionKeywordBeforeReturnType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SingleFunctionKeywordBeforeReturnType_t qt_meta_stringdata_SingleFunctionKeywordBeforeReturnType = {
    {
QT_MOC_LITERAL(0, 0, 37), // "SingleFunctionKeywordBeforeRe..."
QT_MOC_LITERAL(1, 38, 8), // "mySignal"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 6) // "mySlot"

    },
    "SingleFunctionKeywordBeforeReturnType\0"
    "mySignal\0\0mySlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SingleFunctionKeywordBeforeReturnType[] = {

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
       3,    0,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SingleFunctionKeywordBeforeReturnType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SingleFunctionKeywordBeforeReturnType *_t = static_cast<SingleFunctionKeywordBeforeReturnType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mySignal(); break;
        case 1: _t->mySlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SingleFunctionKeywordBeforeReturnType::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SingleFunctionKeywordBeforeReturnType::mySignal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SingleFunctionKeywordBeforeReturnType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SingleFunctionKeywordBeforeReturnType.data,
      qt_meta_data_SingleFunctionKeywordBeforeReturnType,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SingleFunctionKeywordBeforeReturnType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SingleFunctionKeywordBeforeReturnType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SingleFunctionKeywordBeforeReturnType.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SingleFunctionKeywordBeforeReturnType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void SingleFunctionKeywordBeforeReturnType::mySignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_SingleFunctionKeywordBeforeInline_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SingleFunctionKeywordBeforeInline_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SingleFunctionKeywordBeforeInline_t qt_meta_stringdata_SingleFunctionKeywordBeforeInline = {
    {
QT_MOC_LITERAL(0, 0, 33), // "SingleFunctionKeywordBeforeIn..."
QT_MOC_LITERAL(1, 34, 8), // "mySignal"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 6) // "mySlot"

    },
    "SingleFunctionKeywordBeforeInline\0"
    "mySignal\0\0mySlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SingleFunctionKeywordBeforeInline[] = {

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
       3,    0,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SingleFunctionKeywordBeforeInline::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SingleFunctionKeywordBeforeInline *_t = static_cast<SingleFunctionKeywordBeforeInline *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mySignal(); break;
        case 1: _t->mySlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SingleFunctionKeywordBeforeInline::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SingleFunctionKeywordBeforeInline::mySignal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SingleFunctionKeywordBeforeInline::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SingleFunctionKeywordBeforeInline.data,
      qt_meta_data_SingleFunctionKeywordBeforeInline,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SingleFunctionKeywordBeforeInline::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SingleFunctionKeywordBeforeInline::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SingleFunctionKeywordBeforeInline.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SingleFunctionKeywordBeforeInline::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void SingleFunctionKeywordBeforeInline::mySignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_SingleFunctionKeywordAfterInline_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SingleFunctionKeywordAfterInline_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SingleFunctionKeywordAfterInline_t qt_meta_stringdata_SingleFunctionKeywordAfterInline = {
    {
QT_MOC_LITERAL(0, 0, 32), // "SingleFunctionKeywordAfterInline"
QT_MOC_LITERAL(1, 33, 8), // "mySignal"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 6) // "mySlot"

    },
    "SingleFunctionKeywordAfterInline\0"
    "mySignal\0\0mySlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SingleFunctionKeywordAfterInline[] = {

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
       3,    0,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SingleFunctionKeywordAfterInline::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SingleFunctionKeywordAfterInline *_t = static_cast<SingleFunctionKeywordAfterInline *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mySignal(); break;
        case 1: _t->mySlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SingleFunctionKeywordAfterInline::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SingleFunctionKeywordAfterInline::mySignal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SingleFunctionKeywordAfterInline::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SingleFunctionKeywordAfterInline.data,
      qt_meta_data_SingleFunctionKeywordAfterInline,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SingleFunctionKeywordAfterInline::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SingleFunctionKeywordAfterInline::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SingleFunctionKeywordAfterInline.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SingleFunctionKeywordAfterInline::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void SingleFunctionKeywordAfterInline::mySignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
