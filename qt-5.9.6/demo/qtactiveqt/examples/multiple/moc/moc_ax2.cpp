/****************************************************************************
** Meta object code from reading C++ file 'ax2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ax2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ax2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAxWidget2_t {
    QByteArrayData data[12];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAxWidget2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAxWidget2_t qt_meta_stringdata_QAxWidget2 = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QAxWidget2"
QT_MOC_LITERAL(1, 11, 7), // "ClassID"
QT_MOC_LITERAL(2, 19, 38), // "{58139D56-6BE9-4b17-937D-1B1E..."
QT_MOC_LITERAL(3, 58, 11), // "InterfaceID"
QT_MOC_LITERAL(4, 70, 38), // "{B66280AB-08CC-4dcc-924F-58E6..."
QT_MOC_LITERAL(5, 109, 8), // "EventsID"
QT_MOC_LITERAL(6, 118, 38), // "{D72BACBA-03C4-4480-B4BB-DE4F..."
QT_MOC_LITERAL(7, 157, 12), // "ToSuperClass"
QT_MOC_LITERAL(8, 170, 11), // "StockEvents"
QT_MOC_LITERAL(9, 182, 3), // "yes"
QT_MOC_LITERAL(10, 186, 10), // "Insertable"
QT_MOC_LITERAL(11, 197, 9) // "lineWidth"

    },
    "QAxWidget2\0ClassID\0"
    "{58139D56-6BE9-4b17-937D-1B1EDEDD5B71}\0"
    "InterfaceID\0{B66280AB-08CC-4dcc-924F-58E6D7975B7D}\0"
    "EventsID\0{D72BACBA-03C4-4480-B4BB-DE4FE3AA14A0}\0"
    "ToSuperClass\0StockEvents\0yes\0Insertable\0"
    "lineWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAxWidget2[] = {

 // content:
       7,       // revision
       0,       // classname
       6,   14, // classinfo
       0,    0, // methods
       1,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    6,
       7,    0,
       8,    9,
      10,    9,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00095103,

       0        // eod
};

void QAxWidget2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QAxWidget2 *_t = static_cast<QAxWidget2 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->lineWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAxWidget2 *_t = static_cast<QAxWidget2 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLineWidth(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QAxWidget2::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QAxWidget2.data,
      qt_meta_data_QAxWidget2,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAxWidget2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAxWidget2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAxWidget2.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QAxWidget2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
