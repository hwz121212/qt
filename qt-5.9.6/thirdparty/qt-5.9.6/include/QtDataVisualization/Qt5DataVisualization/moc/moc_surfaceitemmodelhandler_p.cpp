/****************************************************************************
** Meta object code from reading C++ file 'surfaceitemmodelhandler_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDataVisualization/private/surfaceitemmodelhandler_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'surfaceitemmodelhandler_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__SurfaceItemModelHandler_t {
    QByteArrayData data[7];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__SurfaceItemModelHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__SurfaceItemModelHandler_t qt_meta_stringdata_QtDataVisualization__SurfaceItemModelHandler = {
    {
QT_MOC_LITERAL(0, 0, 44), // "QtDataVisualization::SurfaceI..."
QT_MOC_LITERAL(1, 45, 17), // "handleDataChanged"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 7), // "topLeft"
QT_MOC_LITERAL(4, 72, 11), // "bottomRight"
QT_MOC_LITERAL(5, 84, 12), // "QVector<int>"
QT_MOC_LITERAL(6, 97, 5) // "roles"

    },
    "QtDataVisualization::SurfaceItemModelHandler\0"
    "handleDataChanged\0\0topLeft\0bottomRight\0"
    "QVector<int>\0roles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__SurfaceItemModelHandler[] = {

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
       1,    3,   24,    2, 0x0a /* Public */,
       1,    2,   31,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    3,    4,

       0        // eod
};

void QtDataVisualization::SurfaceItemModelHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SurfaceItemModelHandler *_t = static_cast<SurfaceItemModelHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 1: _t->handleDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject QtDataVisualization::SurfaceItemModelHandler::staticMetaObject = {
    { &AbstractItemModelHandler::staticMetaObject, qt_meta_stringdata_QtDataVisualization__SurfaceItemModelHandler.data,
      qt_meta_data_QtDataVisualization__SurfaceItemModelHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::SurfaceItemModelHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::SurfaceItemModelHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__SurfaceItemModelHandler.stringdata0))
        return static_cast<void*>(this);
    return AbstractItemModelHandler::qt_metacast(_clname);
}

int QtDataVisualization::SurfaceItemModelHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractItemModelHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE