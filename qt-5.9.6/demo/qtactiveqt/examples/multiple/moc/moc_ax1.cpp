/****************************************************************************
** Meta object code from reading C++ file 'ax1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ax1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ax1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAxWidget1_t {
    QByteArrayData data[8];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAxWidget1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAxWidget1_t qt_meta_stringdata_QAxWidget1 = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QAxWidget1"
QT_MOC_LITERAL(1, 11, 7), // "ClassID"
QT_MOC_LITERAL(2, 19, 38), // "{1D9928BD-4453-4bdd-903D-E525..."
QT_MOC_LITERAL(3, 58, 11), // "InterfaceID"
QT_MOC_LITERAL(4, 70, 38), // "{99F6860E-2C5A-42ec-87F2-4339..."
QT_MOC_LITERAL(5, 109, 8), // "EventsID"
QT_MOC_LITERAL(6, 118, 38), // "{0A3E9F27-E4F1-45bb-9E47-6309..."
QT_MOC_LITERAL(7, 157, 9) // "fillColor"

    },
    "QAxWidget1\0ClassID\0"
    "{1D9928BD-4453-4bdd-903D-E525ED17FDE5}\0"
    "InterfaceID\0{99F6860E-2C5A-42ec-87F2-43396F4BE389}\0"
    "EventsID\0{0A3E9F27-E4F1-45bb-9E47-63099BCCD0E3}\0"
    "fillColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAxWidget1[] = {

 // content:
       7,       // revision
       0,       // classname
       3,   14, // classinfo
       0,    0, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    6,

 // properties: name, type, flags
       7, QMetaType::QColor, 0x00095103,

       0        // eod
};

void QAxWidget1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QAxWidget1 *_t = static_cast<QAxWidget1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->fillColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAxWidget1 *_t = static_cast<QAxWidget1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFillColor(*reinterpret_cast< QColor*>(_v)); break;
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

const QMetaObject QAxWidget1::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QAxWidget1.data,
      qt_meta_data_QAxWidget1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAxWidget1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAxWidget1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAxWidget1.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QAxWidget1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
