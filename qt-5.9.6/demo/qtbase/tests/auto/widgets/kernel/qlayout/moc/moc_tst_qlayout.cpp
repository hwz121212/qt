/****************************************************************************
** Meta object code from reading C++ file 'tst_qlayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qlayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QLayout_t {
    QByteArrayData data[14];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QLayout_t qt_meta_stringdata_tst_QLayout = {
    {
QT_MOC_LITERAL(0, 0, 11), // "tst_QLayout"
QT_MOC_LITERAL(1, 12, 7), // "cleanup"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "getSetCheck"
QT_MOC_LITERAL(4, 33, 8), // "geometry"
QT_MOC_LITERAL(5, 42, 12), // "smartMaxSize"
QT_MOC_LITERAL(6, 55, 13), // "setLayoutBugs"
QT_MOC_LITERAL(7, 69, 18), // "setContentsMargins"
QT_MOC_LITERAL(8, 88, 14), // "layoutItemRect"
QT_MOC_LITERAL(9, 103, 17), // "warnIfWrongParent"
QT_MOC_LITERAL(10, 121, 12), // "controlTypes"
QT_MOC_LITERAL(11, 134, 13), // "controlTypes2"
QT_MOC_LITERAL(12, 148, 41), // "adjustSizeShouldMakeSureLayou..."
QT_MOC_LITERAL(13, 190, 24) // "testRetainSizeWhenHidden"

    },
    "tst_QLayout\0cleanup\0\0getSetCheck\0"
    "geometry\0smartMaxSize\0setLayoutBugs\0"
    "setContentsMargins\0layoutItemRect\0"
    "warnIfWrongParent\0controlTypes\0"
    "controlTypes2\0adjustSizeShouldMakeSureLayoutIsActivated\0"
    "testRetainSizeWhenHidden"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QLayout[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tst_QLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QLayout *_t = static_cast<tst_QLayout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cleanup(); break;
        case 1: _t->getSetCheck(); break;
        case 2: _t->geometry(); break;
        case 3: _t->smartMaxSize(); break;
        case 4: _t->setLayoutBugs(); break;
        case 5: _t->setContentsMargins(); break;
        case 6: _t->layoutItemRect(); break;
        case 7: _t->warnIfWrongParent(); break;
        case 8: _t->controlTypes(); break;
        case 9: _t->controlTypes2(); break;
        case 10: _t->adjustSizeShouldMakeSureLayoutIsActivated(); break;
        case 11: _t->testRetainSizeWhenHidden(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QLayout.data,
      qt_meta_data_tst_QLayout,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QLayout.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
