/****************************************************************************
** Meta object code from reading C++ file 'related-metaobjects-in-namespaces.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../related-metaobjects-in-namespaces.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'related-metaobjects-in-namespaces.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QTBUG_2151__A_t {
    QByteArrayData data[3];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTBUG_2151__A_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTBUG_2151__A_t qt_meta_stringdata_QTBUG_2151__A = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QTBUG_2151::A"
QT_MOC_LITERAL(1, 14, 8), // "SomeEnum"
QT_MOC_LITERAL(2, 23, 13) // "SomeEnumValue"

    },
    "QTBUG_2151::A\0SomeEnum\0SomeEnumValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTBUG_2151__A[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    1,   18,

 // enum data: key, value
       2, uint(QTBUG_2151::A::SomeEnumValue),

       0        // eod
};

void QTBUG_2151::A::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QTBUG_2151::A::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QTBUG_2151__A.data,
      qt_meta_data_QTBUG_2151__A,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QTBUG_2151::A::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTBUG_2151::A::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QTBUG_2151__A.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QTBUG_2151::A::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QTBUG_2151__B_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTBUG_2151__B_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTBUG_2151__B_t qt_meta_stringdata_QTBUG_2151__B = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QTBUG_2151::B"
QT_MOC_LITERAL(1, 14, 4), // "blah"
QT_MOC_LITERAL(2, 19, 11) // "A::SomeEnum"

    },
    "QTBUG_2151::B\0blah\0A::SomeEnum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTBUG_2151__B[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095009,

       0        // eod
};

void QTBUG_2151::B::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        B *_t = static_cast<B *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< A::SomeEnum*>(_v) = _t->blah(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

static const QMetaObject * const qt_meta_extradata_QTBUG_2151__B[] = {
        &QTBUG_2151::A::staticMetaObject,
    nullptr
};

const QMetaObject QTBUG_2151::B::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QTBUG_2151__B.data,
      qt_meta_data_QTBUG_2151__B,  qt_static_metacall, qt_meta_extradata_QTBUG_2151__B, nullptr}
};


const QMetaObject *QTBUG_2151::B::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTBUG_2151::B::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QTBUG_2151__B.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QTBUG_2151::B::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
