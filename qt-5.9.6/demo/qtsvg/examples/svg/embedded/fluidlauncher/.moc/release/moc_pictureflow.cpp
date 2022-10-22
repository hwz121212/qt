/****************************************************************************
** Meta object code from reading C++ file 'pictureflow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pictureflow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pictureflow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PictureFlow_t {
    QByteArrayData data[15];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PictureFlow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PictureFlow_t qt_meta_stringdata_PictureFlow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PictureFlow"
QT_MOC_LITERAL(1, 12, 13), // "itemActivated"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "index"
QT_MOC_LITERAL(4, 33, 13), // "inputReceived"
QT_MOC_LITERAL(5, 47, 15), // "setCurrentSlide"
QT_MOC_LITERAL(6, 63, 5), // "clear"
QT_MOC_LITERAL(7, 69, 6), // "render"
QT_MOC_LITERAL(8, 76, 12), // "showPrevious"
QT_MOC_LITERAL(9, 89, 8), // "showNext"
QT_MOC_LITERAL(10, 98, 9), // "showSlide"
QT_MOC_LITERAL(11, 108, 10), // "slideCount"
QT_MOC_LITERAL(12, 119, 12), // "currentSlide"
QT_MOC_LITERAL(13, 132, 9), // "slideSize"
QT_MOC_LITERAL(14, 142, 10) // "zoomFactor"

    },
    "PictureFlow\0itemActivated\0\0index\0"
    "inputReceived\0setCurrentSlide\0clear\0"
    "render\0showPrevious\0showNext\0showSlide\0"
    "slideCount\0currentSlide\0slideSize\0"
    "zoomFactor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PictureFlow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   58,    2, 0x0a /* Public */,
       6,    0,   61,    2, 0x0a /* Public */,
       7,    0,   62,    2, 0x0a /* Public */,
       8,    0,   63,    2, 0x0a /* Public */,
       9,    0,   64,    2, 0x0a /* Public */,
      10,    1,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00095103,
      12, QMetaType::Int, 0x00095103,
      13, QMetaType::QSize, 0x00095103,
      14, QMetaType::Int, 0x00095103,

       0        // eod
};

void PictureFlow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PictureFlow *_t = static_cast<PictureFlow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->inputReceived(); break;
        case 2: _t->setCurrentSlide((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->clear(); break;
        case 4: _t->render(); break;
        case 5: _t->showPrevious(); break;
        case 6: _t->showNext(); break;
        case 7: _t->showSlide((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PictureFlow::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PictureFlow::itemActivated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PictureFlow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PictureFlow::inputReceived)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        PictureFlow *_t = static_cast<PictureFlow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->slideCount(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->currentSlide(); break;
        case 2: *reinterpret_cast< QSize*>(_v) = _t->slideSize(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->zoomFactor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PictureFlow *_t = static_cast<PictureFlow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSlideCount(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setCurrentSlide(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSlideSize(*reinterpret_cast< QSize*>(_v)); break;
        case 3: _t->setZoomFactor(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject PictureFlow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PictureFlow.data,
      qt_meta_data_PictureFlow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PictureFlow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PictureFlow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PictureFlow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PictureFlow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void PictureFlow::itemActivated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PictureFlow::inputReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
