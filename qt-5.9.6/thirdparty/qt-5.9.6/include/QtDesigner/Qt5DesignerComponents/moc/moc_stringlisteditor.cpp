/****************************************************************************
** Meta object code from reading C++ file 'stringlisteditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../propertyeditor/stringlisteditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stringlisteditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__StringListEditor_t {
    QByteArrayData data[12];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__StringListEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__StringListEditor_t qt_meta_stringdata_qdesigner_internal__StringListEditor = {
    {
QT_MOC_LITERAL(0, 0, 36), // "qdesigner_internal::StringLis..."
QT_MOC_LITERAL(1, 37, 19), // "on_upButton_clicked"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 21), // "on_downButton_clicked"
QT_MOC_LITERAL(4, 80, 20), // "on_newButton_clicked"
QT_MOC_LITERAL(5, 101, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(6, 125, 23), // "on_valueEdit_textEdited"
QT_MOC_LITERAL(7, 149, 4), // "text"
QT_MOC_LITERAL(8, 154, 19), // "currentIndexChanged"
QT_MOC_LITERAL(9, 174, 7), // "current"
QT_MOC_LITERAL(10, 182, 8), // "previous"
QT_MOC_LITERAL(11, 191, 19) // "currentValueChanged"

    },
    "qdesigner_internal::StringListEditor\0"
    "on_upButton_clicked\0\0on_downButton_clicked\0"
    "on_newButton_clicked\0on_deleteButton_clicked\0"
    "on_valueEdit_textEdited\0text\0"
    "currentIndexChanged\0current\0previous\0"
    "currentValueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__StringListEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       8,    2,   56,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    9,   10,
    QMetaType::Void,

       0        // eod
};

void qdesigner_internal::StringListEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StringListEditor *_t = static_cast<StringListEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_upButton_clicked(); break;
        case 1: _t->on_downButton_clicked(); break;
        case 2: _t->on_newButton_clicked(); break;
        case 3: _t->on_deleteButton_clicked(); break;
        case 4: _t->on_valueEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->currentIndexChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 6: _t->currentValueChanged(); break;
        default: ;
        }
    }
}

const QMetaObject qdesigner_internal::StringListEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qdesigner_internal__StringListEditor.data,
      qt_meta_data_qdesigner_internal__StringListEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::StringListEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::StringListEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__StringListEditor.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qdesigner_internal::StringListEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
