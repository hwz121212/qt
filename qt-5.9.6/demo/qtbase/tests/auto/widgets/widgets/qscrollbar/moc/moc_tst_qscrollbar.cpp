/****************************************************************************
** Meta object code from reading C++ file 'tst_qscrollbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qscrollbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qscrollbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QScrollBar_t {
    QByteArrayData data[6];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QScrollBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QScrollBar_t qt_meta_stringdata_tst_QScrollBar = {
    {
QT_MOC_LITERAL(0, 0, 14), // "tst_QScrollBar"
QT_MOC_LITERAL(1, 15, 16), // "scrollSingleStep"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "task_209492"
QT_MOC_LITERAL(4, 45, 11), // "QTBUG_27308"
QT_MOC_LITERAL(5, 57, 11) // "QTBUG_42871"

    },
    "tst_QScrollBar\0scrollSingleStep\0\0"
    "task_209492\0QTBUG_27308\0QTBUG_42871"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QScrollBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tst_QScrollBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QScrollBar *_t = static_cast<tst_QScrollBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scrollSingleStep(); break;
        case 1: _t->task_209492(); break;
        case 2: _t->QTBUG_27308(); break;
        case 3: _t->QTBUG_42871(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QScrollBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QScrollBar.data,
      qt_meta_data_tst_QScrollBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QScrollBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QScrollBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QScrollBar.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QScrollBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_SingleStepTestScrollBar_t {
    QByteArrayData data[3];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SingleStepTestScrollBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SingleStepTestScrollBar_t qt_meta_stringdata_SingleStepTestScrollBar = {
    {
QT_MOC_LITERAL(0, 0, 23), // "SingleStepTestScrollBar"
QT_MOC_LITERAL(1, 24, 11), // "hideAndShow"
QT_MOC_LITERAL(2, 36, 0) // ""

    },
    "SingleStepTestScrollBar\0hideAndShow\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SingleStepTestScrollBar[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SingleStepTestScrollBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SingleStepTestScrollBar *_t = static_cast<SingleStepTestScrollBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hideAndShow(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SingleStepTestScrollBar::staticMetaObject = {
    { &QScrollBar::staticMetaObject, qt_meta_stringdata_SingleStepTestScrollBar.data,
      qt_meta_data_SingleStepTestScrollBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SingleStepTestScrollBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SingleStepTestScrollBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SingleStepTestScrollBar.stringdata0))
        return static_cast<void*>(this);
    return QScrollBar::qt_metacast(_clname);
}

int SingleStepTestScrollBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollBar::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QTBUG_42871_Handler_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTBUG_42871_Handler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTBUG_42871_Handler_t qt_meta_stringdata_QTBUG_42871_Handler = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QTBUG_42871_Handler"
QT_MOC_LITERAL(1, 20, 12), // "valueUpdated"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "QTBUG_42871_Handler\0valueUpdated\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTBUG_42871_Handler[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void QTBUG_42871_Handler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QTBUG_42871_Handler *_t = static_cast<QTBUG_42871_Handler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QTBUG_42871_Handler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QTBUG_42871_Handler.data,
      qt_meta_data_QTBUG_42871_Handler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QTBUG_42871_Handler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTBUG_42871_Handler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QTBUG_42871_Handler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QTBUG_42871_Handler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
