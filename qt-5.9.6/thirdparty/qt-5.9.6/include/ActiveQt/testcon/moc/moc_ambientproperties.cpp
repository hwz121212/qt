/****************************************************************************
** Meta object code from reading C++ file 'ambientproperties.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ambientproperties.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ambientproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AmbientProperties_t {
    QByteArrayData data[7];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AmbientProperties_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AmbientProperties_t qt_meta_stringdata_AmbientProperties = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AmbientProperties"
QT_MOC_LITERAL(1, 18, 27), // "on_buttonBackground_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 27), // "on_buttonForeground_clicked"
QT_MOC_LITERAL(4, 75, 21), // "on_buttonFont_clicked"
QT_MOC_LITERAL(5, 97, 24), // "on_buttonEnabled_toggled"
QT_MOC_LITERAL(6, 122, 2) // "on"

    },
    "AmbientProperties\0on_buttonBackground_clicked\0"
    "\0on_buttonForeground_clicked\0"
    "on_buttonFont_clicked\0on_buttonEnabled_toggled\0"
    "on"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AmbientProperties[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void AmbientProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AmbientProperties *_t = static_cast<AmbientProperties *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_buttonBackground_clicked(); break;
        case 1: _t->on_buttonForeground_clicked(); break;
        case 2: _t->on_buttonFont_clicked(); break;
        case 3: _t->on_buttonEnabled_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AmbientProperties::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AmbientProperties.data,
      qt_meta_data_AmbientProperties,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AmbientProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AmbientProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AmbientProperties.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::AmbientProperties"))
        return static_cast< Ui::AmbientProperties*>(this);
    return QDialog::qt_metacast(_clname);
}

int AmbientProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
