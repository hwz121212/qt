/****************************************************************************
** Meta object code from reading C++ file 'tst_qdesktopwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qdesktopwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qdesktopwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QDesktopWidget_t {
    QByteArrayData data[10];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QDesktopWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QDesktopWidget_t qt_meta_stringdata_tst_QDesktopWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "tst_QDesktopWidget"
QT_MOC_LITERAL(1, 19, 7), // "cleanup"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "numScreens"
QT_MOC_LITERAL(4, 39, 13), // "primaryScreen"
QT_MOC_LITERAL(5, 53, 22), // "screenNumberForQWidget"
QT_MOC_LITERAL(6, 76, 21), // "screenNumberForQPoint"
QT_MOC_LITERAL(7, 98, 17), // "availableGeometry"
QT_MOC_LITERAL(8, 116, 14), // "screenGeometry"
QT_MOC_LITERAL(9, 131, 9) // "topLevels"

    },
    "tst_QDesktopWidget\0cleanup\0\0numScreens\0"
    "primaryScreen\0screenNumberForQWidget\0"
    "screenNumberForQPoint\0availableGeometry\0"
    "screenGeometry\0topLevels"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QDesktopWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
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

void tst_QDesktopWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QDesktopWidget *_t = static_cast<tst_QDesktopWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cleanup(); break;
        case 1: _t->numScreens(); break;
        case 2: _t->primaryScreen(); break;
        case 3: _t->screenNumberForQWidget(); break;
        case 4: _t->screenNumberForQPoint(); break;
        case 5: _t->availableGeometry(); break;
        case 6: _t->screenGeometry(); break;
        case 7: _t->topLevels(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QDesktopWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QDesktopWidget.data,
      qt_meta_data_tst_QDesktopWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QDesktopWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QDesktopWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QDesktopWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QDesktopWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
