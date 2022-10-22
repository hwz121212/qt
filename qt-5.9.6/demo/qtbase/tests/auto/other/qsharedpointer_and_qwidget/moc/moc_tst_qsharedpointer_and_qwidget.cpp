/****************************************************************************
** Meta object code from reading C++ file 'tst_qsharedpointer_and_qwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qsharedpointer_and_qwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qsharedpointer_and_qwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QSharedPointer_and_QWidget_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QSharedPointer_and_QWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QSharedPointer_and_QWidget_t qt_meta_stringdata_tst_QSharedPointer_and_QWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "tst_QSharedPointer_and_QWidget"
QT_MOC_LITERAL(1, 31, 19), // "weak_externalDelete"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 17), // "weak_parentDelete"
QT_MOC_LITERAL(4, 70, 27), // "weak_parentDelete_setParent"
QT_MOC_LITERAL(5, 98, 11), // "strong_weak"
QT_MOC_LITERAL(6, 110, 22), // "strong_sharedptrDelete"
QT_MOC_LITERAL(7, 133, 7) // "cleanup"

    },
    "tst_QSharedPointer_and_QWidget\0"
    "weak_externalDelete\0\0weak_parentDelete\0"
    "weak_parentDelete_setParent\0strong_weak\0"
    "strong_sharedptrDelete\0cleanup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QSharedPointer_and_QWidget[] = {

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
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tst_QSharedPointer_and_QWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QSharedPointer_and_QWidget *_t = static_cast<tst_QSharedPointer_and_QWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->weak_externalDelete(); break;
        case 1: _t->weak_parentDelete(); break;
        case 2: _t->weak_parentDelete_setParent(); break;
        case 3: _t->strong_weak(); break;
        case 4: _t->strong_sharedptrDelete(); break;
        case 5: _t->cleanup(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QSharedPointer_and_QWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QSharedPointer_and_QWidget.data,
      qt_meta_data_tst_QSharedPointer_and_QWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QSharedPointer_and_QWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QSharedPointer_and_QWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QSharedPointer_and_QWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QSharedPointer_and_QWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
