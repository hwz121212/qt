/****************************************************************************
** Meta object code from reading C++ file 'tst_qcompleter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qcompleter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qcompleter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CsvCompleter_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CsvCompleter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CsvCompleter_t qt_meta_stringdata_CsvCompleter = {
    {
QT_MOC_LITERAL(0, 0, 12) // "CsvCompleter"

    },
    "CsvCompleter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CsvCompleter[] = {

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

void CsvCompleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CsvCompleter::staticMetaObject = {
    { &QCompleter::staticMetaObject, qt_meta_stringdata_CsvCompleter.data,
      qt_meta_data_CsvCompleter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CsvCompleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CsvCompleter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CsvCompleter.stringdata0))
        return static_cast<void*>(this);
    return QCompleter::qt_metacast(_clname);
}

int CsvCompleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCompleter::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_tst_QCompleter_t {
    QByteArrayData data[41];
    char stringdata0[908];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QCompleter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QCompleter_t qt_meta_stringdata_tst_QCompleter = {
    {
QT_MOC_LITERAL(0, 0, 14), // "tst_QCompleter"
QT_MOC_LITERAL(1, 15, 11), // "getSetCheck"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "multipleWidgets"
QT_MOC_LITERAL(4, 44, 7), // "focusIn"
QT_MOC_LITERAL(5, 52, 30), // "csMatchingOnCsSortedModel_data"
QT_MOC_LITERAL(6, 83, 25), // "csMatchingOnCsSortedModel"
QT_MOC_LITERAL(7, 109, 30), // "ciMatchingOnCiSortedModel_data"
QT_MOC_LITERAL(8, 140, 25), // "ciMatchingOnCiSortedModel"
QT_MOC_LITERAL(9, 166, 30), // "ciMatchingOnCsSortedModel_data"
QT_MOC_LITERAL(10, 197, 25), // "ciMatchingOnCsSortedModel"
QT_MOC_LITERAL(11, 223, 30), // "csMatchingOnCiSortedModel_data"
QT_MOC_LITERAL(12, 254, 25), // "csMatchingOnCiSortedModel"
QT_MOC_LITERAL(13, 280, 19), // "directoryModel_data"
QT_MOC_LITERAL(14, 300, 14), // "directoryModel"
QT_MOC_LITERAL(15, 315, 20), // "fileSystemModel_data"
QT_MOC_LITERAL(16, 336, 15), // "fileSystemModel"
QT_MOC_LITERAL(17, 352, 18), // "changingModel_data"
QT_MOC_LITERAL(18, 371, 13), // "changingModel"
QT_MOC_LITERAL(19, 385, 25), // "sortedEngineRowCount_data"
QT_MOC_LITERAL(20, 411, 20), // "sortedEngineRowCount"
QT_MOC_LITERAL(21, 432, 27), // "unsortedEngineRowCount_data"
QT_MOC_LITERAL(22, 460, 22), // "unsortedEngineRowCount"
QT_MOC_LITERAL(23, 483, 10), // "currentRow"
QT_MOC_LITERAL(24, 494, 25), // "sortedEngineMapFromSource"
QT_MOC_LITERAL(25, 520, 27), // "unsortedEngineMapFromSource"
QT_MOC_LITERAL(26, 548, 13), // "historySearch"
QT_MOC_LITERAL(27, 562, 13), // "modelDeletion"
QT_MOC_LITERAL(28, 576, 7), // "setters"
QT_MOC_LITERAL(29, 584, 16), // "dynamicSortOrder"
QT_MOC_LITERAL(30, 601, 13), // "disabledItems"
QT_MOC_LITERAL(31, 615, 28), // "task178797_activatedOnReturn"
QT_MOC_LITERAL(32, 644, 33), // "task189564_omitNonSelectableI..."
QT_MOC_LITERAL(33, 678, 30), // "task246056_setCompletionPrefix"
QT_MOC_LITERAL(34, 709, 20), // "task250064_lostFocus"
QT_MOC_LITERAL(35, 730, 34), // "task253125_lineEditCompletion..."
QT_MOC_LITERAL(36, 765, 29), // "task253125_lineEditCompletion"
QT_MOC_LITERAL(37, 795, 29), // "task247560_keyboardNavigation"
QT_MOC_LITERAL(38, 825, 22), // "QTBUG_14292_filesystem"
QT_MOC_LITERAL(39, 848, 28), // "QTBUG_52028_tabAutoCompletes"
QT_MOC_LITERAL(40, 877, 30) // "QTBUG_51889_activatedSentTwice"

    },
    "tst_QCompleter\0getSetCheck\0\0multipleWidgets\0"
    "focusIn\0csMatchingOnCsSortedModel_data\0"
    "csMatchingOnCsSortedModel\0"
    "ciMatchingOnCiSortedModel_data\0"
    "ciMatchingOnCiSortedModel\0"
    "ciMatchingOnCsSortedModel_data\0"
    "ciMatchingOnCsSortedModel\0"
    "csMatchingOnCiSortedModel_data\0"
    "csMatchingOnCiSortedModel\0directoryModel_data\0"
    "directoryModel\0fileSystemModel_data\0"
    "fileSystemModel\0changingModel_data\0"
    "changingModel\0sortedEngineRowCount_data\0"
    "sortedEngineRowCount\0unsortedEngineRowCount_data\0"
    "unsortedEngineRowCount\0currentRow\0"
    "sortedEngineMapFromSource\0"
    "unsortedEngineMapFromSource\0historySearch\0"
    "modelDeletion\0setters\0dynamicSortOrder\0"
    "disabledItems\0task178797_activatedOnReturn\0"
    "task189564_omitNonSelectableItems\0"
    "task246056_setCompletionPrefix\0"
    "task250064_lostFocus\0"
    "task253125_lineEditCompletion_data\0"
    "task253125_lineEditCompletion\0"
    "task247560_keyboardNavigation\0"
    "QTBUG_14292_filesystem\0"
    "QTBUG_52028_tabAutoCompletes\0"
    "QTBUG_51889_activatedSentTwice"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QCompleter[] = {

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
       1,    0,  209,    2, 0x08 /* Private */,
       3,    0,  210,    2, 0x08 /* Private */,
       4,    0,  211,    2, 0x08 /* Private */,
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
      39,    0,  246,    2, 0x08 /* Private */,
      40,    0,  247,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tst_QCompleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QCompleter *_t = static_cast<tst_QCompleter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getSetCheck(); break;
        case 1: _t->multipleWidgets(); break;
        case 2: _t->focusIn(); break;
        case 3: _t->csMatchingOnCsSortedModel_data(); break;
        case 4: _t->csMatchingOnCsSortedModel(); break;
        case 5: _t->ciMatchingOnCiSortedModel_data(); break;
        case 6: _t->ciMatchingOnCiSortedModel(); break;
        case 7: _t->ciMatchingOnCsSortedModel_data(); break;
        case 8: _t->ciMatchingOnCsSortedModel(); break;
        case 9: _t->csMatchingOnCiSortedModel_data(); break;
        case 10: _t->csMatchingOnCiSortedModel(); break;
        case 11: _t->directoryModel_data(); break;
        case 12: _t->directoryModel(); break;
        case 13: _t->fileSystemModel_data(); break;
        case 14: _t->fileSystemModel(); break;
        case 15: _t->changingModel_data(); break;
        case 16: _t->changingModel(); break;
        case 17: _t->sortedEngineRowCount_data(); break;
        case 18: _t->sortedEngineRowCount(); break;
        case 19: _t->unsortedEngineRowCount_data(); break;
        case 20: _t->unsortedEngineRowCount(); break;
        case 21: _t->currentRow(); break;
        case 22: _t->sortedEngineMapFromSource(); break;
        case 23: _t->unsortedEngineMapFromSource(); break;
        case 24: _t->historySearch(); break;
        case 25: _t->modelDeletion(); break;
        case 26: _t->setters(); break;
        case 27: _t->dynamicSortOrder(); break;
        case 28: _t->disabledItems(); break;
        case 29: _t->task178797_activatedOnReturn(); break;
        case 30: _t->task189564_omitNonSelectableItems(); break;
        case 31: _t->task246056_setCompletionPrefix(); break;
        case 32: _t->task250064_lostFocus(); break;
        case 33: _t->task253125_lineEditCompletion_data(); break;
        case 34: _t->task253125_lineEditCompletion(); break;
        case 35: _t->task247560_keyboardNavigation(); break;
        case 36: _t->QTBUG_14292_filesystem(); break;
        case 37: _t->QTBUG_52028_tabAutoCompletes(); break;
        case 38: _t->QTBUG_51889_activatedSentTwice(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QCompleter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QCompleter.data,
      qt_meta_data_tst_QCompleter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QCompleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QCompleter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QCompleter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QCompleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_task246056_ComboBox_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_task246056_ComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_task246056_ComboBox_t qt_meta_stringdata_task246056_ComboBox = {
    {
QT_MOC_LITERAL(0, 0, 19), // "task246056_ComboBox"
QT_MOC_LITERAL(1, 20, 19), // "setCompletionPrefix"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "task246056_ComboBox\0setCompletionPrefix\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_task246056_ComboBox[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void task246056_ComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        task246056_ComboBox *_t = static_cast<task246056_ComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCompletionPrefix(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject task246056_ComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_task246056_ComboBox.data,
      qt_meta_data_task246056_ComboBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *task246056_ComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *task246056_ComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_task246056_ComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int task246056_ComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_task250064_Widget_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_task250064_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_task250064_Widget_t qt_meta_stringdata_task250064_Widget = {
    {
QT_MOC_LITERAL(0, 0, 17) // "task250064_Widget"

    },
    "task250064_Widget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_task250064_Widget[] = {

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

void task250064_Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject task250064_Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_task250064_Widget.data,
      qt_meta_data_task250064_Widget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *task250064_Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *task250064_Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_task250064_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int task250064_Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
