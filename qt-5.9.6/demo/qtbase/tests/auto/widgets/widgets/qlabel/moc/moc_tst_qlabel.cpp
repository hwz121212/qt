/****************************************************************************
** Meta object code from reading C++ file 'tst_qlabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qlabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qlabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[1];
    char stringdata0[7];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6) // "Widget"

    },
    "Widget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

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

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_tst_QLabel_t {
    QByteArrayData data[29];
    char stringdata0[389];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QLabel_t qt_meta_stringdata_tst_QLabel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "tst_QLabel"
QT_MOC_LITERAL(1, 11, 12), // "initTestCase"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 15), // "cleanupTestCase"
QT_MOC_LITERAL(4, 41, 4), // "init"
QT_MOC_LITERAL(5, 46, 7), // "cleanup"
QT_MOC_LITERAL(6, 54, 11), // "getSetCheck"
QT_MOC_LITERAL(7, 66, 12), // "setText_data"
QT_MOC_LITERAL(8, 79, 7), // "setText"
QT_MOC_LITERAL(9, 87, 13), // "setTextFormat"
QT_MOC_LITERAL(10, 101, 8), // "setBuddy"
QT_MOC_LITERAL(11, 110, 6), // "setNum"
QT_MOC_LITERAL(12, 117, 5), // "clear"
QT_MOC_LITERAL(13, 123, 8), // "wordWrap"
QT_MOC_LITERAL(14, 132, 21), // "eventPropagation_data"
QT_MOC_LITERAL(15, 154, 16), // "eventPropagation"
QT_MOC_LITERAL(16, 171, 11), // "focusPolicy"
QT_MOC_LITERAL(17, 183, 16), // "task190318_sizes"
QT_MOC_LITERAL(18, 200, 8), // "sizeHint"
QT_MOC_LITERAL(19, 209, 22), // "task226479_movieResize"
QT_MOC_LITERAL(20, 232, 11), // "emptyPixmap"
QT_MOC_LITERAL(21, 244, 16), // "unicodeText_data"
QT_MOC_LITERAL(22, 261, 11), // "unicodeText"
QT_MOC_LITERAL(23, 273, 13), // "mnemonic_data"
QT_MOC_LITERAL(24, 287, 8), // "mnemonic"
QT_MOC_LITERAL(25, 296, 9), // "selection"
QT_MOC_LITERAL(26, 306, 31), // "taskQTBUG_7902_contextMenuCrash"
QT_MOC_LITERAL(27, 338, 25), // "taskQTBUG_48157_dprPixmap"
QT_MOC_LITERAL(28, 364, 24) // "taskQTBUG_48157_dprMovie"

    },
    "tst_QLabel\0initTestCase\0\0cleanupTestCase\0"
    "init\0cleanup\0getSetCheck\0setText_data\0"
    "setText\0setTextFormat\0setBuddy\0setNum\0"
    "clear\0wordWrap\0eventPropagation_data\0"
    "eventPropagation\0focusPolicy\0"
    "task190318_sizes\0sizeHint\0"
    "task226479_movieResize\0emptyPixmap\0"
    "unicodeText_data\0unicodeText\0mnemonic_data\0"
    "mnemonic\0selection\0taskQTBUG_7902_contextMenuCrash\0"
    "taskQTBUG_48157_dprPixmap\0"
    "taskQTBUG_48157_dprMovie"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  149,    2, 0x08 /* Private */,
       3,    0,  150,    2, 0x08 /* Private */,
       4,    0,  151,    2, 0x08 /* Private */,
       5,    0,  152,    2, 0x08 /* Private */,
       6,    0,  153,    2, 0x08 /* Private */,
       7,    0,  154,    2, 0x08 /* Private */,
       8,    0,  155,    2, 0x08 /* Private */,
       9,    0,  156,    2, 0x08 /* Private */,
      10,    0,  157,    2, 0x08 /* Private */,
      11,    0,  158,    2, 0x08 /* Private */,
      12,    0,  159,    2, 0x08 /* Private */,
      13,    0,  160,    2, 0x08 /* Private */,
      14,    0,  161,    2, 0x08 /* Private */,
      15,    0,  162,    2, 0x08 /* Private */,
      16,    0,  163,    2, 0x08 /* Private */,
      17,    0,  164,    2, 0x08 /* Private */,
      18,    0,  165,    2, 0x08 /* Private */,
      19,    0,  166,    2, 0x08 /* Private */,
      20,    0,  167,    2, 0x08 /* Private */,
      21,    0,  168,    2, 0x08 /* Private */,
      22,    0,  169,    2, 0x08 /* Private */,
      23,    0,  170,    2, 0x08 /* Private */,
      24,    0,  171,    2, 0x08 /* Private */,
      25,    0,  172,    2, 0x08 /* Private */,
      26,    0,  173,    2, 0x08 /* Private */,
      27,    0,  174,    2, 0x08 /* Private */,
      28,    0,  175,    2, 0x08 /* Private */,

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

       0        // eod
};

void tst_QLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QLabel *_t = static_cast<tst_QLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanupTestCase(); break;
        case 2: _t->init(); break;
        case 3: _t->cleanup(); break;
        case 4: _t->getSetCheck(); break;
        case 5: _t->setText_data(); break;
        case 6: _t->setText(); break;
        case 7: _t->setTextFormat(); break;
        case 8: _t->setBuddy(); break;
        case 9: _t->setNum(); break;
        case 10: _t->clear(); break;
        case 11: _t->wordWrap(); break;
        case 12: _t->eventPropagation_data(); break;
        case 13: _t->eventPropagation(); break;
        case 14: _t->focusPolicy(); break;
        case 15: _t->task190318_sizes(); break;
        case 16: _t->sizeHint(); break;
        case 17: _t->task226479_movieResize(); break;
        case 18: _t->emptyPixmap(); break;
        case 19: _t->unicodeText_data(); break;
        case 20: _t->unicodeText(); break;
        case 21: _t->mnemonic_data(); break;
        case 22: _t->mnemonic(); break;
        case 23: _t->selection(); break;
        case 24: _t->taskQTBUG_7902_contextMenuCrash(); break;
        case 25: _t->taskQTBUG_48157_dprPixmap(); break;
        case 26: _t->taskQTBUG_48157_dprMovie(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QLabel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QLabel.data,
      qt_meta_data_tst_QLabel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QLabel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 27;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
