/****************************************************************************
** Meta object code from reading C++ file 'bars3dcontroller_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDataVisualization/private/bars3dcontroller_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bars3dcontroller_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__Bars3DController_t {
    QByteArrayData data[18];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__Bars3DController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__Bars3DController_t qt_meta_stringdata_QtDataVisualization__Bars3DController = {
    {
QT_MOC_LITERAL(0, 0, 37), // "QtDataVisualization::Bars3DCo..."
QT_MOC_LITERAL(1, 38, 20), // "primarySeriesChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 13), // "QBar3DSeries*"
QT_MOC_LITERAL(4, 74, 6), // "series"
QT_MOC_LITERAL(5, 81, 21), // "selectedSeriesChanged"
QT_MOC_LITERAL(6, 103, 16), // "handleArrayReset"
QT_MOC_LITERAL(7, 120, 15), // "handleRowsAdded"
QT_MOC_LITERAL(8, 136, 10), // "startIndex"
QT_MOC_LITERAL(9, 147, 5), // "count"
QT_MOC_LITERAL(10, 153, 17), // "handleRowsChanged"
QT_MOC_LITERAL(11, 171, 17), // "handleRowsRemoved"
QT_MOC_LITERAL(12, 189, 18), // "handleRowsInserted"
QT_MOC_LITERAL(13, 208, 17), // "handleItemChanged"
QT_MOC_LITERAL(14, 226, 8), // "rowIndex"
QT_MOC_LITERAL(15, 235, 11), // "columnIndex"
QT_MOC_LITERAL(16, 247, 26), // "handleDataRowLabelsChanged"
QT_MOC_LITERAL(17, 274, 29) // "handleDataColumnLabelsChanged"

    },
    "QtDataVisualization::Bars3DController\0"
    "primarySeriesChanged\0\0QBar3DSeries*\0"
    "series\0selectedSeriesChanged\0"
    "handleArrayReset\0handleRowsAdded\0"
    "startIndex\0count\0handleRowsChanged\0"
    "handleRowsRemoved\0handleRowsInserted\0"
    "handleItemChanged\0rowIndex\0columnIndex\0"
    "handleDataRowLabelsChanged\0"
    "handleDataColumnLabelsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__Bars3DController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   70,    2, 0x0a /* Public */,
       7,    2,   71,    2, 0x0a /* Public */,
      10,    2,   76,    2, 0x0a /* Public */,
      11,    2,   81,    2, 0x0a /* Public */,
      12,    2,   86,    2, 0x0a /* Public */,
      13,    2,   91,    2, 0x0a /* Public */,
      16,    0,   96,    2, 0x0a /* Public */,
      17,    0,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtDataVisualization::Bars3DController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Bars3DController *_t = static_cast<Bars3DController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->primarySeriesChanged((*reinterpret_cast< QBar3DSeries*(*)>(_a[1]))); break;
        case 1: _t->selectedSeriesChanged((*reinterpret_cast< QBar3DSeries*(*)>(_a[1]))); break;
        case 2: _t->handleArrayReset(); break;
        case 3: _t->handleRowsAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->handleRowsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->handleRowsRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->handleRowsInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->handleItemChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->handleDataRowLabelsChanged(); break;
        case 9: _t->handleDataColumnLabelsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBar3DSeries* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBar3DSeries* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Bars3DController::*_t)(QBar3DSeries * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bars3DController::primarySeriesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Bars3DController::*_t)(QBar3DSeries * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bars3DController::selectedSeriesChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QtDataVisualization::Bars3DController::staticMetaObject = {
    { &Abstract3DController::staticMetaObject, qt_meta_stringdata_QtDataVisualization__Bars3DController.data,
      qt_meta_data_QtDataVisualization__Bars3DController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::Bars3DController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::Bars3DController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__Bars3DController.stringdata0))
        return static_cast<void*>(this);
    return Abstract3DController::qt_metacast(_clname);
}

int QtDataVisualization::Bars3DController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Abstract3DController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QtDataVisualization::Bars3DController::primarySeriesChanged(QBar3DSeries * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtDataVisualization::Bars3DController::selectedSeriesChanged(QBar3DSeries * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
