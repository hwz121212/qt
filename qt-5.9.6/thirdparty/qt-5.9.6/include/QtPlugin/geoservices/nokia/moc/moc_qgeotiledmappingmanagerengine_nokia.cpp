/****************************************************************************
** Meta object code from reading C++ file 'qgeotiledmappingmanagerengine_nokia.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qgeotiledmappingmanagerengine_nokia.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeotiledmappingmanagerengine_nokia.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoTiledMappingManagerEngineNokia_t {
    QByteArrayData data[6];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoTiledMappingManagerEngineNokia_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoTiledMappingManagerEngineNokia_t qt_meta_stringdata_QGeoTiledMappingManagerEngineNokia = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QGeoTiledMappingManagerEngine..."
QT_MOC_LITERAL(1, 35, 33), // "loadCopyrightsDescriptorsFrom..."
QT_MOC_LITERAL(2, 69, 0), // ""
QT_MOC_LITERAL(3, 70, 8), // "jsonData"
QT_MOC_LITERAL(4, 79, 19), // "parseNewVersionInfo"
QT_MOC_LITERAL(5, 99, 11) // "versionData"

    },
    "QGeoTiledMappingManagerEngineNokia\0"
    "loadCopyrightsDescriptorsFromJson\0\0"
    "jsonData\0parseNewVersionInfo\0versionData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoTiledMappingManagerEngineNokia[] = {

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
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QByteArray,    5,

       0        // eod
};

void QGeoTiledMappingManagerEngineNokia::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoTiledMappingManagerEngineNokia *_t = static_cast<QGeoTiledMappingManagerEngineNokia *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadCopyrightsDescriptorsFromJson((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->parseNewVersionInfo((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QGeoTiledMappingManagerEngineNokia::staticMetaObject = {
    { &QGeoTiledMappingManagerEngine::staticMetaObject, qt_meta_stringdata_QGeoTiledMappingManagerEngineNokia.data,
      qt_meta_data_QGeoTiledMappingManagerEngineNokia,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGeoTiledMappingManagerEngineNokia::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoTiledMappingManagerEngineNokia::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoTiledMappingManagerEngineNokia.stringdata0))
        return static_cast<void*>(this);
    return QGeoTiledMappingManagerEngine::qt_metacast(_clname);
}

int QGeoTiledMappingManagerEngineNokia::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoTiledMappingManagerEngine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
