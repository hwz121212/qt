/****************************************************************************
** Meta object code from reading C++ file 'quick3drenderpass_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/Qt3DQuickRender/private/quick3drenderpass_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quick3drenderpass_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__Render__Quick__Quick3DRenderPass_t {
    QByteArrayData data[7];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__Render__Quick__Quick3DRenderPass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__Render__Quick__Quick3DRenderPass_t qt_meta_stringdata_Qt3DRender__Render__Quick__Quick3DRenderPass = {
    {
QT_MOC_LITERAL(0, 0, 44), // "Qt3DRender::Render::Quick::Qu..."
QT_MOC_LITERAL(1, 45, 10), // "filterKeys"
QT_MOC_LITERAL(2, 56, 40), // "QQmlListProperty<Qt3DRender::..."
QT_MOC_LITERAL(3, 97, 12), // "renderStates"
QT_MOC_LITERAL(4, 110, 42), // "QQmlListProperty<Qt3DRender::..."
QT_MOC_LITERAL(5, 153, 10), // "parameters"
QT_MOC_LITERAL(6, 164, 40) // "QQmlListProperty<Qt3DRender::..."

    },
    "Qt3DRender::Render::Quick::Quick3DRenderPass\0"
    "filterKeys\0QQmlListProperty<Qt3DRender::QFilterKey>\0"
    "renderStates\0QQmlListProperty<Qt3DRender::QRenderState>\0"
    "parameters\0QQmlListProperty<Qt3DRender::QParameter>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__Render__Quick__Quick3DRenderPass[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095009,
       3, 0x80000000 | 4, 0x00095009,
       5, 0x80000000 | 6, 0x00095009,

       0        // eod
};

void Qt3DRender::Render::Quick::Quick3DRenderPass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        Quick3DRenderPass *_t = static_cast<Quick3DRenderPass *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<Qt3DRender::QFilterKey>*>(_v) = _t->filterKeyList(); break;
        case 1: *reinterpret_cast< QQmlListProperty<Qt3DRender::QRenderState>*>(_v) = _t->renderStateList(); break;
        case 2: *reinterpret_cast< QQmlListProperty<Qt3DRender::QParameter>*>(_v) = _t->parameterList(); break;
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

const QMetaObject Qt3DRender::Render::Quick::Quick3DRenderPass::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qt3DRender__Render__Quick__Quick3DRenderPass.data,
      qt_meta_data_Qt3DRender__Render__Quick__Quick3DRenderPass,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::Render::Quick::Quick3DRenderPass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::Render::Quick::Quick3DRenderPass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__Render__Quick__Quick3DRenderPass.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qt3DRender::Render::Quick::Quick3DRenderPass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE