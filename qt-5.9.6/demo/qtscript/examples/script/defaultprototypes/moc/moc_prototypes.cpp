/****************************************************************************
** Meta object code from reading C++ file 'prototypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../prototypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prototypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ListWidgetItemPrototype_t {
    QByteArrayData data[4];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ListWidgetItemPrototype_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ListWidgetItemPrototype_t qt_meta_stringdata_ListWidgetItemPrototype = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ListWidgetItemPrototype"
QT_MOC_LITERAL(1, 24, 8), // "toString"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4) // "text"

    },
    "ListWidgetItemPrototype\0toString\0\0"
    "text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListWidgetItemPrototype[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::QString,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095103,

       0        // eod
};

void ListWidgetItemPrototype::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ListWidgetItemPrototype *_t = static_cast<ListWidgetItemPrototype *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ListWidgetItemPrototype *_t = static_cast<ListWidgetItemPrototype *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ListWidgetItemPrototype *_t = static_cast<ListWidgetItemPrototype *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ListWidgetItemPrototype::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ListWidgetItemPrototype.data,
      qt_meta_data_ListWidgetItemPrototype,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ListWidgetItemPrototype::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListWidgetItemPrototype::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ListWidgetItemPrototype.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QScriptable"))
        return static_cast< QScriptable*>(this);
    return QObject::qt_metacast(_clname);
}

int ListWidgetItemPrototype::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_ListWidgetPrototype_t {
    QByteArrayData data[8];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ListWidgetPrototype_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ListWidgetPrototype_t qt_meta_stringdata_ListWidgetPrototype = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ListWidgetPrototype"
QT_MOC_LITERAL(1, 20, 7), // "addItem"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4), // "text"
QT_MOC_LITERAL(4, 34, 8), // "addItems"
QT_MOC_LITERAL(5, 43, 5), // "texts"
QT_MOC_LITERAL(6, 49, 18), // "setBackgroundColor"
QT_MOC_LITERAL(7, 68, 9) // "colorName"

    },
    "ListWidgetPrototype\0addItem\0\0text\0"
    "addItems\0texts\0setBackgroundColor\0"
    "colorName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListWidgetPrototype[] = {

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
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void ListWidgetPrototype::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ListWidgetPrototype *_t = static_cast<ListWidgetPrototype *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->addItems((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->setBackgroundColor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ListWidgetPrototype::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ListWidgetPrototype.data,
      qt_meta_data_ListWidgetPrototype,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ListWidgetPrototype::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListWidgetPrototype::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ListWidgetPrototype.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QScriptable"))
        return static_cast< QScriptable*>(this);
    return QObject::qt_metacast(_clname);
}

int ListWidgetPrototype::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
