/****************************************************************************
** Meta object code from reading C++ file 'namespaced-flags.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../namespaced-flags.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'namespaced-flags.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Foo__Bar_t {
    QByteArrayData data[5];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Foo__Bar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Foo__Bar_t qt_meta_stringdata_Foo__Bar = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Foo::Bar"
QT_MOC_LITERAL(1, 9, 5), // "flags"
QT_MOC_LITERAL(2, 15, 5), // "Flags"
QT_MOC_LITERAL(3, 21, 4), // "Read"
QT_MOC_LITERAL(4, 26, 5) // "Write"

    },
    "Foo::Bar\0flags\0Flags\0Read\0Write"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Foo__Bar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       1,   17, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,

 // enums: name, flags, count, data
       2, 0x1,    2,   21,

 // enum data: key, value
       3, uint(Foo::Bar::Read),
       4, uint(Foo::Bar::Write),

       0        // eod
};

void Foo::Bar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        Bar *_t = static_cast<Bar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = QFlag(_t->flags()); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Bar *_t = static_cast<Bar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlags(QFlag(*reinterpret_cast<int*>(_v))); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Foo::Bar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Foo__Bar.data,
      qt_meta_data_Foo__Bar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Foo::Bar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Foo::Bar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Foo__Bar.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Foo::Bar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_Foo__Baz_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Foo__Baz_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Foo__Baz_t qt_meta_stringdata_Foo__Baz = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Foo::Baz"
QT_MOC_LITERAL(1, 9, 5), // "flags"
QT_MOC_LITERAL(2, 15, 15), // "Foo::Bar::Flags"
QT_MOC_LITERAL(3, 31, 9), // "flagsList"
QT_MOC_LITERAL(4, 41, 22) // "QList<Foo::Bar::Flags>"

    },
    "Foo::Baz\0flags\0Foo::Bar::Flags\0flagsList\0"
    "QList<Foo::Bar::Flags>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Foo__Baz[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,
       3, 0x80000000 | 4, 0x0009510b,

       0        // eod
};

void Foo::Baz::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        Baz *_t = static_cast<Baz *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Foo::Bar::Flags*>(_v) = _t->flags(); break;
        case 1: *reinterpret_cast< QList<Foo::Bar::Flags>*>(_v) = _t->flagsList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Baz *_t = static_cast<Baz *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlags(*reinterpret_cast< Foo::Bar::Flags*>(_v)); break;
        case 1: _t->setFlagsList(*reinterpret_cast< QList<Foo::Bar::Flags>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

static const QMetaObject * const qt_meta_extradata_Foo__Baz[] = {
        &Foo::Bar::staticMetaObject,
    nullptr
};

const QMetaObject Foo::Baz::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Foo__Baz.data,
      qt_meta_data_Foo__Baz,  qt_static_metacall, qt_meta_extradata_Foo__Baz, nullptr}
};


const QMetaObject *Foo::Baz::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Foo::Baz::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Foo__Baz.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Foo::Baz::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
