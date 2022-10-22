/****************************************************************************
** Meta object code from reading C++ file 'tst_qstatusbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qstatusbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qstatusbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QStatusBar_t {
    QByteArrayData data[13];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QStatusBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QStatusBar_t qt_meta_stringdata_tst_QStatusBar = {
    {
QT_MOC_LITERAL(0, 0, 14), // "tst_QStatusBar"
QT_MOC_LITERAL(1, 15, 14), // "messageChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "init"
QT_MOC_LITERAL(4, 36, 7), // "cleanup"
QT_MOC_LITERAL(5, 44, 11), // "tempMessage"
QT_MOC_LITERAL(6, 56, 12), // "insertWidget"
QT_MOC_LITERAL(7, 69, 21), // "insertPermanentWidget"
QT_MOC_LITERAL(8, 91, 18), // "setSizeGripEnabled"
QT_MOC_LITERAL(9, 110, 23), // "task194017_hiddenWidget"
QT_MOC_LITERAL(10, 134, 33), // "QTBUG4334_hiddenOnMaximizedWi..."
QT_MOC_LITERAL(11, 168, 21), // "QTBUG25492_msgtimeout"
QT_MOC_LITERAL(12, 190, 20) // "messageChangedSignal"

    },
    "tst_QStatusBar\0messageChanged\0\0init\0"
    "cleanup\0tempMessage\0insertWidget\0"
    "insertPermanentWidget\0setSizeGripEnabled\0"
    "task194017_hiddenWidget\0"
    "QTBUG4334_hiddenOnMaximizedWindow\0"
    "QTBUG25492_msgtimeout\0messageChangedSignal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QStatusBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x09 /* Protected */,
       3,    0,   72,    2, 0x08 /* Private */,
       4,    0,   73,    2, 0x08 /* Private */,
       5,    0,   74,    2, 0x08 /* Private */,
       6,    0,   75,    2, 0x08 /* Private */,
       7,    0,   76,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    0,   79,    2, 0x08 /* Private */,
      11,    0,   80,    2, 0x08 /* Private */,
      12,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
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

void tst_QStatusBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QStatusBar *_t = static_cast<tst_QStatusBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->init(); break;
        case 2: _t->cleanup(); break;
        case 3: _t->tempMessage(); break;
        case 4: _t->insertWidget(); break;
        case 5: _t->insertPermanentWidget(); break;
        case 6: _t->setSizeGripEnabled(); break;
        case 7: _t->task194017_hiddenWidget(); break;
        case 8: _t->QTBUG4334_hiddenOnMaximizedWindow(); break;
        case 9: _t->QTBUG25492_msgtimeout(); break;
        case 10: _t->messageChangedSignal(); break;
        default: ;
        }
    }
}

const QMetaObject tst_QStatusBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QStatusBar.data,
      qt_meta_data_tst_QStatusBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QStatusBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QStatusBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QStatusBar.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QStatusBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
