/****************************************************************************
** Meta object code from reading C++ file 'tst_qwidgetaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qwidgetaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qwidgetaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QWidgetAction_t {
    QByteArrayData data[12];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QWidgetAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QWidgetAction_t qt_meta_stringdata_tst_QWidgetAction = {
    {
QT_MOC_LITERAL(0, 0, 17), // "tst_QWidgetAction"
QT_MOC_LITERAL(1, 18, 12), // "initTestCase"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "cleanup"
QT_MOC_LITERAL(4, 40, 13), // "defaultWidget"
QT_MOC_LITERAL(5, 54, 16), // "visibilityUpdate"
QT_MOC_LITERAL(6, 71, 12), // "customWidget"
QT_MOC_LITERAL(7, 84, 13), // "keepOwnership"
QT_MOC_LITERAL(8, 98, 10), // "visibility"
QT_MOC_LITERAL(9, 109, 10), // "setEnabled"
QT_MOC_LITERAL(10, 120, 5), // "popup"
QT_MOC_LITERAL(11, 126, 18) // "releaseWidgetCrash"

    },
    "tst_QWidgetAction\0initTestCase\0\0cleanup\0"
    "defaultWidget\0visibilityUpdate\0"
    "customWidget\0keepOwnership\0visibility\0"
    "setEnabled\0popup\0releaseWidgetCrash"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QWidgetAction[] = {

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

void tst_QWidgetAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QWidgetAction *_t = static_cast<tst_QWidgetAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanup(); break;
        case 2: _t->defaultWidget(); break;
        case 3: _t->visibilityUpdate(); break;
        case 4: _t->customWidget(); break;
        case 5: _t->keepOwnership(); break;
        case 6: _t->visibility(); break;
        case 7: _t->setEnabled(); break;
        case 8: _t->popup(); break;
        case 9: _t->releaseWidgetCrash(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QWidgetAction::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QWidgetAction.data,
      qt_meta_data_tst_QWidgetAction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QWidgetAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QWidgetAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QWidgetAction.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QWidgetAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
