/****************************************************************************
** Meta object code from reading C++ file 'fbitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fbitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fbitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FbItem_t {
    QByteArrayData data[5];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FbItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FbItem_t qt_meta_stringdata_FbItem = {
    {
QT_MOC_LITERAL(0, 0, 6), // "FbItem"
QT_MOC_LITERAL(1, 7, 3), // "eye"
QT_MOC_LITERAL(2, 11, 6), // "target"
QT_MOC_LITERAL(3, 18, 8), // "rotation"
QT_MOC_LITERAL(4, 27, 11) // "multisample"

    },
    "FbItem\0eye\0target\0rotation\0multisample"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FbItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QVector3D, 0x00095103,
       2, QMetaType::QVector3D, 0x00095103,
       3, QMetaType::QVector3D, 0x00095103,
       4, QMetaType::Bool, 0x00095103,

       0        // eod
};

void FbItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        FbItem *_t = static_cast<FbItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = _t->eye(); break;
        case 1: *reinterpret_cast< QVector3D*>(_v) = _t->target(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = _t->rotation(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->multisample(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        FbItem *_t = static_cast<FbItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEye(*reinterpret_cast< QVector3D*>(_v)); break;
        case 1: _t->setTarget(*reinterpret_cast< QVector3D*>(_v)); break;
        case 2: _t->setRotation(*reinterpret_cast< QVector3D*>(_v)); break;
        case 3: _t->setMultisample(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject FbItem::staticMetaObject = {
    { &QQuickFramebufferObject::staticMetaObject, qt_meta_stringdata_FbItem.data,
      qt_meta_data_FbItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FbItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FbItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FbItem.stringdata0))
        return static_cast<void*>(this);
    return QQuickFramebufferObject::qt_metacast(_clname);
}

int FbItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickFramebufferObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
