/****************************************************************************
** Meta object code from reading C++ file 'pathstroke.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pathstroke.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pathstroke.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PathStrokeRenderer_t {
    QByteArrayData data[21];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathStrokeRenderer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathStrokeRenderer_t qt_meta_stringdata_PathStrokeRenderer = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PathStrokeRenderer"
QT_MOC_LITERAL(1, 19, 7), // "clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "setPenWidth"
QT_MOC_LITERAL(4, 40, 8), // "penWidth"
QT_MOC_LITERAL(5, 49, 12), // "setAnimation"
QT_MOC_LITERAL(6, 62, 9), // "animation"
QT_MOC_LITERAL(7, 72, 10), // "setFlatCap"
QT_MOC_LITERAL(8, 83, 12), // "setSquareCap"
QT_MOC_LITERAL(9, 96, 11), // "setRoundCap"
QT_MOC_LITERAL(10, 108, 12), // "setBevelJoin"
QT_MOC_LITERAL(11, 121, 12), // "setMiterJoin"
QT_MOC_LITERAL(12, 134, 12), // "setRoundJoin"
QT_MOC_LITERAL(13, 147, 12), // "setCurveMode"
QT_MOC_LITERAL(14, 160, 11), // "setLineMode"
QT_MOC_LITERAL(15, 172, 12), // "setSolidLine"
QT_MOC_LITERAL(16, 185, 11), // "setDashLine"
QT_MOC_LITERAL(17, 197, 10), // "setDotLine"
QT_MOC_LITERAL(18, 208, 14), // "setDashDotLine"
QT_MOC_LITERAL(19, 223, 17), // "setDashDotDotLine"
QT_MOC_LITERAL(20, 241, 17) // "setCustomDashLine"

    },
    "PathStrokeRenderer\0clicked\0\0setPenWidth\0"
    "penWidth\0setAnimation\0animation\0"
    "setFlatCap\0setSquareCap\0setRoundCap\0"
    "setBevelJoin\0setMiterJoin\0setRoundJoin\0"
    "setCurveMode\0setLineMode\0setSolidLine\0"
    "setDashLine\0setDotLine\0setDashDotLine\0"
    "setDashDotDotLine\0setCustomDashLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathStrokeRenderer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       2,  120, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  100,    2, 0x0a /* Public */,
       5,    1,  103,    2, 0x0a /* Public */,
       7,    0,  106,    2, 0x0a /* Public */,
       8,    0,  107,    2, 0x0a /* Public */,
       9,    0,  108,    2, 0x0a /* Public */,
      10,    0,  109,    2, 0x0a /* Public */,
      11,    0,  110,    2, 0x0a /* Public */,
      12,    0,  111,    2, 0x0a /* Public */,
      13,    0,  112,    2, 0x0a /* Public */,
      14,    0,  113,    2, 0x0a /* Public */,
      15,    0,  114,    2, 0x0a /* Public */,
      16,    0,  115,    2, 0x0a /* Public */,
      17,    0,  116,    2, 0x0a /* Public */,
      18,    0,  117,    2, 0x0a /* Public */,
      19,    0,  118,    2, 0x0a /* Public */,
      20,    0,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00095103,
       4, QMetaType::QReal, 0x00095003,

       0        // eod
};

void PathStrokeRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PathStrokeRenderer *_t = static_cast<PathStrokeRenderer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->setPenWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setAnimation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setFlatCap(); break;
        case 4: _t->setSquareCap(); break;
        case 5: _t->setRoundCap(); break;
        case 6: _t->setBevelJoin(); break;
        case 7: _t->setMiterJoin(); break;
        case 8: _t->setRoundJoin(); break;
        case 9: _t->setCurveMode(); break;
        case 10: _t->setLineMode(); break;
        case 11: _t->setSolidLine(); break;
        case 12: _t->setDashLine(); break;
        case 13: _t->setDotLine(); break;
        case 14: _t->setDashDotLine(); break;
        case 15: _t->setDashDotDotLine(); break;
        case 16: _t->setCustomDashLine(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PathStrokeRenderer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStrokeRenderer::clicked)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        PathStrokeRenderer *_t = static_cast<PathStrokeRenderer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->animation(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->realPenWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PathStrokeRenderer *_t = static_cast<PathStrokeRenderer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAnimation(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setRealPenWidth(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject PathStrokeRenderer::staticMetaObject = {
    { &ArthurFrame::staticMetaObject, qt_meta_stringdata_PathStrokeRenderer.data,
      qt_meta_data_PathStrokeRenderer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PathStrokeRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathStrokeRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathStrokeRenderer.stringdata0))
        return static_cast<void*>(this);
    return ArthurFrame::qt_metacast(_clname);
}

int PathStrokeRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ArthurFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void PathStrokeRenderer::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_PathStrokeControls_t {
    QByteArrayData data[6];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathStrokeControls_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathStrokeControls_t qt_meta_stringdata_PathStrokeControls = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PathStrokeControls"
QT_MOC_LITERAL(1, 19, 9), // "okPressed"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "quitPressed"
QT_MOC_LITERAL(4, 42, 14), // "emitQuitSignal"
QT_MOC_LITERAL(5, 57, 12) // "emitOkSignal"

    },
    "PathStrokeControls\0okPressed\0\0quitPressed\0"
    "emitQuitSignal\0emitOkSignal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathStrokeControls[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PathStrokeControls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PathStrokeControls *_t = static_cast<PathStrokeControls *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->okPressed(); break;
        case 1: _t->quitPressed(); break;
        case 2: _t->emitQuitSignal(); break;
        case 3: _t->emitOkSignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PathStrokeControls::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStrokeControls::okPressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PathStrokeControls::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PathStrokeControls::quitPressed)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PathStrokeControls::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PathStrokeControls.data,
      qt_meta_data_PathStrokeControls,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PathStrokeControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathStrokeControls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathStrokeControls.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PathStrokeControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void PathStrokeControls::okPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PathStrokeControls::quitPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_PathStrokeWidget_t {
    QByteArrayData data[4];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PathStrokeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PathStrokeWidget_t qt_meta_stringdata_PathStrokeWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PathStrokeWidget"
QT_MOC_LITERAL(1, 17, 12), // "showControls"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12) // "hideControls"

    },
    "PathStrokeWidget\0showControls\0\0"
    "hideControls"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathStrokeWidget[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PathStrokeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PathStrokeWidget *_t = static_cast<PathStrokeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showControls(); break;
        case 1: _t->hideControls(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PathStrokeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PathStrokeWidget.data,
      qt_meta_data_PathStrokeWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PathStrokeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathStrokeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PathStrokeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PathStrokeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
