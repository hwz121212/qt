/****************************************************************************
** Meta object code from reading C++ file 'quick3dvertexblendanimation_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/Qt3DQuickAnimation/private/quick3dvertexblendanimation_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quick3dvertexblendanimation_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DAnimation__Quick__QQuick3DVertexBlendAnimation_t {
    QByteArrayData data[3];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DAnimation__Quick__QQuick3DVertexBlendAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DAnimation__Quick__QQuick3DVertexBlendAnimation_t qt_meta_stringdata_Qt3DAnimation__Quick__QQuick3DVertexBlendAnimation = {
    {
QT_MOC_LITERAL(0, 0, 50), // "Qt3DAnimation::Quick::QQuick3..."
QT_MOC_LITERAL(1, 51, 12), // "morphTargets"
QT_MOC_LITERAL(2, 64, 45) // "QQmlListProperty<Qt3DAnimatio..."

    },
    "Qt3DAnimation::Quick::QQuick3DVertexBlendAnimation\0"
    "morphTargets\0QQmlListProperty<Qt3DAnimation::QMorphTarget>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DAnimation__Quick__QQuick3DVertexBlendAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095009,

       0        // eod
};

void Qt3DAnimation::Quick::QQuick3DVertexBlendAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQuick3DVertexBlendAnimation *_t = static_cast<QQuick3DVertexBlendAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<Qt3DAnimation::QMorphTarget>*>(_v) = _t->morphTargets(); break;
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

const QMetaObject Qt3DAnimation::Quick::QQuick3DVertexBlendAnimation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qt3DAnimation__Quick__QQuick3DVertexBlendAnimation.data,
      qt_meta_data_Qt3DAnimation__Quick__QQuick3DVertexBlendAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DAnimation::Quick::QQuick3DVertexBlendAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DAnimation::Quick::QQuick3DVertexBlendAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DAnimation__Quick__QQuick3DVertexBlendAnimation.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qt3DAnimation::Quick::QQuick3DVertexBlendAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
