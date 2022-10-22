/****************************************************************************
** Meta object code from reading C++ file 'tst_qsqltablemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qsqltablemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qsqltablemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QSqlTableModel_t {
    QByteArrayData data[76];
    char stringdata0[1335];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QSqlTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QSqlTableModel_t qt_meta_stringdata_tst_QSqlTableModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "tst_QSqlTableModel"
QT_MOC_LITERAL(1, 19, 12), // "initTestCase"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "cleanupTestCase"
QT_MOC_LITERAL(4, 49, 4), // "init"
QT_MOC_LITERAL(5, 54, 7), // "cleanup"
QT_MOC_LITERAL(6, 62, 11), // "select_data"
QT_MOC_LITERAL(7, 74, 6), // "select"
QT_MOC_LITERAL(8, 81, 14), // "selectRow_data"
QT_MOC_LITERAL(9, 96, 9), // "selectRow"
QT_MOC_LITERAL(10, 106, 22), // "selectRowOverride_data"
QT_MOC_LITERAL(11, 129, 17), // "selectRowOverride"
QT_MOC_LITERAL(12, 147, 18), // "insertColumns_data"
QT_MOC_LITERAL(13, 166, 13), // "insertColumns"
QT_MOC_LITERAL(14, 180, 14), // "submitAll_data"
QT_MOC_LITERAL(15, 195, 9), // "submitAll"
QT_MOC_LITERAL(16, 205, 12), // "setData_data"
QT_MOC_LITERAL(17, 218, 7), // "setData"
QT_MOC_LITERAL(18, 226, 14), // "setRecord_data"
QT_MOC_LITERAL(19, 241, 9), // "setRecord"
QT_MOC_LITERAL(20, 251, 20), // "setRecordReimpl_data"
QT_MOC_LITERAL(21, 272, 15), // "setRecordReimpl"
QT_MOC_LITERAL(22, 288, 17), // "recordReimpl_data"
QT_MOC_LITERAL(23, 306, 12), // "recordReimpl"
QT_MOC_LITERAL(24, 319, 14), // "insertRow_data"
QT_MOC_LITERAL(25, 334, 9), // "insertRow"
QT_MOC_LITERAL(26, 344, 21), // "insertRowFailure_data"
QT_MOC_LITERAL(27, 366, 16), // "insertRowFailure"
QT_MOC_LITERAL(28, 383, 17), // "insertRecord_data"
QT_MOC_LITERAL(29, 401, 12), // "insertRecord"
QT_MOC_LITERAL(30, 414, 23), // "insertMultiRecords_data"
QT_MOC_LITERAL(31, 438, 18), // "insertMultiRecords"
QT_MOC_LITERAL(32, 457, 25), // "insertWithAutoColumn_data"
QT_MOC_LITERAL(33, 483, 20), // "insertWithAutoColumn"
QT_MOC_LITERAL(34, 504, 14), // "removeRow_data"
QT_MOC_LITERAL(35, 519, 9), // "removeRow"
QT_MOC_LITERAL(36, 529, 15), // "removeRows_data"
QT_MOC_LITERAL(37, 545, 10), // "removeRows"
QT_MOC_LITERAL(38, 556, 22), // "removeInsertedRow_data"
QT_MOC_LITERAL(39, 579, 17), // "removeInsertedRow"
QT_MOC_LITERAL(40, 597, 23), // "removeInsertedRows_data"
QT_MOC_LITERAL(41, 621, 18), // "removeInsertedRows"
QT_MOC_LITERAL(42, 640, 11), // "revert_data"
QT_MOC_LITERAL(43, 652, 6), // "revert"
QT_MOC_LITERAL(44, 659, 12), // "isDirty_data"
QT_MOC_LITERAL(45, 672, 7), // "isDirty"
QT_MOC_LITERAL(46, 680, 14), // "setFilter_data"
QT_MOC_LITERAL(47, 695, 9), // "setFilter"
QT_MOC_LITERAL(48, 705, 21), // "setInvalidFilter_data"
QT_MOC_LITERAL(49, 727, 16), // "setInvalidFilter"
QT_MOC_LITERAL(50, 744, 15), // "emptyTable_data"
QT_MOC_LITERAL(51, 760, 10), // "emptyTable"
QT_MOC_LITERAL(52, 771, 21), // "tablesAndSchemas_data"
QT_MOC_LITERAL(53, 793, 16), // "tablesAndSchemas"
QT_MOC_LITERAL(54, 810, 28), // "whitespaceInIdentifiers_data"
QT_MOC_LITERAL(55, 839, 23), // "whitespaceInIdentifiers"
QT_MOC_LITERAL(56, 863, 20), // "primaryKeyOrder_data"
QT_MOC_LITERAL(57, 884, 15), // "primaryKeyOrder"
QT_MOC_LITERAL(58, 900, 20), // "sqlite_bigTable_data"
QT_MOC_LITERAL(59, 921, 15), // "sqlite_bigTable"
QT_MOC_LITERAL(60, 937, 29), // "insertRecordBeforeSelect_data"
QT_MOC_LITERAL(61, 967, 24), // "insertRecordBeforeSelect"
QT_MOC_LITERAL(62, 992, 28), // "submitAllOnInvalidTable_data"
QT_MOC_LITERAL(63, 1021, 23), // "submitAllOnInvalidTable"
QT_MOC_LITERAL(64, 1045, 24), // "insertRecordsInLoop_data"
QT_MOC_LITERAL(65, 1070, 19), // "insertRecordsInLoop"
QT_MOC_LITERAL(66, 1090, 28), // "sqlite_attachedDatabase_data"
QT_MOC_LITERAL(67, 1119, 23), // "sqlite_attachedDatabase"
QT_MOC_LITERAL(68, 1143, 25), // "tableModifyWithBlank_data"
QT_MOC_LITERAL(69, 1169, 20), // "tableModifyWithBlank"
QT_MOC_LITERAL(70, 1190, 23), // "removeColumnAndRow_data"
QT_MOC_LITERAL(71, 1214, 18), // "removeColumnAndRow"
QT_MOC_LITERAL(72, 1233, 23), // "insertBeforeDelete_data"
QT_MOC_LITERAL(73, 1257, 18), // "insertBeforeDelete"
QT_MOC_LITERAL(74, 1276, 31), // "invalidFilterAndHeaderData_data"
QT_MOC_LITERAL(75, 1308, 26) // "invalidFilterAndHeaderData"

    },
    "tst_QSqlTableModel\0initTestCase\0\0"
    "cleanupTestCase\0init\0cleanup\0select_data\0"
    "select\0selectRow_data\0selectRow\0"
    "selectRowOverride_data\0selectRowOverride\0"
    "insertColumns_data\0insertColumns\0"
    "submitAll_data\0submitAll\0setData_data\0"
    "setData\0setRecord_data\0setRecord\0"
    "setRecordReimpl_data\0setRecordReimpl\0"
    "recordReimpl_data\0recordReimpl\0"
    "insertRow_data\0insertRow\0insertRowFailure_data\0"
    "insertRowFailure\0insertRecord_data\0"
    "insertRecord\0insertMultiRecords_data\0"
    "insertMultiRecords\0insertWithAutoColumn_data\0"
    "insertWithAutoColumn\0removeRow_data\0"
    "removeRow\0removeRows_data\0removeRows\0"
    "removeInsertedRow_data\0removeInsertedRow\0"
    "removeInsertedRows_data\0removeInsertedRows\0"
    "revert_data\0revert\0isDirty_data\0isDirty\0"
    "setFilter_data\0setFilter\0setInvalidFilter_data\0"
    "setInvalidFilter\0emptyTable_data\0"
    "emptyTable\0tablesAndSchemas_data\0"
    "tablesAndSchemas\0whitespaceInIdentifiers_data\0"
    "whitespaceInIdentifiers\0primaryKeyOrder_data\0"
    "primaryKeyOrder\0sqlite_bigTable_data\0"
    "sqlite_bigTable\0insertRecordBeforeSelect_data\0"
    "insertRecordBeforeSelect\0"
    "submitAllOnInvalidTable_data\0"
    "submitAllOnInvalidTable\0"
    "insertRecordsInLoop_data\0insertRecordsInLoop\0"
    "sqlite_attachedDatabase_data\0"
    "sqlite_attachedDatabase\0"
    "tableModifyWithBlank_data\0"
    "tableModifyWithBlank\0removeColumnAndRow_data\0"
    "removeColumnAndRow\0insertBeforeDelete_data\0"
    "insertBeforeDelete\0invalidFilterAndHeaderData_data\0"
    "invalidFilterAndHeaderData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QSqlTableModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      74,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  384,    2, 0x0a /* Public */,
       3,    0,  385,    2, 0x0a /* Public */,
       4,    0,  386,    2, 0x0a /* Public */,
       5,    0,  387,    2, 0x0a /* Public */,
       6,    0,  388,    2, 0x08 /* Private */,
       7,    0,  389,    2, 0x08 /* Private */,
       8,    0,  390,    2, 0x08 /* Private */,
       9,    0,  391,    2, 0x08 /* Private */,
      10,    0,  392,    2, 0x08 /* Private */,
      11,    0,  393,    2, 0x08 /* Private */,
      12,    0,  394,    2, 0x08 /* Private */,
      13,    0,  395,    2, 0x08 /* Private */,
      14,    0,  396,    2, 0x08 /* Private */,
      15,    0,  397,    2, 0x08 /* Private */,
      16,    0,  398,    2, 0x08 /* Private */,
      17,    0,  399,    2, 0x08 /* Private */,
      18,    0,  400,    2, 0x08 /* Private */,
      19,    0,  401,    2, 0x08 /* Private */,
      20,    0,  402,    2, 0x08 /* Private */,
      21,    0,  403,    2, 0x08 /* Private */,
      22,    0,  404,    2, 0x08 /* Private */,
      23,    0,  405,    2, 0x08 /* Private */,
      24,    0,  406,    2, 0x08 /* Private */,
      25,    0,  407,    2, 0x08 /* Private */,
      26,    0,  408,    2, 0x08 /* Private */,
      27,    0,  409,    2, 0x08 /* Private */,
      28,    0,  410,    2, 0x08 /* Private */,
      29,    0,  411,    2, 0x08 /* Private */,
      30,    0,  412,    2, 0x08 /* Private */,
      31,    0,  413,    2, 0x08 /* Private */,
      32,    0,  414,    2, 0x08 /* Private */,
      33,    0,  415,    2, 0x08 /* Private */,
      34,    0,  416,    2, 0x08 /* Private */,
      35,    0,  417,    2, 0x08 /* Private */,
      36,    0,  418,    2, 0x08 /* Private */,
      37,    0,  419,    2, 0x08 /* Private */,
      38,    0,  420,    2, 0x08 /* Private */,
      39,    0,  421,    2, 0x08 /* Private */,
      40,    0,  422,    2, 0x08 /* Private */,
      41,    0,  423,    2, 0x08 /* Private */,
      42,    0,  424,    2, 0x08 /* Private */,
      43,    0,  425,    2, 0x08 /* Private */,
      44,    0,  426,    2, 0x08 /* Private */,
      45,    0,  427,    2, 0x08 /* Private */,
      46,    0,  428,    2, 0x08 /* Private */,
      47,    0,  429,    2, 0x08 /* Private */,
      48,    0,  430,    2, 0x08 /* Private */,
      49,    0,  431,    2, 0x08 /* Private */,
      50,    0,  432,    2, 0x08 /* Private */,
      51,    0,  433,    2, 0x08 /* Private */,
      52,    0,  434,    2, 0x08 /* Private */,
      53,    0,  435,    2, 0x08 /* Private */,
      54,    0,  436,    2, 0x08 /* Private */,
      55,    0,  437,    2, 0x08 /* Private */,
      56,    0,  438,    2, 0x08 /* Private */,
      57,    0,  439,    2, 0x08 /* Private */,
      58,    0,  440,    2, 0x08 /* Private */,
      59,    0,  441,    2, 0x08 /* Private */,
      60,    0,  442,    2, 0x08 /* Private */,
      61,    0,  443,    2, 0x08 /* Private */,
      62,    0,  444,    2, 0x08 /* Private */,
      63,    0,  445,    2, 0x08 /* Private */,
      64,    0,  446,    2, 0x08 /* Private */,
      65,    0,  447,    2, 0x08 /* Private */,
      66,    0,  448,    2, 0x08 /* Private */,
      67,    0,  449,    2, 0x08 /* Private */,
      68,    0,  450,    2, 0x08 /* Private */,
      69,    0,  451,    2, 0x08 /* Private */,
      70,    0,  452,    2, 0x08 /* Private */,
      71,    0,  453,    2, 0x08 /* Private */,
      72,    0,  454,    2, 0x08 /* Private */,
      73,    0,  455,    2, 0x08 /* Private */,
      74,    0,  456,    2, 0x08 /* Private */,
      75,    0,  457,    2, 0x08 /* Private */,

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

