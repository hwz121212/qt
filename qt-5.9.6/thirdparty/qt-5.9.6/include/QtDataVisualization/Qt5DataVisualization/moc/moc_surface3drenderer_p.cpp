/****************************************************************************
** Meta object code from reading C++ file 'surface3drenderer_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDataVisualization/private/surface3drenderer_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'surface3drenderer_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__Surface3DRenderer_t {
    QByteArrayData data[4];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__Surface3DRenderer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__Surface3DRenderer_t qt_meta_stringdata_QtDataVisualization__Surface3DRenderer = {
    {
QT_MOC_LITERAL(0, 0, 38), // "QtDataVisualization::Surface3..."
QT_MOC_LITERAL(1, 39, 27), // "flatShadingSupportedChanged"
QT_MOC_LITERAL(2, 67, 0), // ""
QT_MOC_LITERAL(3, 68, 9) // "supported"

    },
    "QtDataVisualization::Surface3DRenderer\0"
    "flatShadingSupportedChanged\0\0supported"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__Surface3DRenderer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void QtDataVisualization::Surface3DRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Surface3DRenderer *_t = static_cast<Surface3DRenderer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flatShadingSupportedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Surface3DRenderer::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Surface3DRenderer::flatShadingSupportedChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QtDataVisualization::Surface3DRenderer::staticMetaObject = {
    { &Abstract3DRenderer::staticMetaObject, qt_meta_stringdata_QtDataVisualization__Surface3DRenderer.data,
      qt_meta_data_QtDataVisualization__Surface3DRenderer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::Surface3DRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::Surface3DRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__Surface3DRenderer.stringdata0))
        return static_cast<void*>(this);
    return Abstract3DRenderer::qt_metacast(_clname);
}

int QtDataVisualization::Surface3DRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Abstract3DRenderer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QtDataVisualization::Surface3DRenderer::flatShadingSupportedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
