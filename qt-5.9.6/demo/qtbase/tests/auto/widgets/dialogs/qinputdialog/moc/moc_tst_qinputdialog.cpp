/****************************************************************************
** Meta object code from reading C++ file 'tst_qinputdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qinputdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qinputdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QInputDialog_t {
    QByteArrayData data[14];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QInputDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QInputDialog_t qt_meta_stringdata_tst_QInputDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "tst_QInputDialog"
QT_MOC_LITERAL(1, 17, 11), // "getInt_data"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "getInt"
QT_MOC_LITERAL(4, 37, 14), // "getDouble_data"
QT_MOC_LITERAL(5, 52, 9), // "getDouble"
QT_MOC_LITERAL(6, 62, 57), // "taskQTBUG_54693_crashWhenPare..."
QT_MOC_LITERAL(7, 120, 19), // "task255502getDouble"
QT_MOC_LITERAL(8, 140, 12), // "getText_data"
QT_MOC_LITERAL(9, 153, 7), // "getText"
QT_MOC_LITERAL(10, 161, 12), // "getItem_data"
QT_MOC_LITERAL(11, 174, 7), // "getItem"
QT_MOC_LITERAL(12, 182, 44), // "task256299_getTextReturnNullS..."
QT_MOC_LITERAL(13, 227, 29) // "inputMethodHintsOfChildWidget"

    },
    "tst_QInputDialog\0getInt_data\0\0getInt\0"
    "getDouble_data\0getDouble\0"
    "taskQTBUG_54693_crashWhenParentIsDeletedWhileDialogIsOpen\0"
    "task255502getDouble\0getText_data\0"
    "getText\0getItem_data\0getItem\0"
    "task256299_getTextReturnNullStringOnRejected\0"
    "inputMethodHintsOfChildWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QInputDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
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

       0        // eod
};

void tst_QInputDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QInputDialog *_t = static_cast<tst_QInputDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getInt_data(); break;
        case 1: _t->getInt(); break;
        case 2: _t->getDouble_data(); break;
        case 3: _t->getDouble(); break;
        case 4: _t->taskQTBUG_54693_crashWhenParentIsDeletedWhileDialogIsOpen(); break;
        case 5: _t->task255502getDouble(); break;
        case 6: _t->getText_data(); break;
        case 7: _t->getText(); break;
        case 8: _t->getItem_data(); break;
        case 9: _t->getItem(); break;
        case 10: _t->task256299_getTextReturnNullStringOnRejected(); break;
        case 11: _t->inputMethodHintsOfChildWidget(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QInputDialog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QInputDialog.data,
      qt_meta_data_tst_QInputDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QInputDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QInputDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QInputDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QInputDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
struct qt_meta_stringdata_SelfDestructParent_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelfDestructParent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelfDestructParent_t qt_meta_stringdata_SelfDestructParent = {
    {
QT_MOC_LITERAL(0, 0, 18) // "SelfDestructParent"

    },
    "SelfDestructParent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelfDestructParent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SelfDestructParent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SelfDestructParent::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SelfDestructParent.data,
      qt_meta_data_SelfDestructParent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SelfDestructParent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelfDestructParent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelfDestructParent.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SelfDestructParent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
