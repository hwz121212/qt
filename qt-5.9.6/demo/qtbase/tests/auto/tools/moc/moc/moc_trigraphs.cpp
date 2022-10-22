/****************************************************************************
** Meta object code from reading C++ file 'trigraphs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../trigraphs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trigraphs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BBB__Foo_t {
    QByteArrayData data[10];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BBB__Foo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BBB__Foo_t qt_meta_stringdata_BBB__Foo = {
    {
QT_MOC_LITERAL(0, 0, 8), // "BBB::Foo"
QT_MOC_LITERAL(1, 9, 3), // "foo"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 18), // "QList<QList<int> >"
QT_MOC_LITERAL(4, 33, 4), // "foo2"
QT_MOC_LITERAL(5, 38, 3), // "bar"
QT_MOC_LITERAL(6, 42, 21), // "QList< ::AAA::BaseA*>"
QT_MOC_LITERAL(7, 64, 4), // "bar2"
QT_MOC_LITERAL(8, 69, 4), // "bar3"
QT_MOC_LITERAL(9, 74, 27) // "QList<const  ::AAA::BaseA*>"

    },
    "BBB::Foo\0foo\0\0QList<QList<int> >\0foo2\0"
    "bar\0QList< ::AAA::BaseA*>\0bar2\0bar3\0"
    "QList<const  ::AAA::BaseA*>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BBB__Foo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       5,    1,   45,    2, 0x06 /* Public */,
       7,    1,   48,    2, 0x06 /* Public */,
       8,    1,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 9,    2,

       0        // eod
};

void BBB::Foo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Foo *_t = static_cast<Foo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->foo((*reinterpret_cast< QList<QList<int> >(*)>(_a[1]))); break;
        case 1: _t->foo2((*reinterpret_cast< const QList<QList<int> >(*)>(_a[1]))); break;
        case 2: _t->bar((*reinterpret_cast< QList< ::AAA::BaseA*>(*)>(_a[1]))); break;
        case 3: _t->bar2((*reinterpret_cast< const QList< ::AAA::BaseA*>(*)>(_a[1]))); break;
        case 4: _t->bar3((*reinterpret_cast< QList<const  ::AAA::BaseA*>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QList<int> > >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QList<int> > >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Foo::*_t)(QList<QList<int> > );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Foo::foo)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Foo::*_t)(const QList<QList<int> > & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Foo::foo2)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Foo::*_t)(QList< ::AAA::BaseA*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Foo::bar)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Foo::*_t)(const QList< ::AAA::BaseA*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Foo::bar2)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Foo::*_t)(QList< ::AAA::BaseA const*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Foo::bar3)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject BBB::Foo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BBB__Foo.data,
      qt_meta_data_BBB__Foo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BBB::Foo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BBB::Foo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BBB__Foo.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "::AAA::BaseA"))
        return static_cast< ::AAA::BaseA*>(this);
    return QObject::qt_metacast(_clname);
}

int BBB::Foo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void BBB::Foo::foo(QList<QList<int> > _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BBB::Foo::foo2(const QList<QList<int> > & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BBB::Foo::bar(QList< ::AAA::BaseA*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BBB::Foo::bar2(const QList< ::AAA::BaseA*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BBB::Foo::bar3(QList< ::AAA::BaseA const*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
