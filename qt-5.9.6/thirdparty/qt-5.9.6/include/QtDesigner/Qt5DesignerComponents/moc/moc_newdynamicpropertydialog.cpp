/****************************************************************************
** Meta object code from reading C++ file 'newdynamicpropertydialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../propertyeditor/newdynamicpropertydialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newdynamicpropertydialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__NewDynamicPropertyDialog_t {
    QByteArrayData data[6];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__NewDynamicPropertyDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__NewDynamicPropertyDialog_t qt_meta_stringdata_qdesigner_internal__NewDynamicPropertyDialog = {
    {
QT_MOC_LITERAL(0, 0, 44), // "qdesigner_internal::NewDynami..."
QT_MOC_LITERAL(1, 45, 22), // "on_m_buttonBox_clicked"
QT_MOC_LITERAL(2, 68, 0), // ""
QT_MOC_LITERAL(3, 69, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 86, 3), // "btn"
QT_MOC_LITERAL(5, 90, 11) // "nameChanged"

    },
    "qdesigner_internal::NewDynamicPropertyDialog\0"
    "on_m_buttonBox_clicked\0\0QAbstractButton*\0"
    "btn\0nameChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__NewDynamicPropertyDialog[] = {

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
       1,    1,   24,    2, 0x08 /* Private */,
       5,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void qdesigner_internal::NewDynamicPropertyDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewDynamicPropertyDialog *_t = static_cast<NewDynamicPropertyDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_m_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 1: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject qdesigner_internal::NewDynamicPropertyDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qdesigner_internal__NewDynamicPropertyDialog.data,
      qt_meta_data_qdesigner_internal__NewDynamicPropertyDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::NewDynamicPropertyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::NewDynamicPropertyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__NewDynamicPropertyDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qdesigner_internal::NewDynamicPropertyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
