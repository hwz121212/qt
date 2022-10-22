/****************************************************************************
** Meta object code from reading C++ file 'tst_qfontcombobox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qfontcombobox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qfontcombobox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QFontComboBox_t {
    QByteArrayData data[12];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QFontComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QFontComboBox_t qt_meta_stringdata_tst_QFontComboBox = {
    {
QT_MOC_LITERAL(0, 0, 17), // "tst_QFontComboBox"
QT_MOC_LITERAL(1, 18, 18), // "qfontcombobox_data"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "qfontcombobox"
QT_MOC_LITERAL(4, 52, 16), // "currentFont_data"
QT_MOC_LITERAL(5, 69, 11), // "currentFont"
QT_MOC_LITERAL(6, 81, 16), // "fontFilters_data"
QT_MOC_LITERAL(7, 98, 11), // "fontFilters"
QT_MOC_LITERAL(8, 110, 8), // "sizeHint"
QT_MOC_LITERAL(9, 119, 18), // "writingSystem_data"
QT_MOC_LITERAL(10, 138, 13), // "writingSystem"
QT_MOC_LITERAL(11, 152, 18) // "currentFontChanged"

    },
    "tst_QFontComboBox\0qfontcombobox_data\0"
    "\0qfontcombobox\0currentFont_data\0"
    "currentFont\0fontFilters_data\0fontFilters\0"
    "sizeHint\0writingSystem_data\0writingSystem\0"
    "currentFontChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QFontComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

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

       0        // eod
};

void tst_QFontComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QFontComboBox *_t = static_cast<tst_QFontComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->qfontcombobox_data(); break;
        case 1: _t->qfontcombobox(); break;
        case 2: _t->currentFont_data(); break;
        case 3: _t->currentFont(); break;
        case 4: _t->fontFilters_data(); break;
        case 5: _t->fontFilters(); break;
        case 6: _t->sizeHint(); break;
        case 7: _t->writingSystem_data(); break;
        case 8: _t->writingSystem(); break;
        case 9: _t->currentFontChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QFontComboBox::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QFontComboBox.data,
      qt_meta_data_tst_QFontComboBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QFontComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QFontComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QFontComboBox.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QFontComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
