/****************************************************************************
** Meta object code from reading C++ file 'qvboxplotmodelmapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qvboxplotmodelmapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qvboxplotmodelmapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QVBoxPlotModelMapper_t {
    QByteArrayData data[16];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QVBoxPlotModelMapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QVBoxPlotModelMapper_t qt_meta_stringdata_QtCharts__QVBoxPlotModelMapper = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QtCharts::QVBoxPlotModelMapper"
QT_MOC_LITERAL(1, 31, 14), // "seriesReplaced"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 13), // "modelReplaced"
QT_MOC_LITERAL(4, 61, 24), // "firstBoxSetColumnChanged"
QT_MOC_LITERAL(5, 86, 23), // "lastBoxSetColumnChanged"
QT_MOC_LITERAL(6, 110, 15), // "firstRowChanged"
QT_MOC_LITERAL(7, 126, 15), // "rowCountChanged"
QT_MOC_LITERAL(8, 142, 6), // "series"
QT_MOC_LITERAL(9, 149, 15), // "QBoxPlotSeries*"
QT_MOC_LITERAL(10, 165, 5), // "model"
QT_MOC_LITERAL(11, 171, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(12, 191, 17), // "firstBoxSetColumn"
QT_MOC_LITERAL(13, 209, 16), // "lastBoxSetColumn"
QT_MOC_LITERAL(14, 226, 8), // "firstRow"
QT_MOC_LITERAL(15, 235, 8) // "rowCount"

    },
    "QtCharts::QVBoxPlotModelMapper\0"
    "seriesReplaced\0\0modelReplaced\0"
    "firstBoxSetColumnChanged\0"
    "lastBoxSetColumnChanged\0firstRowChanged\0"
    "rowCountChanged\0series\0QBoxPlotSeries*\0"
    "model\0QAbstractItemModel*\0firstBoxSetColumn\0"
    "lastBoxSetColumn\0firstRow\0rowCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QVBoxPlotModelMapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x0049510b,
      10, 0x80000000 | 11, 0x0049510b,
      12, QMetaType::Int, 0x00495103,
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::Int, 0x00495103,
      15, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void QtCharts::QVBoxPlotModelMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QVBoxPlotModelMapper *_t = static_cast<QVBoxPlotModelMapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->seriesReplaced(); break;
        case 1: _t->modelReplaced(); break;
        case 2: _t->firstBoxSetColumnChanged(); break;
        case 3: _t->lastBoxSetColumnChanged(); break;
        case 4: _t->firstRowChanged(); break;
        case 5: _t->rowCountChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QVBoxPlotModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVBoxPlotModelMapper::seriesReplaced)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QVBoxPlotModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVBoxPlotModelMapper::modelReplaced)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QVBoxPlotModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVBoxPlotModelMapper::firstBoxSetColumnChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QVBoxPlotModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVBoxPlotModelMapper::lastBoxSetColumnChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QVBoxPlotModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVBoxPlotModelMapper::firstRowChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QVBoxPlotModelMapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVBoxPlotModelMapper::rowCountChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QVBoxPlotModelMapper *_t = static_cast<QVBoxPlotModelMapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBoxPlotSeries**>(_v) = _t->series(); break;
        case 1: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->model(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->firstBoxSetColumn(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->lastBoxSetColumn(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->firstRow(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QVBoxPlotModelMapper *_t = static_cast<QVBoxPlotModelMapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSeries(*reinterpret_cast< QBoxPlotSeries**>(_v)); break;
        case 1: _t->setModel(*reinterpret_cast< QAbstractItemModel**>(_v)); break;
        case 2: _t->setFirstBoxSetColumn(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setLastBoxSetColumn(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setFirstRow(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setRowCount(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QtCharts::QVBoxPlotModelMapper::staticMetaObject = {
    { &QBoxPlotModelMapper::staticMetaObject, qt_meta_stringdata_QtCharts__QVBoxPlotModelMapper.data,
      qt_meta_data_QtCharts__QVBoxPlotModelMapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::QVBoxPlotModelMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QVBoxPlotModelMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QVBoxPlotModelMapper.stringdata0))
        return static_cast<void*>(this);
    return QBoxPlotModelMapper::qt_metacast(_clname);
}

int QtCharts::QVBoxPlotModelMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBoxPlotModelMapper::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCharts::QVBoxPlotModelMapper::seriesReplaced()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtCharts::QVBoxPlotModelMapper::modelReplaced()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QtCharts::QVBoxPlotModelMapper::firstBoxSetColumnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QtCharts::QVBoxPlotModelMapper::lastBoxSetColumnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QtCharts::QVBoxPlotModelMapper::firstRowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QtCharts::QVBoxPlotModelMapper::rowCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
