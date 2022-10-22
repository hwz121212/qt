/****************************************************************************
** Meta object code from reading C++ file 'tst_qgraphicsitemanimation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qgraphicsitemanimation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qgraphicsitemanimation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QGraphicsItemAnimation_t {
    QByteArrayData data[8];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QGraphicsItemAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QGraphicsItemAnimation_t qt_meta_stringdata_tst_QGraphicsItemAnimation = {
    {
QT_MOC_LITERAL(0, 0, 26), // "tst_QGraphicsItemAnimation"
QT_MOC_LITERAL(1, 27, 12), // "construction"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 10), // "linearMove"
QT_MOC_LITERAL(4, 52, 14), // "linearRotation"
QT_MOC_LITERAL(5, 67, 18), // "checkReturnedLists"
QT_MOC_LITERAL(6, 86, 21), // "overwriteValueForStep"
QT_MOC_LITERAL(7, 108, 11) // "setTimeLine"

    },
    "tst_QGraphicsItemAnimation\0construction\0"
    "\0linearMove\0linearRotation\0"
    "checkReturnedLists\0overwriteValueForStep\0"
    "setTimeLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QGraphicsItemAnimation[] = {

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

void tst_QGraphicsItemAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QGraphicsItemAnimation *_t = static_cast<tst_QGraphicsItemAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->construction(); break;
        case 1: _t->linearMove(); break;
        case 2: _t->linearRotation(); break;
        case 3: _t->checkReturnedLists(); break;
        case 4: _t->overwriteValueForStep(); break;
        case 5: _t->setTimeLine(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QGraphicsItemAnimation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QGraphicsItemAnimation.data,
      qt_meta_data_tst_QGraphicsItemAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QGraphicsItemAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QGraphicsItemAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QGraphicsItemAnimation.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QGraphicsItemAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
