/****************************************************************************
** Meta object code from reading C++ file 'tst_modeltest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_modeltest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_modeltest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_ModelTest_t {
    QByteArrayData data[8];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_ModelTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_ModelTest_t qt_meta_stringdata_tst_ModelTest = {
    {
QT_MOC_LITERAL(0, 0, 13), // "tst_ModelTest"
QT_MOC_LITERAL(1, 14, 15), // "stringListModel"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "treeWidgetModel"
QT_MOC_LITERAL(4, 47, 17), // "standardItemModel"
QT_MOC_LITERAL(5, 65, 22), // "testInsertThroughProxy"
QT_MOC_LITERAL(6, 88, 15), // "moveSourceItems"
QT_MOC_LITERAL(7, 104, 21) // "testResetThroughProxy"

    },
    "tst_ModelTest\0stringListModel\0\0"
    "treeWidgetModel\0standardItemModel\0"
    "testInsertThroughProxy\0moveSourceItems\0"
    "testResetThroughProxy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_ModelTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tst_ModelTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_ModelTest *_t = static_cast<tst_ModelTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stringListModel(); break;
        case 1: _t->treeWidgetModel(); break;
        case 2: _t->standardItemModel(); break;
        case 3: _t->testInsertThroughProxy(); break;
        case 4: _t->moveSourceItems(); break;
        case 5: _t->testResetThroughProxy(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_ModelTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_ModelTest.data,
      qt_meta_data_tst_ModelTest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_ModelTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_ModelTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_ModelTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_ModelTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_AccessibleProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccessibleProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccessibleProxyModel_t qt_meta_stringdata_AccessibleProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 20) // "AccessibleProxyModel"

    },
    "AccessibleProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccessibleProxyModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AccessibleProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject AccessibleProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_AccessibleProxyModel.data,
      qt_meta_data_AccessibleProxyModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AccessibleProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccessibleProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccessibleProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int AccessibleProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ObservingObject_t {
    QByteArrayData data[5];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObservingObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObservingObject_t qt_meta_stringdata_ObservingObject = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ObservingObject"
QT_MOC_LITERAL(1, 16, 15), // "storePersistent"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6), // "parent"
QT_MOC_LITERAL(4, 40, 15) // "checkPersistent"

    },
    "ObservingObject\0storePersistent\0\0"
    "parent\0checkPersistent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObservingObject[] = {

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
       1,    0,   32,    2, 0x0a /* Public */,
       4,    0,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ObservingObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObservingObject *_t = static_cast<ObservingObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->storePersistent((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->storePersistent(); break;
        case 2: _t->checkPersistent(); break;
        default: ;
        }
    }
}

const QMetaObject ObservingObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ObservingObject.data,
      qt_meta_data_ObservingObject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ObservingObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObservingObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ObservingObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ObservingObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
