/****************************************************************************
** Meta object code from reading C++ file 'tst_qintvalidator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qintvalidator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qintvalidator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QIntValidator_t {
    QByteArrayData data[7];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QIntValidator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QIntValidator_t qt_meta_stringdata_tst_QIntValidator = {
    {
QT_MOC_LITERAL(0, 0, 17), // "tst_QIntValidator"
QT_MOC_LITERAL(1, 18, 13), // "validate_data"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "validate"
QT_MOC_LITERAL(4, 42, 14), // "validateArabic"
QT_MOC_LITERAL(5, 57, 14), // "validateFrench"
QT_MOC_LITERAL(6, 72, 13) // "notifySignals"

    },
    "tst_QIntValidator\0validate_data\0\0"
    "validate\0validateArabic\0validateFrench\0"
    "notifySignals"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QIntValidator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tst_QIntValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QIntValidator *_t = static_cast<tst_QIntValidator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->validate_data(); break;
        case 1: _t->validate(); break;
        case 2: _t->validateArabic(); break;
        case 3: _t->validateFrench(); break;
        case 4: _t->notifySignals(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QIntValidator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QIntValidator.data,
      qt_meta_data_tst_QIntValidator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QIntValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QIntValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QIntValidator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QIntValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
