/****************************************************************************
** Meta object code from reading C++ file 'qv4debugger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qv4debugger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qv4debugger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QV4Debugger_t {
    QByteArrayData data[8];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QV4Debugger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QV4Debugger_t qt_meta_stringdata_QV4Debugger = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QV4Debugger"
QT_MOC_LITERAL(1, 12, 14), // "debuggerPaused"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "QV4Debugger*"
QT_MOC_LITERAL(4, 41, 4), // "self"
QT_MOC_LITERAL(5, 46, 24), // "QV4Debugger::PauseReason"
QT_MOC_LITERAL(6, 71, 6), // "reason"
QT_MOC_LITERAL(7, 78, 11) // "scheduleJob"

    },
    "QV4Debugger\0debuggerPaused\0\0QV4Debugger*\0"
    "self\0QV4Debugger::PauseReason\0reason\0"
    "scheduleJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QV4Debugger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       7,    0,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,

       0        // eod
};

void QV4Debugger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QV4Debugger *_t = static_cast<QV4Debugger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->debuggerPaused((*reinterpret_cast< QV4Debugger*(*)>(_a[1])),(*reinterpret_cast< QV4Debugger::PauseReason(*)>(_a[2]))); break;
        case 1: _t->scheduleJob(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QV4Debugger* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QV4Debugger::PauseReason >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QV4Debugger::*_t)(QV4Debugger * , QV4Debugger::PauseReason );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QV4Debugger::debuggerPaused)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QV4Debugger::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QV4Debugger::scheduleJob)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QV4Debugger::staticMetaObject = {
    { &QV4::Debugging::Debugger::staticMetaObject, qt_meta_stringdata_QV4Debugger.data,
      qt_meta_data_QV4Debugger,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QV4Debugger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QV4Debugger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QV4Debugger.stringdata0))
        return static_cast<void*>(this);
    return QV4::Debugging::Debugger::qt_metacast(_clname);
}

int QV4Debugger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QV4::Debugging::Debugger::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QV4Debugger::debuggerPaused(QV4Debugger * _t1, QV4Debugger::PauseReason _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QV4Debugger::scheduleJob()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
