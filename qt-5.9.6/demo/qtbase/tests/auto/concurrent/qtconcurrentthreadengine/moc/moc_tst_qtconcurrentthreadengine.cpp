/****************************************************************************
** Meta object code from reading C++ file 'tst_qtconcurrentthreadengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qtconcurrentthreadengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qtconcurrentthreadengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QtConcurrentThreadEngine_t {
    QByteArrayData data[12];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QtConcurrentThreadEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QtConcurrentThreadEngine_t qt_meta_stringdata_tst_QtConcurrentThreadEngine = {
    {
QT_MOC_LITERAL(0, 0, 28), // "tst_QtConcurrentThreadEngine"
QT_MOC_LITERAL(1, 29, 11), // "runDirectly"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 6), // "result"
QT_MOC_LITERAL(4, 49, 17), // "runThroughStarter"
QT_MOC_LITERAL(5, 67, 6), // "cancel"
QT_MOC_LITERAL(6, 74, 8), // "throttle"
QT_MOC_LITERAL(7, 83, 11), // "threadCount"
QT_MOC_LITERAL(8, 95, 15), // "multipleResults"
QT_MOC_LITERAL(9, 111, 10), // "stresstest"
QT_MOC_LITERAL(10, 122, 20), // "cancelQueuedSlowUser"
QT_MOC_LITERAL(11, 143, 10) // "exceptions"

    },
    "tst_QtConcurrentThreadEngine\0runDirectly\0"
    "\0result\0runThroughStarter\0cancel\0"
    "throttle\0threadCount\0multipleResults\0"
    "stresstest\0cancelQueuedSlowUser\0"
    "exceptions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QtConcurrentThreadEngine[] = {

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

void tst_QtConcurrentThreadEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QtConcurrentThreadEngine *_t = static_cast<tst_QtConcurrentThreadEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->runDirectly(); break;
        case 1: _t->result(); break;
        case 2: _t->runThroughStarter(); break;
        case 3: _t->cancel(); break;
        case 4: _t->throttle(); break;
        case 5: _t->threadCount(); break;
        case 6: _t->multipleResults(); break;
        case 7: _t->stresstest(); break;
        case 8: _t->cancelQueuedSlowUser(); break;
        case 9: _t->exceptions(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QtConcurrentThreadEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QtConcurrentThreadEngine.data,
      qt_meta_data_tst_QtConcurrentThreadEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QtConcurrentThreadEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QtConcurrentThreadEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QtConcurrentThreadEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QtConcurrentThreadEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
