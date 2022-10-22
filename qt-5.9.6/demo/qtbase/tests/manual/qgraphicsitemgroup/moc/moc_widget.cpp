/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[13];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 22), // "on_rotate_valueChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "value"
QT_MOC_LITERAL(4, 37, 21), // "on_scale_valueChanged"
QT_MOC_LITERAL(5, 59, 26), // "on_rotateItem_valueChanged"
QT_MOC_LITERAL(6, 86, 25), // "on_scaleItem_valueChanged"
QT_MOC_LITERAL(7, 112, 16), // "on_group_clicked"
QT_MOC_LITERAL(8, 129, 20), // "on_dismantle_clicked"
QT_MOC_LITERAL(9, 150, 16), // "on_merge_clicked"
QT_MOC_LITERAL(10, 167, 23), // "onSceneSelectionChanged"
QT_MOC_LITERAL(11, 191, 18), // "on_ungroup_clicked"
QT_MOC_LITERAL(12, 210, 28) // "on_buttonGroup_buttonClicked"

    },
    "Widget\0on_rotate_valueChanged\0\0value\0"
    "on_scale_valueChanged\0on_rotateItem_valueChanged\0"
    "on_scaleItem_valueChanged\0on_group_clicked\0"
    "on_dismantle_clicked\0on_merge_clicked\0"
    "onSceneSelectionChanged\0on_ungroup_clicked\0"
    "on_buttonGroup_buttonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

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
       1,    1,   64,    2, 0x09 /* Protected */,
       4,    1,   67,    2, 0x09 /* Protected */,
       5,    1,   70,    2, 0x09 /* Protected */,
       6,    1,   73,    2, 0x09 /* Protected */,
       7,    0,   76,    2, 0x09 /* Protected */,
       8,    0,   77,    2, 0x09 /* Protected */,
       9,    0,   78,    2, 0x09 /* Protected */,
      10,    0,   79,    2, 0x09 /* Protected */,
      11,    0,   80,    2, 0x09 /* Protected */,
      12,    0,   81,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_rotate_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_scale_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_rotateItem_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_scaleItem_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_group_clicked(); break;
        case 5: _t->on_dismantle_clicked(); break;
        case 6: _t->on_merge_clicked(); break;
        case 7: _t->onSceneSelectionChanged(); break;
        case 8: _t->on_ungroup_clicked(); break;
        case 9: _t->on_buttonGroup_buttonClicked(); break;
        default: ;
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
