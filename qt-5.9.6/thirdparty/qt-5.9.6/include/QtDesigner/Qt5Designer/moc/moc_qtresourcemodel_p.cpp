/****************************************************************************
** Meta object code from reading C++ file 'qtresourcemodel_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDesigner/private/qtresourcemodel_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtresourcemodel_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtResourceModel_t {
    QByteArrayData data[9];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtResourceModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtResourceModel_t qt_meta_stringdata_QtResourceModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QtResourceModel"
QT_MOC_LITERAL(1, 16, 20), // "resourceSetActivated"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "QtResourceSet*"
QT_MOC_LITERAL(4, 53, 11), // "resourceSet"
QT_MOC_LITERAL(5, 65, 18), // "resourceSetChanged"
QT_MOC_LITERAL(6, 84, 25), // "qrcFileModifiedExternally"
QT_MOC_LITERAL(7, 110, 4), // "path"
QT_MOC_LITERAL(8, 115, 15) // "slotFileChanged"

    },
    "QtResourceModel\0resourceSetActivated\0"
    "\0QtResourceSet*\0resourceSet\0"
    "resourceSetChanged\0qrcFileModifiedExternally\0"
    "path\0slotFileChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtResourceModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       6,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void QtResourceModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtResourceModel *_t = static_cast<QtResourceModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resourceSetActivated((*reinterpret_cast< QtResourceSet*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->qrcFileModifiedExternally((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->d_func()->slotFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QtResourceModel::*_t)(QtResourceSet * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtResourceModel::resourceSetActivated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QtResourceModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtResourceModel::qrcFileModifiedExternally)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QtResourceModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtResourceModel.data,
      qt_meta_data_QtResourceModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtResourceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtResourceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtResourceModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtResourceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QtResourceModel::resourceSetActivated(QtResourceSet * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtResourceModel::qrcFileModifiedExternally(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
