/****************************************************************************
** Meta object code from reading C++ file 'qstenciloperation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qstenciloperation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qstenciloperation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QStencilOperation_t {
    QByteArrayData data[4];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QStencilOperation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QStencilOperation_t qt_meta_stringdata_Qt3DRender__QStencilOperation = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Qt3DRender::QStencilOperation"
QT_MOC_LITERAL(1, 30, 5), // "front"
QT_MOC_LITERAL(2, 36, 39), // "Qt3DRender::QStencilOperation..."
QT_MOC_LITERAL(3, 76, 4) // "back"

    },
    "Qt3DRender::QStencilOperation\0front\0"
    "Qt3DRender::QStencilOperationArguments*\0"
    "back"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QStencilOperation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, 0x80000000 | 2, 0x00095409,

       0        // eod
};

void Qt3DRender::QStencilOperation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QStencilOperation *_t = static_cast<QStencilOperation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt3DRender::QStencilOperationArguments**>(_v) = _t->front(); break;
        case 1: *reinterpret_cast< Qt3DRender::QStencilOperationArguments**>(_v) = _t->back(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Qt3DRender::QStencilOperation::staticMetaObject = {
    { &QRenderState::staticMetaObject, qt_meta_stringdata_Qt3DRender__QStencilOperation.data,
      qt_meta_data_Qt3DRender__QStencilOperation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QStencilOperation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QStencilOperation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QStencilOperation.stringdata0))
        return static_cast<void*>(this);
    return QRenderState::qt_metacast(_clname);
}

int Qt3DRender::QStencilOperation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRenderState::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
