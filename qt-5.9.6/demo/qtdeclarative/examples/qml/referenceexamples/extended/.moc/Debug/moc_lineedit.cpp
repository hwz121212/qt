/****************************************************************************
** Meta object code from reading C++ file 'lineedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lineedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LineEditExtension_t {
    QByteArrayData data[7];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LineEditExtension_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LineEditExtension_t qt_meta_stringdata_LineEditExtension = {
    {
QT_MOC_LITERAL(0, 0, 17), // "LineEditExtension"
QT_MOC_LITERAL(1, 18, 14), // "marginsChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 10), // "leftMargin"
QT_MOC_LITERAL(4, 45, 11), // "rightMargin"
QT_MOC_LITERAL(5, 57, 9), // "topMargin"
QT_MOC_LITERAL(6, 67, 12) // "bottomMargin"

    },
    "LineEditExtension\0marginsChanged\0\0"
    "leftMargin\0rightMargin\0topMargin\0"
    "bottomMargin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LineEditExtension[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495103,
       4, QMetaType::Int, 0x00495103,
       5, QMetaType::Int, 0x00495103,
       6, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void LineEditExtension::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LineEditExtension *_t = static_cast<LineEditExtension *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->marginsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (LineEditExtension::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LineEditExtension::marginsChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        LineEditExtension *_t = static_cast<LineEditExtension *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->leftMargin(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->rightMargin(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->topMargin(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->bottomMargin(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        LineEditExtension *_t = static_cast<LineEditExtension *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLeftMargin(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setRightMargin(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setTopMargin(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setBottomMargin(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject LineEditExtension::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LineEditExtension.data,
      qt_meta_data_LineEditExtension,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LineEditExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LineEditExtension::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LineEditExtension.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LineEditExtension::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void LineEditExtension::marginsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
