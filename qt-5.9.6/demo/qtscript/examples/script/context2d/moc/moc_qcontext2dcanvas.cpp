/****************************************************************************
** Meta object code from reading C++ file 'qcontext2dcanvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcontext2dcanvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcontext2dcanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QContext2DCanvas_t {
    QByteArrayData data[14];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QContext2DCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QContext2DCanvas_t qt_meta_stringdata_QContext2DCanvas = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QContext2DCanvas"
QT_MOC_LITERAL(1, 17, 10), // "getContext"
QT_MOC_LITERAL(2, 28, 12), // "QScriptValue"
QT_MOC_LITERAL(3, 41, 0), // ""
QT_MOC_LITERAL(4, 42, 3), // "str"
QT_MOC_LITERAL(5, 46, 6), // "resize"
QT_MOC_LITERAL(6, 53, 5), // "width"
QT_MOC_LITERAL(7, 59, 6), // "height"
QT_MOC_LITERAL(8, 66, 16), // "addEventListener"
QT_MOC_LITERAL(9, 83, 4), // "type"
QT_MOC_LITERAL(10, 88, 8), // "listener"
QT_MOC_LITERAL(11, 97, 10), // "useCapture"
QT_MOC_LITERAL(12, 108, 15), // "contentsChanged"
QT_MOC_LITERAL(13, 124, 5) // "image"

    },
    "QContext2DCanvas\0getContext\0QScriptValue\0"
    "\0str\0resize\0width\0height\0addEventListener\0"
    "type\0listener\0useCapture\0contentsChanged\0"
    "image"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QContext2DCanvas[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    3, 0x0a /* Public */,
       5,    2,   37,    3, 0x0a /* Public */,
       8,    3,   42,    3, 0x0a /* Public */,
      12,    1,   49,    3, 0x08 /* Private */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 2, QMetaType::Bool,    9,   10,   11,
    QMetaType::Void, QMetaType::QImage,   13,

       0        // eod
};

void QContext2DCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QContext2DCanvas *_t = static_cast<QContext2DCanvas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QScriptValue _r = _t->getContext((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->resize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->addEventListener((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QScriptValue(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->contentsChanged((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QContext2DCanvas::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QContext2DCanvas.data,
      qt_meta_data_QContext2DCanvas,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QContext2DCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QContext2DCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QContext2DCanvas.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QContext2DCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
