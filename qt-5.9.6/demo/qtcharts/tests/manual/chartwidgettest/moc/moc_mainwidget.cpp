/****************************************************************************
** Meta object code from reading C++ file 'mainwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget_t {
    QByteArrayData data[25];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget_t qt_meta_stringdata_MainWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWidget"
QT_MOC_LITERAL(1, 11, 9), // "addSeries"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "series"
QT_MOC_LITERAL(4, 29, 11), // "columnCount"
QT_MOC_LITERAL(5, 41, 8), // "rowCount"
QT_MOC_LITERAL(6, 50, 19), // "dataCharacteristics"
QT_MOC_LITERAL(7, 70, 13), // "labelsEnabled"
QT_MOC_LITERAL(8, 84, 17), // "backgroundChanged"
QT_MOC_LITERAL(9, 102, 9), // "itemIndex"
QT_MOC_LITERAL(10, 112, 16), // "autoScaleChanged"
QT_MOC_LITERAL(11, 129, 5), // "value"
QT_MOC_LITERAL(12, 135, 11), // "xMinChanged"
QT_MOC_LITERAL(13, 147, 11), // "xMaxChanged"
QT_MOC_LITERAL(14, 159, 11), // "yMinChanged"
QT_MOC_LITERAL(15, 171, 11), // "yMaxChanged"
QT_MOC_LITERAL(16, 183, 16), // "antiAliasToggled"
QT_MOC_LITERAL(17, 200, 7), // "enabled"
QT_MOC_LITERAL(18, 208, 13), // "openGLToggled"
QT_MOC_LITERAL(19, 222, 16), // "changeChartTheme"
QT_MOC_LITERAL(20, 239, 10), // "themeIndex"
QT_MOC_LITERAL(21, 250, 16), // "generateTestData"
QT_MOC_LITERAL(22, 267, 20), // "QList<QList<qreal> >"
QT_MOC_LITERAL(23, 288, 14), // "generateLabels"
QT_MOC_LITERAL(24, 303, 5) // "count"

    },
    "MainWidget\0addSeries\0\0series\0columnCount\0"
    "rowCount\0dataCharacteristics\0labelsEnabled\0"
    "backgroundChanged\0itemIndex\0"
    "autoScaleChanged\0value\0xMinChanged\0"
    "xMaxChanged\0yMinChanged\0yMaxChanged\0"
    "antiAliasToggled\0enabled\0openGLToggled\0"
    "changeChartTheme\0themeIndex\0"
    "generateTestData\0QList<QList<qreal> >\0"
    "generateLabels\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       1,    5,   80,    2, 0x08 /* Private */,
       8,    1,   91,    2, 0x08 /* Private */,
      10,    1,   94,    2, 0x08 /* Private */,
      12,    1,   97,    2, 0x08 /* Private */,
      13,    1,  100,    2, 0x08 /* Private */,
      14,    1,  103,    2, 0x08 /* Private */,
      15,    1,  106,    2, 0x08 /* Private */,
      16,    1,  109,    2, 0x08 /* Private */,
      18,    1,  112,    2, 0x08 /* Private */,
      19,    1,  115,    2, 0x08 /* Private */,
      21,    3,  118,    2, 0x08 /* Private */,
      23,    1,  125,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Bool,    3,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Int,   20,
    0x80000000 | 22, QMetaType::Int, QMetaType::Int, QMetaType::QString,    4,    5,    6,
    QMetaType::QStringList, QMetaType::Int,   24,

       0        // eod
};

void MainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWidget *_t = static_cast<MainWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addSeries(); break;
        case 1: _t->addSeries((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 2: _t->backgroundChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->autoScaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->xMinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->xMaxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->yMinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->yMaxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->antiAliasToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->openGLToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->changeChartTheme((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: { QList<QList<qreal> > _r = _t->generateTestData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QList<qreal> >*>(_a[0]) = std::move(_r); }  break;
        case 12: { QStringList _r = _t->generateLabels((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject MainWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainWidget.data,
      qt_meta_data_MainWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
