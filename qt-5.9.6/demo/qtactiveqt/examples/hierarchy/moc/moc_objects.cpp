/****************************************************************************
** Meta object code from reading C++ file 'objects.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../objects.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objects.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QParentWidget_t {
    QByteArrayData data[12];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QParentWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QParentWidget_t qt_meta_stringdata_QParentWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QParentWidget"
QT_MOC_LITERAL(1, 14, 7), // "ClassID"
QT_MOC_LITERAL(2, 22, 38), // "{d574a747-8016-46db-a07c-b2b4..."
QT_MOC_LITERAL(3, 61, 11), // "InterfaceID"
QT_MOC_LITERAL(4, 73, 38), // "{4a30719d-d9c2-4659-9d16-6737..."
QT_MOC_LITERAL(5, 112, 8), // "EventsID"
QT_MOC_LITERAL(6, 121, 38), // "{4a30719d-d9c2-4659-9d16-6737..."
QT_MOC_LITERAL(7, 160, 15), // "createSubWidget"
QT_MOC_LITERAL(8, 176, 0), // ""
QT_MOC_LITERAL(9, 177, 4), // "name"
QT_MOC_LITERAL(10, 182, 9), // "subWidget"
QT_MOC_LITERAL(11, 192, 11) // "QSubWidget*"

    },
    "QParentWidget\0ClassID\0"
    "{d574a747-8016-46db-a07c-b2b4854ee75c}\0"
    "InterfaceID\0{4a30719d-d9c2-4659-9d16-67378209f822}\0"
    "EventsID\0{4a30719d-d9c2-4659-9d16-67378209f823}\0"
    "createSubWidget\0\0name\0subWidget\0"
    "QSubWidget*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QParentWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       3,   14, // classinfo
       2,   20, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    6,

 // slots: name, argc, parameters, tag, flags
       7,    1,   30,    8, 0x0a /* Public */,
      10,    1,   33,    8, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    0x80000000 | 11, QMetaType::QString,    9,

       0        // eod
};

void QParentWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QParentWidget *_t = static_cast<QParentWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createSubWidget((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { QSubWidget* _r = _t->subWidget((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSubWidget**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject QParentWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QParentWidget.data,
      qt_meta_data_QParentWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QParentWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QParentWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QParentWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QParentWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QSubWidget_t {
    QByteArrayData data[7];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSubWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSubWidget_t qt_meta_stringdata_QSubWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QSubWidget"
QT_MOC_LITERAL(1, 11, 7), // "ClassID"
QT_MOC_LITERAL(2, 19, 38), // "{850652f4-8f71-4f69-b745-bce2..."
QT_MOC_LITERAL(3, 58, 11), // "InterfaceID"
QT_MOC_LITERAL(4, 70, 38), // "{2d76cc2f-3488-417a-83d6-debf..."
QT_MOC_LITERAL(5, 109, 12), // "ToSuperClass"
QT_MOC_LITERAL(6, 122, 5) // "label"

    },
    "QSubWidget\0ClassID\0"
    "{850652f4-8f71-4f69-b745-bce241ccdc30}\0"
    "InterfaceID\0{2d76cc2f-3488-417a-83d6-debff88b3c3f}\0"
    "ToSuperClass\0label"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSubWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       3,   14, // classinfo
       0,    0, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    0,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00095103,

       0        // eod
};

void QSubWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QSubWidget *_t = static_cast<QSubWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QSubWidget *_t = static_cast<QSubWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLabel(*reinterpret_cast< QString*>(_v)); break;
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

const QMetaObject QSubWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QSubWidget.data,
      qt_meta_data_QSubWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QSubWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSubWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSubWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QSubWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
