/****************************************************************************
** Meta object code from reading C++ file 'oldstyle-casts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../oldstyle-casts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oldstyle-casts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OldStyleCast_t {
    QByteArrayData data[10];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OldStyleCast_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OldStyleCast_t qt_meta_stringdata_OldStyleCast = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OldStyleCast"
QT_MOC_LITERAL(1, 13, 3), // "foo"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 3), // "bar"
QT_MOC_LITERAL(4, 22, 4), // "int*"
QT_MOC_LITERAL(5, 27, 10), // "const int*"
QT_MOC_LITERAL(6, 38, 13), // "volatile int*"
QT_MOC_LITERAL(7, 52, 19), // "const int*volatile*"
QT_MOC_LITERAL(8, 72, 4), // "slot"
QT_MOC_LITERAL(9, 77, 13) // "QObject*const"

    },
    "OldStyleCast\0foo\0\0bar\0int*\0const int*\0"
    "volatile int*\0const int*volatile*\0"
    "slot\0QObject*const"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OldStyleCast[] = {

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
       3,    5,   30,    2, 0x0a /* Public */,
       8,    2,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int, 0x80000000 | 4, 0x80000000 | 5, 0x80000000 | 6, 0x80000000 | 7,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    2,    2,

       0        // eod
};

void OldStyleCast::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OldStyleCast *_t = static_cast<OldStyleCast *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->foo(); break;
        case 1: { int _r = _t->bar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< const int*(*)>(_a[3])),(*reinterpret_cast< volatile int*(*)>(_a[4])),(*reinterpret_cast< const int*volatile*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->slot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QObject*const(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject OldStyleCast::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OldStyleCast.data,
      qt_meta_data_OldStyleCast,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OldStyleCast::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OldStyleCast::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OldStyleCast.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OldStyleCast::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
