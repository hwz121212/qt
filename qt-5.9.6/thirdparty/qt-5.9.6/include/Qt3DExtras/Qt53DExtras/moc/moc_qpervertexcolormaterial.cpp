/****************************************************************************
** Meta object code from reading C++ file 'qpervertexcolormaterial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qpervertexcolormaterial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpervertexcolormaterial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DExtras__QPerVertexColorMaterial_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DExtras__QPerVertexColorMaterial_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DExtras__QPerVertexColorMaterial_t qt_meta_stringdata_Qt3DExtras__QPerVertexColorMaterial = {
    {
QT_MOC_LITERAL(0, 0, 35) // "Qt3DExtras::QPerVertexColorMa..."

    },
    "Qt3DExtras::QPerVertexColorMaterial"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DExtras__QPerVertexColorMaterial[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Qt3DExtras::QPerVertexColorMaterial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Qt3DExtras::QPerVertexColorMaterial::staticMetaObject = {
    { &Qt3DRender::QMaterial::staticMetaObject, qt_meta_stringdata_Qt3DExtras__QPerVertexColorMaterial.data,
      qt_meta_data_Qt3DExtras__QPerVertexColorMaterial,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DExtras::QPerVertexColorMaterial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DExtras::QPerVertexColorMaterial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DExtras__QPerVertexColorMaterial.stringdata0))
        return static_cast<void*>(this);
    return Qt3DRender::QMaterial::qt_metacast(_clname);
}

int Qt3DExtras::QPerVertexColorMaterial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DRender::QMaterial::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