void tst_QSqlTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QSqlTableModel *_t = static_cast<tst_QSqlTableModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanupTestCase(); break;
        case 2: _t->init(); break;
        case 3: _t->cleanup(); break;
        case 4: _t->select_data(); break;
        case 5: _t->select(); break;
        case 6: _t->selectRow_data(); break;
        case 7: _t->selectRow(); break;
        case 8: _t->selectRowOverride_data(); break;
        case 9: _t->selectRowOverride(); break;
        case 10: _t->insertColumns_data(); break;
        case 11: _t->insertColumns(); break;
        case 12: _t->submitAll_data(); break;
        case 13: _t->submitAll(); break;
        case 14: _t->setData_data(); break;
        case 15: _t->setData(); break;
        case 16: _t->setRecord_data(); break;
        case 17: _t->setRecord(); break;
        case 18: _t->setRecordReimpl_data(); break;
        case 19: _t->setRecordReimpl(); break;
        case 20: _t->recordReimpl_data(); break;
        case 21: _t->recordReimpl(); break;
        case 22: _t->insertRow_data(); break;
        case 23: _t->insertRow(); break;
        case 24: _t->insertRowFailure_data(); break;
        case 25: _t->insertRowFailure(); break;
        case 26: _t->insertRecord_data(); break;
        case 27: _t->insertRecord(); break;
        case 28: _t->insertMultiRecords_data(); break;
        case 29: _t->insertMultiRecords(); break;
        case 30: _t->insertWithAutoColumn_data(); break;
        case 31: _t->insertWithAutoColumn(); break;
        case 32: _t->removeRow_data(); break;
        case 33: _t->removeRow(); break;
        case 34: _t->removeRows_data(); break;
        case 35: _t->removeRows(); break;
        case 36: _t->removeInsertedRow_data(); break;
        case 37: _t->removeInsertedRow(); break;
        case 38: _t->removeInsertedRows_data(); break;
        case 39: _t->removeInsertedRows(); break;
        case 40: _t->revert_data(); break;
        case 41: _t->revert(); break;
        case 42: _t->isDirty_data(); break;
        case 43: _t->isDirty(); break;
        case 44: _t->setFilter_data(); break;
        case 45: _t->setFilter(); break;
        case 46: _t->setInvalidFilter_data(); break;
        case 47: _t->setInvalidFilter(); break;
        case 48: _t->emptyTable_data(); break;
        case 49: _t->emptyTable(); break;
        case 50: _t->tablesAndSchemas_data(); break;
        case 51: _t->tablesAndSchemas(); break;
        case 52: _t->whitespaceInIdentifiers_data(); break;
        case 53: _t->whitespaceInIdentifiers(); break;
        case 54: _t->primaryKeyOrder_data(); break;
        case 55: _t->primaryKeyOrder(); break;
        case 56: _t->sqlite_bigTable_data(); break;
        case 57: _t->sqlite_bigTable(); break;
        case 58: _t->insertRecordBeforeSelect_data(); break;
        case 59: _t->insertRecordBeforeSelect(); break;
        case 60: _t->submitAllOnInvalidTable_data(); break;
        case 61: _t->submitAllOnInvalidTable(); break;
        case 62: _t->insertRecordsInLoop_data(); break;
        case 63: _t->insertRecordsInLoop(); break;
        case 64: _t->sqlite_attachedDatabase_data(); break;
        case 65: _t->sqlite_attachedDatabase(); break;
        case 66: _t->tableModifyWithBlank_data(); break;
        case 67: _t->tableModifyWithBlank(); break;
        case 68: _t->removeColumnAndRow_data(); break;
        case 69: _t->removeColumnAndRow(); break;
        case 70: _t->insertBeforeDelete_data(); break;
        case 71: _t->insertBeforeDelete(); break;
        case 72: _t->invalidFilterAndHeaderData_data(); break;
        case 73: _t->invalidFilterAndHeaderData(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QSqlTableModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QSqlTableModel.data,
      qt_meta_data_tst_QSqlTableModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QSqlTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QSqlTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QSqlTableModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QSqlTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 74)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 74;
    }
    return _id;
}
struct qt_meta_stringdata_SelectRowModel_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectRowModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectRowModel_t qt_meta_stringdata_SelectRowModel = {
    {
QT_MOC_LITERAL(0, 0, 14) // "SelectRowModel"

    },
    "SelectRowModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectRowModel[] = {

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

void SelectRowModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SelectRowModel::staticMetaObject = {
    { &QSqlTableModel::staticMetaObject, qt_meta_stringdata_SelectRowModel.data,
      qt_meta_data_SelectRowModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SelectRowModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectRowModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelectRowModel.stringdata0))
        return static_cast<void*>(this);
    return QSqlTableModel::qt_metacast(_clname);
}

int SelectRowModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SelectRowOverrideTestModel_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectRowOverrideTestModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectRowOverrideTestModel_t qt_meta_stringdata_SelectRowOverrideTestModel = {
    {
QT_MOC_LITERAL(0, 0, 26) // "SelectRowOverrideTestModel"

    },
    "SelectRowOverrideTestModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectRowOverrideTestModel[] = {

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

void SelectRowOverrideTestModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SelectRowOverrideTestModel::staticMetaObject = {
    { &QSqlTableModel::staticMetaObject, qt_meta_stringdata_SelectRowOverrideTestModel.data,
      qt_meta_data_SelectRowOverrideTestModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SelectRowOverrideTestModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectRowOverrideTestModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelectRowOverrideTestModel.stringdata0))
        return static_cast<void*>(this);
    return QSqlTableModel::qt_metacast(_clname);
}

int SelectRowOverrideTestModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SetRecordReimplModel_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SetRecordReimplModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SetRecordReimplModel_t qt_meta_stringdata_SetRecordReimplModel = {
    {
QT_MOC_LITERAL(0, 0, 20) // "SetRecordReimplModel"

    },
    "SetRecordReimplModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetRecordReimplModel[] = {

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

void SetRecordReimplModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SetRecordReimplModel::staticMetaObject = {
    { &QSqlTableModel::staticMetaObject, qt_meta_stringdata_SetRecordReimplModel.data,
      qt_meta_data_SetRecordReimplModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SetRecordReimplModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetRecordReimplModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SetRecordReimplModel.stringdata0))
        return static_cast<void*>(this);
    return QSqlTableModel::qt_metacast(_clname);
}

int SetRecordReimplModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RecordReimplModel_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RecordReimplModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RecordReimplModel_t qt_meta_stringdata_RecordReimplModel = {
    {
QT_MOC_LITERAL(0, 0, 17) // "RecordReimplModel"

    },
    "RecordReimplModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RecordReimplModel[] = {

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

void RecordReimplModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject RecordReimplModel::staticMetaObject = {
    { &QSqlTableModel::staticMetaObject, qt_meta_stringdata_RecordReimplModel.data,
      qt_meta_data_RecordReimplModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RecordReimplModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RecordReimplModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RecordReimplModel.stringdata0))
        return static_cast<void*>(this);
    return QSqlTableModel::qt_metacast(_clname);
}

int RecordReimplModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
