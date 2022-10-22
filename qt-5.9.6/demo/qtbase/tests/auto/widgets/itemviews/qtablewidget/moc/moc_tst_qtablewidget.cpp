/****************************************************************************
** Meta object code from reading C++ file 'tst_qtablewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qtablewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qtablewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QObjectTableItem_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QObjectTableItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QObjectTableItem_t qt_meta_stringdata_QObjectTableItem = {
    {
QT_MOC_LITERAL(0, 0, 16) // "QObjectTableItem"

    },
    "QObjectTableItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QObjectTableItem[] = {

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

void QObjectTableItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QObjectTableItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QObjectTableItem.data,
      qt_meta_data_QObjectTableItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QObjectTableItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QObjectTableItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QObjectTableItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QTableWidgetItem"))
        return static_cast< QTableWidgetItem*>(this);
    return QObject::qt_metacast(_clname);
}

int QObjectTableItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_tst_QTableWidget_t {
    QByteArrayData data[41];
    char stringdata0[564];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QTableWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QTableWidget_t qt_meta_stringdata_tst_QTableWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "tst_QTableWidget"
QT_MOC_LITERAL(1, 17, 12), // "initTestCase"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "cleanupTestCase"
QT_MOC_LITERAL(4, 47, 4), // "init"
QT_MOC_LITERAL(5, 52, 11), // "getSetCheck"
QT_MOC_LITERAL(6, 64, 5), // "clear"
QT_MOC_LITERAL(7, 70, 13), // "clearContents"
QT_MOC_LITERAL(8, 84, 8), // "rowCount"
QT_MOC_LITERAL(9, 93, 11), // "columnCount"
QT_MOC_LITERAL(10, 105, 14), // "itemAssignment"
QT_MOC_LITERAL(11, 120, 9), // "item_data"
QT_MOC_LITERAL(12, 130, 4), // "item"
QT_MOC_LITERAL(13, 135, 13), // "takeItem_data"
QT_MOC_LITERAL(14, 149, 8), // "takeItem"
QT_MOC_LITERAL(15, 158, 18), // "selectedItems_data"
QT_MOC_LITERAL(16, 177, 13), // "selectedItems"
QT_MOC_LITERAL(17, 191, 14), // "removeRow_data"
QT_MOC_LITERAL(18, 206, 9), // "removeRow"
QT_MOC_LITERAL(19, 216, 17), // "removeColumn_data"
QT_MOC_LITERAL(20, 234, 12), // "removeColumn"
QT_MOC_LITERAL(21, 247, 14), // "insertRow_data"
QT_MOC_LITERAL(22, 262, 9), // "insertRow"
QT_MOC_LITERAL(23, 272, 17), // "insertColumn_data"
QT_MOC_LITERAL(24, 290, 12), // "insertColumn"
QT_MOC_LITERAL(25, 303, 18), // "itemStreaming_data"
QT_MOC_LITERAL(26, 322, 13), // "itemStreaming"
QT_MOC_LITERAL(27, 336, 13), // "itemOwnership"
QT_MOC_LITERAL(28, 350, 14), // "sortItems_data"
QT_MOC_LITERAL(29, 365, 9), // "sortItems"
QT_MOC_LITERAL(30, 375, 23), // "setItemWithSorting_data"
QT_MOC_LITERAL(31, 399, 18), // "setItemWithSorting"
QT_MOC_LITERAL(32, 418, 8), // "itemData"
QT_MOC_LITERAL(33, 427, 11), // "setItemData"
QT_MOC_LITERAL(34, 439, 10), // "cellWidget"
QT_MOC_LITERAL(35, 450, 10), // "task231094"
QT_MOC_LITERAL(36, 461, 24), // "task219380_removeLastRow"
QT_MOC_LITERAL(37, 486, 24), // "task262056_sortDuplicate"
QT_MOC_LITERAL(38, 511, 19), // "itemWithHeaderItems"
QT_MOC_LITERAL(39, 531, 8), // "mimeData"
QT_MOC_LITERAL(40, 540, 23) // "selectedRowAfterSorting"

    },
    "tst_QTableWidget\0initTestCase\0\0"
    "cleanupTestCase\0init\0getSetCheck\0clear\0"
    "clearContents\0rowCount\0columnCount\0"
    "itemAssignment\0item_data\0item\0"
    "takeItem_data\0takeItem\0selectedItems_data\0"
    "selectedItems\0removeRow_data\0removeRow\0"
    "removeColumn_data\0removeColumn\0"
    "insertRow_data\0insertRow\0insertColumn_data\0"
    "insertColumn\0itemStreaming_data\0"
    "itemStreaming\0itemOwnership\0sortItems_data\0"
    "sortItems\0setItemWithSorting_data\0"
    "setItemWithSorting\0itemData\0setItemData\0"
    "cellWidget\0task231094\0task219380_removeLastRow\0"
    "task262056_sortDuplicate\0itemWithHeaderItems\0"
    "mimeData\0selectedRowAfterSorting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QTableWidget[] = {

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

void tst_QTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QTableWidget *_t = static_cast<tst_QTableWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanupTestCase(); break;
        case 2: _t->init(); break;
        case 3: _t->getSetCheck(); break;
        case 4: _t->clear(); break;
        case 5: _t->clearContents(); break;
        case 6: _t->rowCount(); break;
        case 7: _t->columnCount(); break;
        case 8: _t->itemAssignment(); break;
        case 9: _t->item_data(); break;
        case 10: _t->item(); break;
        case 11: _t->takeItem_data(); break;
        case 12: _t->takeItem(); break;
        case 13: _t->selectedItems_data(); break;
        case 14: _t->selectedItems(); break;
        case 15: _t->removeRow_data(); break;
        case 16: _t->removeRow(); break;
        case 17: _t->removeColumn_data(); break;
        case 18: _t->removeColumn(); break;
        case 19: _t->insertRow_data(); break;
        case 20: _t->insertRow(); break;
        case 21: _t->insertColumn_data(); break;
        case 22: _t->insertColumn(); break;
        case 23: _t->itemStreaming_data(); break;
        case 24: _t->itemStreaming(); break;
        case 25: _t->itemOwnership(); break;
        case 26: _t->sortItems_data(); break;
        case 27: _t->sortItems(); break;
        case 28: _t->setItemWithSorting_data(); break;
        case 29: _t->setItemWithSorting(); break;
        case 30: _t->itemData(); break;
        case 31: _t->setItemData(); break;
        case 32: _t->cellWidget(); break;
        case 33: _t->task231094(); break;
        case 34: _t->task219380_removeLastRow(); break;
        case 35: _t->task262056_sortDuplicate(); break;
        case 36: _t->itemWithHeaderItems(); break;
        case 37: _t->mimeData(); break;
        case 38: _t->selectedRowAfterSorting(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QTableWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QTableWidget.data,
      qt_meta_data_tst_QTableWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QTableWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_TestTableWidget_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestTableWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestTableWidget_t qt_meta_stringdata_TestTableWidget = {
    {
QT_MOC_LITERAL(0, 0, 15) // "TestTableWidget"

    },
    "TestTableWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestTableWidget[] = {

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

void TestTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TestTableWidget::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_TestTableWidget.data,
      qt_meta_data_TestTableWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TestTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestTableWidget.stringdata0))
        return static_cast<void*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int TestTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
