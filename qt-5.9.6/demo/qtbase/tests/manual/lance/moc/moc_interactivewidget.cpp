/****************************************************************************
** Meta object code from reading C++ file 'interactivewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interactivewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interactivewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InteractiveWidget_t {
    QByteArrayData data[10];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InteractiveWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InteractiveWidget_t qt_meta_stringdata_InteractiveWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "InteractiveWidget"
QT_MOC_LITERAL(1, 18, 3), // "run"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "load"
QT_MOC_LITERAL(4, 28, 5), // "fname"
QT_MOC_LITERAL(5, 34, 4), // "save"
QT_MOC_LITERAL(6, 39, 11), // "cmdSelected"
QT_MOC_LITERAL(7, 51, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 68, 4), // "item"
QT_MOC_LITERAL(9, 73, 12) // "enumSelected"

    },
    "InteractiveWidget\0run\0\0load\0fname\0"
    "save\0cmdSelected\0QListWidgetItem*\0"
    "item\0enumSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InteractiveWidget[] = {

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
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       3,    1,   46,    2, 0x0a /* Public */,
       5,    0,   49,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x09 /* Protected */,
       9,    1,   53,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void InteractiveWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InteractiveWidget *_t = static_cast<InteractiveWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->run(); break;
        case 1: _t->load(); break;
        case 2: _t->load((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->save(); break;
        case 4: _t->cmdSelected((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->enumSelected((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject InteractiveWidget::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_InteractiveWidget.data,
      qt_meta_data_InteractiveWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InteractiveWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InteractiveWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InteractiveWidget.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int InteractiveWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
