/****************************************************************************
** Meta object code from reading C++ file 'percentbarchartitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtCharts/private/percentbarchartitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'percentbarchartitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__PercentBarChartItem_t {
    QByteArrayData data[4];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__PercentBarChartItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__PercentBarChartItem_t qt_meta_stringdata_QtCharts__PercentBarChartItem = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QtCharts::PercentBarChartItem"
QT_MOC_LITERAL(1, 30, 27), // "handleLabelsPositionChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 14) // "positionLabels"

    },
    "QtCharts::PercentBarChartItem\0"
    "handleLabelsPositionChanged\0\0"
    "positionLabels"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__PercentBarChartItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtCharts::PercentBarChartItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PercentBarChartItem *_t = static_cast<PercentBarChartItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleLabelsPositionChanged(); break;
        case 1: _t->positionLabels(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QtCharts::PercentBarChartItem::staticMetaObject = {
    { &AbstractBarChartItem::staticMetaObject, qt_meta_stringdata_QtCharts__PercentBarChartItem.data,
      qt_meta_data_QtCharts__PercentBarChartItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::PercentBarChartItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::PercentBarChartItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__PercentBarChartItem.stringdata0))
        return static_cast<void*>(this);
    return AbstractBarChartItem::qt_metacast(_clname);
}

int QtCharts::PercentBarChartItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractBarChartItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE