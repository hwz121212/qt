/****************************************************************************
** Meta object code from reading C++ file 'mycapture.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mycapture.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mycapture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyCapture_t {
    QByteArrayData data[6];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyCapture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyCapture_t qt_meta_stringdata_MyCapture = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MyCapture"
QT_MOC_LITERAL(1, 10, 11), // "onCompleted"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 13), // "setContinuous"
QT_MOC_LITERAL(4, 37, 9), // "continuos"
QT_MOC_LITERAL(5, 47, 7) // "capture"

    },
    "MyCapture\0onCompleted\0\0setContinuous\0"
    "continuos\0capture"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyCapture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,

       0        // eod
};

void MyCapture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyCapture *_t = static_cast<MyCapture *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onCompleted(); break;
        case 1: _t->setContinuous((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->capture(); break;
        default: ;
        }
    }
}

const QMetaObject MyCapture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyCapture.data,
      qt_meta_data_MyCapture,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyCapture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyCapture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyCapture.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyCapture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
