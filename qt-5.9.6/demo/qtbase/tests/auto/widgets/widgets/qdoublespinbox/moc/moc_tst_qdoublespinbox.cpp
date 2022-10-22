/****************************************************************************
** Meta object code from reading C++ file 'tst_qdoublespinbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qdoublespinbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qdoublespinbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DoubleSpinBox_t {
    QByteArrayData data[4];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DoubleSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DoubleSpinBox_t qt_meta_stringdata_DoubleSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DoubleSpinBox"
QT_MOC_LITERAL(1, 14, 3), // "foo"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 3) // "vla"

    },
    "DoubleSpinBox\0foo\0\0vla"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DoubleSpinBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,

       0        // eod
};

void DoubleSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DoubleSpinBox *_t = static_cast<DoubleSpinBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->foo((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DoubleSpinBox::staticMetaObject = {
    { &QDoubleSpinBox::staticMetaObject, qt_meta_stringdata_DoubleSpinBox.data,
      qt_meta_data_DoubleSpinBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DoubleSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DoubleSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DoubleSpinBox.stringdata0))
        return static_cast<void*>(this);
    return QDoubleSpinBox::qt_metacast(_clname);
}

int DoubleSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDoubleSpinBox::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_tst_QDoubleSpinBox_t {
    QByteArrayData data[40];
    char stringdata0[705];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QDoubleSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QDoubleSpinBox_t qt_meta_stringdata_tst_QDoubleSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 18), // "tst_QDoubleSpinBox"
QT_MOC_LITERAL(1, 19, 12), // "initTestCase"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "cleanupTestCase"
QT_MOC_LITERAL(4, 49, 4), // "init"
QT_MOC_LITERAL(5, 54, 10), // "germanTest"
QT_MOC_LITERAL(6, 65, 9), // "task54433"
QT_MOC_LITERAL(7, 75, 13), // "setValue_data"
QT_MOC_LITERAL(8, 89, 8), // "setValue"
QT_MOC_LITERAL(9, 98, 20), // "setPrefixSuffix_data"
QT_MOC_LITERAL(10, 119, 15), // "setPrefixSuffix"
QT_MOC_LITERAL(11, 135, 16), // "setTracking_data"
QT_MOC_LITERAL(12, 152, 11), // "setTracking"
QT_MOC_LITERAL(13, 164, 16), // "setWrapping_data"
QT_MOC_LITERAL(14, 181, 11), // "setWrapping"
QT_MOC_LITERAL(15, 193, 24), // "setSpecialValueText_data"
QT_MOC_LITERAL(16, 218, 19), // "setSpecialValueText"
QT_MOC_LITERAL(17, 238, 18), // "setSingleStep_data"
QT_MOC_LITERAL(18, 257, 13), // "setSingleStep"
QT_MOC_LITERAL(19, 271, 14), // "setMinMax_data"
QT_MOC_LITERAL(20, 286, 9), // "setMinMax"
QT_MOC_LITERAL(21, 296, 16), // "setDecimals_data"
QT_MOC_LITERAL(22, 313, 11), // "setDecimals"
QT_MOC_LITERAL(23, 325, 9), // "doubleDot"
QT_MOC_LITERAL(24, 335, 8), // "undoRedo"
QT_MOC_LITERAL(25, 344, 29), // "valueFromTextAndValidate_data"
QT_MOC_LITERAL(26, 374, 24), // "valueFromTextAndValidate"
QT_MOC_LITERAL(27, 399, 11), // "setReadOnly"
QT_MOC_LITERAL(28, 411, 15), // "editingFinished"
QT_MOC_LITERAL(29, 427, 9), // "removeAll"
QT_MOC_LITERAL(30, 437, 26), // "task199226_stateAfterEnter"
QT_MOC_LITERAL(31, 464, 17), // "task224497_fltMax"
QT_MOC_LITERAL(32, 482, 10), // "task221221"
QT_MOC_LITERAL(33, 493, 29), // "task255471_decimalsValidation"
QT_MOC_LITERAL(34, 523, 39), // "taskQTBUG_5008_textFromValueA..."
QT_MOC_LITERAL(35, 563, 34), // "taskQTBUG_6670_selectAllWithP..."
QT_MOC_LITERAL(36, 598, 36), // "taskQTBUG_6496_fiddlingWithPr..."
QT_MOC_LITERAL(37, 635, 27), // "setGroupSeparatorShown_data"
QT_MOC_LITERAL(38, 663, 22), // "setGroupSeparatorShown"
QT_MOC_LITERAL(39, 686, 18) // "valueChangedHelper"

    },
    "tst_QDoubleSpinBox\0initTestCase\0\0"
    "cleanupTestCase\0init\0germanTest\0"
    "task54433\0setValue_data\0setValue\0"
    "setPrefixSuffix_data\0setPrefixSuffix\0"
    "setTracking_data\0setTracking\0"
    "setWrapping_data\0setWrapping\0"
    "setSpecialValueText_data\0setSpecialValueText\0"
    "setSingleStep_data\0setSingleStep\0"
    "setMinMax_data\0setMinMax\0setDecimals_data\0"
    "setDecimals\0doubleDot\0undoRedo\0"
    "valueFromTextAndValidate_data\0"
    "valueFromTextAndValidate\0setReadOnly\0"
    "editingFinished\0removeAll\0"
    "task199226_stateAfterEnter\0task224497_fltMax\0"
    "task221221\0task255471_decimalsValidation\0"
    "taskQTBUG_5008_textFromValueAndValidate\0"
    "taskQTBUG_6670_selectAllWithPrefix\0"
    "taskQTBUG_6496_fiddlingWithPrecision\0"
    "setGroupSeparatorShown_data\0"
    "setGroupSeparatorShown\0valueChangedHelper"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QDoubleSpinBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  209,    2, 0x0a /* Public */,
       3,    0,  210,    2, 0x0a /* Public */,
       4,    0,  211,    2, 0x0a /* Public */,
       5,    0,  212,    2, 0x08 /* Private */,
       6,    0,  213,    2, 0x08 /* Private */,
       7,    0,  214,    2, 0x08 /* Private */,
       8,    0,  215,    2, 0x08 /* Private */,
       9,    0,  216,    2, 0x08 /* Private */,
      10,    0,  217,    2, 0x08 /* Private */,
      11,    0,  218,    2, 0x08 /* Private */,
      12,    0,  219,    2, 0x08 /* Private */,
      13,    0,  220,    2, 0x08 /* Private */,
      14,    0,  221,    2, 0x08 /* Private */,
      15,    0,  222,    2, 0x08 /* Private */,
      16,    0,  223,    2, 0x08 /* Private */,
      17,    0,  224,    2, 0x08 /* Private */,
      18,    0,  225,    2, 0x08 /* Private */,
      19,    0,  226,    2, 0x08 /* Private */,
      20,    0,  227,    2, 0x08 /* Private */,
      21,    0,  228,    2, 0x08 /* Private */,
      22,    0,  229,    2, 0x08 /* Private */,
      23,    0,  230,    2, 0x08 /* Private */,
      24,    0,  231,    2, 0x08 /* Private */,
      25,    0,  232,    2, 0x08 /* Private */,
      26,    0,  233,    2, 0x08 /* Private */,
      27,    0,  234,    2, 0x08 /* Private */,
      28,    0,  235,    2, 0x08 /* Private */,
      29,    0,  236,    2, 0x08 /* Private */,
      30,    0,  237,    2, 0x08 /* Private */,
      31,    0,  238,    2, 0x08 /* Private */,
      32,    0,  239,    2, 0x08 /* Private */,
      33,    0,  240,    2, 0x08 /* Private */,
      34,    0,  241,    2, 0x08 /* Private */,
      35,    0,  242,    2, 0x08 /* Private */,
      36,    0,  243,    2, 0x08 /* Private */,
      37,    0,  244,    2, 0x08 /* Private */,
      38,    0,  245,    2, 0x08 /* Private */,
      39,    1,  246,    2, 0x0a /* Public */,
      39,    1,  249,    2, 0x0a /* Public */,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void tst_QDoubleSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QDoubleSpinBox *_t = static_cast<tst_QDoubleSpinBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanupTestCase(); break;
        case 2: _t->init(); break;
        case 3: _t->germanTest(); break;
        case 4: _t->task54433(); break;
        case 5: _t->setValue_data(); break;
        case 6: _t->setValue(); break;
        case 7: _t->setPrefixSuffix_data(); break;
        case 8: _t->setPrefixSuffix(); break;
        case 9: _t->setTracking_data(); break;
        case 10: _t->setTracking(); break;
        case 11: _t->setWrapping_data(); break;
        case 12: _t->setWrapping(); break;
        case 13: _t->setSpecialValueText_data(); break;
        case 14: _t->setSpecialValueText(); break;
        case 15: _t->setSingleStep_data(); break;
        case 16: _t->setSingleStep(); break;
        case 17: _t->setMinMax_data(); break;
        case 18: _t->setMinMax(); break;
        case 19: _t->setDecimals_data(); break;
        case 20: _t->setDecimals(); break;
        case 21: _t->doubleDot(); break;
        case 22: _t->undoRedo(); break;
        case 23: _t->valueFromTextAndValidate_data(); break;
        case 24: _t->valueFromTextAndValidate(); break;
        case 25: _t->setReadOnly(); break;
        case 26: _t->editingFinished(); break;
        case 27: _t->removeAll(); break;
        case 28: _t->task199226_stateAfterEnter(); break;
        case 29: _t->task224497_fltMax(); break;
        case 30: _t->task221221(); break;
        case 31: _t->task255471_decimalsValidation(); break;
        case 32: _t->taskQTBUG_5008_textFromValueAndValidate(); break;
        case 33: _t->taskQTBUG_6670_selectAllWithPrefix(); break;
        case 34: _t->taskQTBUG_6496_fiddlingWithPrecision(); break;
        case 35: _t->setGroupSeparatorShown_data(); break;
        case 36: _t->setGroupSeparatorShown(); break;
        case 37: _t->valueChangedHelper((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: _t->valueChangedHelper((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject tst_QDoubleSpinBox::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QDoubleSpinBox.data,
      qt_meta_data_tst_QDoubleSpinBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QDoubleSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QDoubleSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QDoubleSpinBox.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QDoubleSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 39;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
