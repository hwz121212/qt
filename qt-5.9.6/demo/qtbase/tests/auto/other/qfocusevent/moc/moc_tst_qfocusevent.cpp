/****************************************************************************
** Meta object code from reading C++ file 'tst_qfocusevent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qfocusevent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qfocusevent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QFocusEvent_t {
    QByteArrayData data[12];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QFocusEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QFocusEvent_t qt_meta_stringdata_tst_QFocusEvent = {
    {
QT_MOC_LITERAL(0, 0, 15), // "tst_QFocusEvent"
QT_MOC_LITERAL(1, 16, 12), // "initTestCase"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "cleanupTestCase"
QT_MOC_LITERAL(4, 46, 7), // "cleanup"
QT_MOC_LITERAL(5, 54, 15), // "checkReason_Tab"
QT_MOC_LITERAL(6, 70, 20), // "checkReason_ShiftTab"
QT_MOC_LITERAL(7, 91, 19), // "checkReason_BackTab"
QT_MOC_LITERAL(8, 111, 17), // "checkReason_Popup"
QT_MOC_LITERAL(9, 129, 23), // "checkReason_focusWidget"
QT_MOC_LITERAL(10, 153, 20), // "checkReason_Shortcut"
QT_MOC_LITERAL(11, 174, 24) // "checkReason_ActiveWindow"

    },
    "tst_QFocusEvent\0initTestCase\0\0"
    "cleanupTestCase\0cleanup\0checkReason_Tab\0"
    "checkReason_ShiftTab\0checkReason_BackTab\0"
    "checkReason_Popup\0checkReason_focusWidget\0"
    "checkReason_Shortcut\0checkReason_ActiveWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QFocusEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

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
    QMetaType::Void,

       0        // eod
};

void tst_QFocusEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QFocusEvent *_t = static_cast<tst_QFocusEvent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanupTestCase(); break;
        case 2: _t->cleanup(); break;
        case 3: _t->checkReason_Tab(); break;
        case 4: _t->checkReason_ShiftTab(); break;
        case 5: _t->checkReason_BackTab(); break;
        case 6: _t->checkReason_Popup(); break;
        case 7: _t->checkReason_focusWidget(); break;
        case 8: _t->checkReason_Shortcut(); break;
        case 9: _t->checkReason_ActiveWindow(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QFocusEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QFocusEvent.data,
      qt_meta_data_tst_QFocusEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QFocusEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QFocusEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QFocusEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QFocusEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
