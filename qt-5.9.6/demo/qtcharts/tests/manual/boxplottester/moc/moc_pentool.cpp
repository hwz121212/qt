/****************************************************************************
** Meta object code from reading C++ file 'pentool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pentool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pentool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PenTool_t {
    QByteArrayData data[11];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PenTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PenTool_t qt_meta_stringdata_PenTool = {
    {
QT_MOC_LITERAL(0, 0, 7), // "PenTool"
QT_MOC_LITERAL(1, 8, 7), // "changed"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 15), // "showColorDialog"
QT_MOC_LITERAL(4, 33, 11), // "updateWidth"
QT_MOC_LITERAL(5, 45, 5), // "width"
QT_MOC_LITERAL(6, 51, 11), // "updateStyle"
QT_MOC_LITERAL(7, 63, 5), // "style"
QT_MOC_LITERAL(8, 69, 14), // "updateCapStyle"
QT_MOC_LITERAL(9, 84, 5), // "index"
QT_MOC_LITERAL(10, 90, 15) // "updateJoinStyle"

    },
    "PenTool\0changed\0\0showColorDialog\0"
    "updateWidth\0width\0updateStyle\0style\0"
    "updateCapStyle\0index\0updateJoinStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PenTool[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x0a /* Public */,
       4,    1,   46,    2, 0x0a /* Public */,
       6,    1,   49,    2, 0x0a /* Public */,
       8,    1,   52,    2, 0x0a /* Public */,
      10,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void PenTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PenTool *_t = static_cast<PenTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->showColorDialog(); break;
        case 2: _t->updateWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->updateStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateCapStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateJoinStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PenTool::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PenTool::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PenTool::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PenTool.data,
      qt_meta_data_PenTool,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PenTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PenTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PenTool.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PenTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PenTool::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
