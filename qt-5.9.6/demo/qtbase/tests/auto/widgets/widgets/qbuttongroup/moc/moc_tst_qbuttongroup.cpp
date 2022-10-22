/****************************************************************************
** Meta object code from reading C++ file 'tst_qbuttongroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qbuttongroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qbuttongroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QButtonGroup_t {
    QByteArrayData data[11];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QButtonGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QButtonGroup_t qt_meta_stringdata_tst_QButtonGroup = {
    {
QT_MOC_LITERAL(0, 0, 16), // "tst_QButtonGroup"
QT_MOC_LITERAL(1, 17, 18), // "arrowKeyNavigation"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 9), // "exclusive"
QT_MOC_LITERAL(4, 47, 20), // "exclusiveWithActions"
QT_MOC_LITERAL(5, 68, 11), // "testSignals"
QT_MOC_LITERAL(6, 80, 13), // "checkedButton"
QT_MOC_LITERAL(7, 94, 10), // "task106609"
QT_MOC_LITERAL(8, 105, 15), // "autoIncrementId"
QT_MOC_LITERAL(9, 121, 45), // "task209485_removeFromGroupInE..."
QT_MOC_LITERAL(10, 167, 40) // "task209485_removeFromGroupInE..."

    },
    "tst_QButtonGroup\0arrowKeyNavigation\0"
    "\0exclusive\0exclusiveWithActions\0"
    "testSignals\0checkedButton\0task106609\0"
    "autoIncrementId\0"
    "task209485_removeFromGroupInEventHandler_data\0"
    "task209485_removeFromGroupInEventHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QButtonGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tst_QButtonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QButtonGroup *_t = static_cast<tst_QButtonGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->arrowKeyNavigation(); break;
        case 1: _t->exclusive(); break;
        case 2: _t->exclusiveWithActions(); break;
        case 3: _t->testSignals(); break;
        case 4: _t->checkedButton(); break;
        case 5: _t->task106609(); break;
        case 6: _t->autoIncrementId(); break;
        case 7: _t->task209485_removeFromGroupInEventHandler_data(); break;
        case 8: _t->task209485_removeFromGroupInEventHandler(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QButtonGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QButtonGroup.data,
      qt_meta_data_tst_QButtonGroup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QButtonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QButtonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QButtonGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QButtonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
struct qt_meta_stringdata_task209485_ButtonDeleter_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_task209485_ButtonDeleter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_task209485_ButtonDeleter_t qt_meta_stringdata_task209485_ButtonDeleter = {
    {
QT_MOC_LITERAL(0, 0, 24), // "task209485_ButtonDeleter"
QT_MOC_LITERAL(1, 25, 13), // "buttonClicked"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "task209485_ButtonDeleter\0buttonClicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_task209485_ButtonDeleter[] = {

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

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void task209485_ButtonDeleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        task209485_ButtonDeleter *_t = static_cast<task209485_ButtonDeleter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject task209485_ButtonDeleter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_task209485_ButtonDeleter.data,
      qt_meta_data_task209485_ButtonDeleter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *task209485_ButtonDeleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *task209485_ButtonDeleter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_task209485_ButtonDeleter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int task209485_ButtonDeleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
