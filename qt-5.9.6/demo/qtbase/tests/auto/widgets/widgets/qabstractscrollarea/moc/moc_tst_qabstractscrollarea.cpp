/****************************************************************************
** Meta object code from reading C++ file 'tst_qabstractscrollarea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qabstractscrollarea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qabstractscrollarea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QAbstractScrollArea_t {
    QByteArrayData data[11];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QAbstractScrollArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QAbstractScrollArea_t qt_meta_stringdata_tst_QAbstractScrollArea = {
    {
QT_MOC_LITERAL(0, 0, 23), // "tst_QAbstractScrollArea"
QT_MOC_LITERAL(1, 24, 16), // "scrollBarWidgets"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 13), // "setScrollBars"
QT_MOC_LITERAL(4, 56, 14), // "setScrollBars2"
QT_MOC_LITERAL(5, 71, 12), // "objectNaming"
QT_MOC_LITERAL(6, 84, 17), // "patternBackground"
QT_MOC_LITERAL(7, 102, 13), // "viewportCrash"
QT_MOC_LITERAL(8, 116, 31), // "task214488_layoutDirection_data"
QT_MOC_LITERAL(9, 148, 26), // "task214488_layoutDirection"
QT_MOC_LITERAL(10, 175, 7) // "margins"

    },
    "tst_QAbstractScrollArea\0scrollBarWidgets\0"
    "\0setScrollBars\0setScrollBars2\0"
    "objectNaming\0patternBackground\0"
    "viewportCrash\0task214488_layoutDirection_data\0"
    "task214488_layoutDirection\0margins"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QAbstractScrollArea[] = {

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

void tst_QAbstractScrollArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QAbstractScrollArea *_t = static_cast<tst_QAbstractScrollArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scrollBarWidgets(); break;
        case 1: _t->setScrollBars(); break;
        case 2: _t->setScrollBars2(); break;
        case 3: _t->objectNaming(); break;
        case 4: _t->patternBackground(); break;
        case 5: _t->viewportCrash(); break;
        case 6: _t->task214488_layoutDirection_data(); break;
        case 7: _t->task214488_layoutDirection(); break;
        case 8: _t->margins(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QAbstractScrollArea::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QAbstractScrollArea.data,
      qt_meta_data_tst_QAbstractScrollArea,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QAbstractScrollArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QAbstractScrollArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QAbstractScrollArea.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QAbstractScrollArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
