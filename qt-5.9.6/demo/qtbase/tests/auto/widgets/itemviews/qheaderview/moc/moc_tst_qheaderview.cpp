/****************************************************************************
** Meta object code from reading C++ file 'tst_qheaderview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qheaderview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qheaderview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_protected_QHeaderView_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_protected_QHeaderView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_protected_QHeaderView_t qt_meta_stringdata_protected_QHeaderView = {
    {
QT_MOC_LITERAL(0, 0, 21) // "protected_QHeaderView"

    },
    "protected_QHeaderView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_protected_QHeaderView[] = {

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

void protected_QHeaderView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject protected_QHeaderView::staticMetaObject = {
    { &QHeaderView::staticMetaObject, qt_meta_stringdata_protected_QHeaderView.data,
      qt_meta_data_protected_QHeaderView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *protected_QHeaderView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *protected_QHeaderView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_protected_QHeaderView.stringdata0))
        return static_cast<void*>(this);
    return QHeaderView::qt_metacast(_clname);
}

int protected_QHeaderView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHeaderView::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_tst_QHeaderView_t {
    QByteArrayData data[119];
    char stringdata0[2188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QHeaderView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QHeaderView_t qt_meta_stringdata_tst_QHeaderView = {
    {
QT_MOC_LITERAL(0, 0, 15), // "tst_QHeaderView"
QT_MOC_LITERAL(1, 16, 12), // "initTestCase"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "cleanupTestCase"
QT_MOC_LITERAL(4, 46, 4), // "init"
QT_MOC_LITERAL(5, 51, 7), // "cleanup"
QT_MOC_LITERAL(6, 59, 11), // "getSetCheck"
QT_MOC_LITERAL(7, 71, 11), // "visualIndex"
QT_MOC_LITERAL(8, 83, 18), // "visualIndexAt_data"
QT_MOC_LITERAL(9, 102, 13), // "visualIndexAt"
QT_MOC_LITERAL(10, 116, 7), // "noModel"
QT_MOC_LITERAL(11, 124, 10), // "emptyModel"
QT_MOC_LITERAL(12, 135, 10), // "removeRows"
QT_MOC_LITERAL(13, 146, 10), // "removeCols"
QT_MOC_LITERAL(14, 157, 9), // "clickable"
QT_MOC_LITERAL(15, 167, 7), // "movable"
QT_MOC_LITERAL(16, 175, 6), // "hidden"
QT_MOC_LITERAL(17, 182, 7), // "stretch"
QT_MOC_LITERAL(18, 190, 16), // "sectionSize_data"
QT_MOC_LITERAL(19, 207, 11), // "sectionSize"
QT_MOC_LITERAL(20, 219, 6), // "length"
QT_MOC_LITERAL(21, 226, 6), // "offset"
QT_MOC_LITERAL(22, 233, 15), // "sectionSizeHint"
QT_MOC_LITERAL(23, 249, 12), // "logicalIndex"
QT_MOC_LITERAL(24, 262, 14), // "logicalIndexAt"
QT_MOC_LITERAL(25, 277, 12), // "swapSections"
QT_MOC_LITERAL(26, 290, 16), // "moveSection_data"
QT_MOC_LITERAL(27, 307, 11), // "moveSection"
QT_MOC_LITERAL(28, 319, 10), // "resizeMode"
QT_MOC_LITERAL(29, 330, 18), // "resizeSection_data"
QT_MOC_LITERAL(30, 349, 13), // "resizeSection"
QT_MOC_LITERAL(31, 363, 25), // "resizeAndMoveSection_data"
QT_MOC_LITERAL(32, 389, 20), // "resizeAndMoveSection"
QT_MOC_LITERAL(33, 410, 24), // "resizeHiddenSection_data"
QT_MOC_LITERAL(34, 435, 19), // "resizeHiddenSection"
QT_MOC_LITERAL(35, 455, 27), // "resizeAndInsertSection_data"
QT_MOC_LITERAL(36, 483, 22), // "resizeAndInsertSection"
QT_MOC_LITERAL(37, 506, 26), // "resizeWithResizeModes_data"
QT_MOC_LITERAL(38, 533, 21), // "resizeWithResizeModes"
QT_MOC_LITERAL(39, 555, 25), // "moveAndInsertSection_data"
QT_MOC_LITERAL(40, 581, 20), // "moveAndInsertSection"
QT_MOC_LITERAL(41, 602, 17), // "highlightSections"
QT_MOC_LITERAL(42, 620, 17), // "showSortIndicator"
QT_MOC_LITERAL(43, 638, 21), // "sortIndicatorTracking"
QT_MOC_LITERAL(44, 660, 18), // "removeAndInsertRow"
QT_MOC_LITERAL(45, 679, 13), // "unhideSection"
QT_MOC_LITERAL(46, 693, 9), // "testEvent"
QT_MOC_LITERAL(47, 703, 17), // "headerDataChanged"
QT_MOC_LITERAL(48, 721, 14), // "currentChanged"
QT_MOC_LITERAL(49, 736, 16), // "horizontalOffset"
QT_MOC_LITERAL(50, 753, 14), // "verticalOffset"
QT_MOC_LITERAL(51, 768, 19), // "stretchSectionCount"
QT_MOC_LITERAL(52, 788, 18), // "hiddenSectionCount"
QT_MOC_LITERAL(53, 807, 11), // "focusPolicy"
QT_MOC_LITERAL(54, 819, 19), // "moveSectionAndReset"
QT_MOC_LITERAL(55, 839, 20), // "moveSectionAndRemove"
QT_MOC_LITERAL(56, 860, 11), // "saveRestore"
QT_MOC_LITERAL(57, 872, 15), // "restoreQt4State"
QT_MOC_LITERAL(58, 888, 20), // "restoreToMoreColumns"
QT_MOC_LITERAL(59, 909, 34), // "restoreToMoreColumnsNoMovedCo..."
QT_MOC_LITERAL(60, 944, 21), // "restoreBeforeSetModel"
QT_MOC_LITERAL(61, 966, 22), // "defaultSectionSizeTest"
QT_MOC_LITERAL(62, 989, 28), // "defaultSectionSizeTestStyles"
QT_MOC_LITERAL(63, 1018, 21), // "defaultAlignment_data"
QT_MOC_LITERAL(64, 1040, 16), // "defaultAlignment"
QT_MOC_LITERAL(65, 1057, 21), // "globalResizeMode_data"
QT_MOC_LITERAL(66, 1079, 16), // "globalResizeMode"
QT_MOC_LITERAL(67, 1096, 25), // "sectionPressedSignal_data"
QT_MOC_LITERAL(68, 1122, 20), // "sectionPressedSignal"
QT_MOC_LITERAL(69, 1143, 25), // "sectionClickedSignal_data"
QT_MOC_LITERAL(70, 1169, 20), // "sectionClickedSignal"
QT_MOC_LITERAL(71, 1190, 23), // "defaultSectionSize_data"
QT_MOC_LITERAL(72, 1214, 18), // "defaultSectionSize"
QT_MOC_LITERAL(73, 1233, 14), // "oneSectionSize"
QT_MOC_LITERAL(74, 1248, 18), // "hideAndInsert_data"
QT_MOC_LITERAL(75, 1267, 13), // "hideAndInsert"
QT_MOC_LITERAL(76, 1281, 13), // "removeSection"
QT_MOC_LITERAL(77, 1295, 26), // "preserveHiddenSectionWidth"
QT_MOC_LITERAL(78, 1322, 27), // "invisibleStretchLastSection"
QT_MOC_LITERAL(79, 1350, 26), // "noSectionsWithNegativeSize"
QT_MOC_LITERAL(80, 1377, 16), // "emptySectionSpan"
QT_MOC_LITERAL(81, 1394, 22), // "task236450_hidden_data"
QT_MOC_LITERAL(82, 1417, 17), // "task236450_hidden"
QT_MOC_LITERAL(83, 1435, 18), // "task248050_hideRow"
QT_MOC_LITERAL(84, 1454, 15), // "QTBUG6058_reset"
QT_MOC_LITERAL(85, 1470, 24), // "QTBUG7833_sectionClicked"
QT_MOC_LITERAL(86, 1495, 27), // "checkLayoutChangeEmptyModel"
QT_MOC_LITERAL(87, 1523, 31), // "QTBUG8650_crashOnInsertSections"
QT_MOC_LITERAL(88, 1555, 36), // "QTBUG12268_hiddenMovedSection..."
QT_MOC_LITERAL(89, 1592, 30), // "QTBUG14242_hideSectionAutoSize"
QT_MOC_LITERAL(90, 1623, 38), // "QTBUG50171_visualRegionForSwa..."
QT_MOC_LITERAL(91, 1662, 31), // "QTBUG53221_assertShiftHiddenRow"
QT_MOC_LITERAL(92, 1694, 21), // "ensureNoIndexAtLength"
QT_MOC_LITERAL(93, 1716, 16), // "offsetConsistent"
QT_MOC_LITERAL(94, 1733, 20), // "initialSortOrderRole"
QT_MOC_LITERAL(95, 1754, 23), // "logicalIndexAtTest_data"
QT_MOC_LITERAL(96, 1778, 22), // "visualIndexAtTest_data"
QT_MOC_LITERAL(97, 1801, 17), // "hideShowTest_data"
QT_MOC_LITERAL(98, 1819, 21), // "swapSectionsTest_data"
QT_MOC_LITERAL(99, 1841, 20), // "moveSectionTest_data"
QT_MOC_LITERAL(100, 1862, 20), // "defaultSizeTest_data"
QT_MOC_LITERAL(101, 1883, 15), // "removeTest_data"
QT_MOC_LITERAL(102, 1899, 15), // "insertTest_data"
QT_MOC_LITERAL(103, 1915, 15), // "mixedTests_data"
QT_MOC_LITERAL(104, 1931, 24), // "resizeToContentTest_data"
QT_MOC_LITERAL(105, 1956, 18), // "logicalIndexAtTest"
QT_MOC_LITERAL(106, 1975, 17), // "visualIndexAtTest"
QT_MOC_LITERAL(107, 1993, 12), // "hideShowTest"
QT_MOC_LITERAL(108, 2006, 16), // "swapSectionsTest"
QT_MOC_LITERAL(109, 2023, 15), // "moveSectionTest"
QT_MOC_LITERAL(110, 2039, 15), // "defaultSizeTest"
QT_MOC_LITERAL(111, 2055, 10), // "removeTest"
QT_MOC_LITERAL(112, 2066, 10), // "insertTest"
QT_MOC_LITERAL(113, 2077, 10), // "mixedTests"
QT_MOC_LITERAL(114, 2088, 19), // "resizeToContentTest"
QT_MOC_LITERAL(115, 2108, 18), // "testStreamWithHide"
QT_MOC_LITERAL(116, 2127, 17), // "testStylePosition"
QT_MOC_LITERAL(117, 2145, 28), // "stretchAndRestoreLastSection"
QT_MOC_LITERAL(118, 2174, 13) // "sizeHintCrash"

    },
    "tst_QHeaderView\0initTestCase\0\0"
    "cleanupTestCase\0init\0cleanup\0getSetCheck\0"
    "visualIndex\0visualIndexAt_data\0"
    "visualIndexAt\0noModel\0emptyModel\0"
    "removeRows\0removeCols\0clickable\0movable\0"
    "hidden\0stretch\0sectionSize_data\0"
    "sectionSize\0length\0offset\0sectionSizeHint\0"
    "logicalIndex\0logicalIndexAt\0swapSections\0"
    "moveSection_data\0moveSection\0resizeMode\0"
    "resizeSection_data\0resizeSection\0"
    "resizeAndMoveSection_data\0"
    "resizeAndMoveSection\0resizeHiddenSection_data\0"
    "resizeHiddenSection\0resizeAndInsertSection_data\0"
    "resizeAndInsertSection\0"
    "resizeWithResizeModes_data\0"
    "resizeWithResizeModes\0moveAndInsertSection_data\0"
    "moveAndInsertSection\0highlightSections\0"
    "showSortIndicator\0sortIndicatorTracking\0"
    "removeAndInsertRow\0unhideSection\0"
    "testEvent\0headerDataChanged\0currentChanged\0"
    "horizontalOffset\0verticalOffset\0"
    "stretchSectionCount\0hiddenSectionCount\0"
    "focusPolicy\0moveSectionAndReset\0"
    "moveSectionAndRemove\0saveRestore\0"
    "restoreQt4State\0restoreToMoreColumns\0"
    "restoreToMoreColumnsNoMovedColumns\0"
    "restoreBeforeSetModel\0defaultSectionSizeTest\0"
    "defaultSectionSizeTestStyles\0"
    "defaultAlignment_data\0defaultAlignment\0"
    "globalResizeMode_data\0globalResizeMode\0"
    "sectionPressedSignal_data\0"
    "sectionPressedSignal\0sectionClickedSignal_data\0"
    "sectionClickedSignal\0defaultSectionSize_data\0"
    "defaultSectionSize\0oneSectionSize\0"
    "hideAndInsert_data\0hideAndInsert\0"
    "removeSection\0preserveHiddenSectionWidth\0"
    "invisibleStretchLastSection\0"
    "noSectionsWithNegativeSize\0emptySectionSpan\0"
    "task236450_hidden_data\0task236450_hidden\0"
    "task248050_hideRow\0QTBUG6058_reset\0"
    "QTBUG7833_sectionClicked\0"
    "checkLayoutChangeEmptyModel\0"
    "QTBUG8650_crashOnInsertSections\0"
    "QTBUG12268_hiddenMovedSectionSorting\0"
    "QTBUG14242_hideSectionAutoSize\0"
    "QTBUG50171_visualRegionForSwappedItems\0"
    "QTBUG53221_assertShiftHiddenRow\0"
    "ensureNoIndexAtLength\0offsetConsistent\0"
    "initialSortOrderRole\0logicalIndexAtTest_data\0"
    "visualIndexAtTest_data\0hideShowTest_data\0"
    "swapSectionsTest_data\0moveSectionTest_data\0"
    "defaultSizeTest_data\0removeTest_data\0"
    "insertTest_data\0mixedTests_data\0"
    "resizeToContentTest_data\0logicalIndexAtTest\0"
    "visualIndexAtTest\0hideShowTest\0"
    "swapSectionsTest\0moveSectionTest\0"
    "defaultSizeTest\0removeTest\0insertTest\0"
    "mixedTests\0resizeToContentTest\0"
    "testStreamWithHide\0testStylePosition\0"
    "stretchAndRestoreLastSection\0sizeHintCrash"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QHeaderView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     117,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  599,    2, 0x08 /* Private */,
       3,    0,  600,    2, 0x08 /* Private */,
       4,    0,  601,    2, 0x08 /* Private */,
       5,    0,  602,    2, 0x08 /* Private */,
       6,    0,  603,    2, 0x08 /* Private */,
       7,    0,  604,    2, 0x08 /* Private */,
       8,    0,  605,    2, 0x08 /* Private */,
       9,    0,  606,    2, 0x08 /* Private */,
      10,    0,  607,    2, 0x08 /* Private */,
      11,    0,  608,    2, 0x08 /* Private */,
      12,    0,  609,    2, 0x08 /* Private */,
      13,    0,  610,    2, 0x08 /* Private */,
      14,    0,  611,    2, 0x08 /* Private */,
      15,    0,  612,    2, 0x08 /* Private */,
      16,    0,  613,    2, 0x08 /* Private */,
      17,    0,  614,    2, 0x08 /* Private */,
      18,    0,  615,    2, 0x08 /* Private */,
      19,    0,  616,    2, 0x08 /* Private */,
      20,    0,  617,    2, 0x08 /* Private */,
      21,    0,  618,    2, 0x08 /* Private */,
      22,    0,  619,    2, 0x08 /* Private */,
      23,    0,  620,    2, 0x08 /* Private */,
      24,    0,  621,    2, 0x08 /* Private */,
      25,    0,  622,    2, 0x08 /* Private */,
      26,    0,  623,    2, 0x08 /* Private */,
      27,    0,  624,    2, 0x08 /* Private */,
      28,    0,  625,    2, 0x08 /* Private */,
      29,    0,  626,    2, 0x08 /* Private */,
      30,    0,  627,    2, 0x08 /* Private */,
      31,    0,  628,    2, 0x08 /* Private */,
      32,    0,  629,    2, 0x08 /* Private */,
      33,    0,  630,    2, 0x08 /* Private */,
      34,    0,  631,    2, 0x08 /* Private */,
      35,    0,  632,    2, 0x08 /* Private */,
      36,    0,  633,    2, 0x08 /* Private */,
      37,    0,  634,    2, 0x08 /* Private */,
      38,    0,  635,    2, 0x08 /* Private */,
      39,    0,  636,    2, 0x08 /* Private */,
      40,    0,  637,    2, 0x08 /* Private */,
      41,    0,  638,    2, 0x08 /* Private */,
      42,    0,  639,    2, 0x08 /* Private */,
      43,    0,  640,    2, 0x08 /* Private */,
      44,    0,  641,    2, 0x08 /* Private */,
      45,    0,  642,    2, 0x08 /* Private */,
      46,    0,  643,    2, 0x08 /* Private */,
      47,    0,  644,    2, 0x08 /* Private */,
      48,    0,  645,    2, 0x08 /* Private */,
      49,    0,  646,    2, 0x08 /* Private */,
      50,    0,  647,    2, 0x08 /* Private */,
      51,    0,  648,    2, 0x08 /* Private */,
      52,    0,  649,    2, 0x08 /* Private */,
      53,    0,  650,    2, 0x08 /* Private */,
      54,    0,  651,    2, 0x08 /* Private */,
      55,    0,  652,    2, 0x08 /* Private */,
      56,    0,  653,    2, 0x08 /* Private */,
      57,    0,  654,    2, 0x08 /* Private */,
      58,    0,  655,    2, 0x08 /* Private */,
      59,    0,  656,    2, 0x08 /* Private */,
      60,    0,  657,    2, 0x08 /* Private */,
      61,    0,  658,    2, 0x08 /* Private */,
      62,    0,  659,    2, 0x08 /* Private */,
      63,    0,  660,    2, 0x08 /* Private */,
      64,    0,  661,    2, 0x08 /* Private */,
      65,    0,  662,    2, 0x08 /* Private */,
      66,    0,  663,    2, 0x08 /* Private */,
      67,    0,  664,    2, 0x08 /* Private */,
      68,    0,  665,    2, 0x08 /* Private */,
      69,    0,  666,    2, 0x08 /* Private */,
      70,    0,  667,    2, 0x08 /* Private */,
      71,    0,  668,    2, 0x08 /* Private */,
      72,    0,  669,    2, 0x08 /* Private */,
      73,    0,  670,    2, 0x08 /* Private */,
      74,    0,  671,    2, 0x08 /* Private */,
      75,    0,  672,    2, 0x08 /* Private */,
      76,    0,  673,    2, 0x08 /* Private */,
      77,    0,  674,    2, 0x08 /* Private */,
      78,    0,  675,    2, 0x08 /* Private */,
      79,    0,  676,    2, 0x08 /* Private */,
      80,    0,  677,    2, 0x08 /* Private */,
      81,    0,  678,    2, 0x08 /* Private */,
      82,    0,  679,    2, 0x08 /* Private */,
      83,    0,  680,    2, 0x08 /* Private */,
      84,    0,  681,    2, 0x08 /* Private */,
      85,    0,  682,    2, 0x08 /* Private */,
      86,    0,  683,    2, 0x08 /* Private */,
      87,    0,  684,    2, 0x08 /* Private */,
      88,    0,  685,    2, 0x08 /* Private */,
      89,    0,  686,    2, 0x08 /* Private */,
      90,    0,  687,    2, 0x08 /* Private */,
      91,    0,  688,    2, 0x08 /* Private */,
      92,    0,  689,    2, 0x08 /* Private */,
      93,    0,  690,    2, 0x08 /* Private */,
      94,    0,  691,    2, 0x08 /* Private */,
      95,    0,  692,    2, 0x08 /* Private */,
      96,    0,  693,    2, 0x08 /* Private */,
      97,    0,  694,    2, 0x08 /* Private */,
      98,    0,  695,    2, 0x08 /* Private */,
      99,    0,  696,    2, 0x08 /* Private */,
     100,    0,  697,    2, 0x08 /* Private */,
     101,    0,  698,    2, 0x08 /* Private */,
     102,    0,  699,    2, 0x08 /* Private */,
     103,    0,  700,    2, 0x08 /* Private */,
     104,    0,  701,    2, 0x08 /* Private */,
     105,    0,  702,    2, 0x08 /* Private */,
     106,    0,  703,    2, 0x08 /* Private */,
     107,    0,  704,    2, 0x08 /* Private */,
     108,    0,  705,    2, 0x08 /* Private */,
     109,    0,  706,    2, 0x08 /* Private */,
     110,    0,  707,    2, 0x08 /* Private */,
     111,    0,  708,    2, 0x08 /* Private */,
     112,    0,  709,    2, 0x08 /* Private */,
     113,    0,  710,    2, 0x08 /* Private */,
     114,    0,  711,    2, 0x08 /* Private */,
     115,    0,  712,    2, 0x08 /* Private */,
     116,    0,  713,    2, 0x08 /* Private */,
     117,    0,  714,    2, 0x08 /* Private */,
     118,    0,  715,    2, 0x08 /* Private */,

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

void tst_QHeaderView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QHeaderView *_t = static_cast<tst_QHeaderView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanupTestCase(); break;
        case 2: _t->init(); break;
        case 3: _t->cleanup(); break;
        case 4: _t->getSetCheck(); break;
        case 5: _t->visualIndex(); break;
        case 6: _t->visualIndexAt_data(); break;
        case 7: _t->visualIndexAt(); break;
        case 8: _t->noModel(); break;
        case 9: _t->emptyModel(); break;
        case 10: _t->removeRows(); break;
        case 11: _t->removeCols(); break;
        case 12: _t->clickable(); break;
        case 13: _t->movable(); break;
        case 14: _t->hidden(); break;
        case 15: _t->stretch(); break;
        case 16: _t->sectionSize_data(); break;
        case 17: _t->sectionSize(); break;
        case 18: _t->length(); break;
        case 19: _t->offset(); break;
        case 20: _t->sectionSizeHint(); break;
        case 21: _t->logicalIndex(); break;
        case 22: _t->logicalIndexAt(); break;
        case 23: _t->swapSections(); break;
        case 24: _t->moveSection_data(); break;
        case 25: _t->moveSection(); break;
        case 26: _t->resizeMode(); break;
        case 27: _t->resizeSection_data(); break;
        case 28: _t->resizeSection(); break;
        case 29: _t->resizeAndMoveSection_data(); break;
        case 30: _t->resizeAndMoveSection(); break;
        case 31: _t->resizeHiddenSection_data(); break;
        case 32: _t->resizeHiddenSection(); break;
        case 33: _t->resizeAndInsertSection_data(); break;
        case 34: _t->resizeAndInsertSection(); break;
        case 35: _t->resizeWithResizeModes_data(); break;
        case 36: _t->resizeWithResizeModes(); break;
        case 37: _t->moveAndInsertSection_data(); break;
        case 38: _t->moveAndInsertSection(); break;
        case 39: _t->highlightSections(); break;
        case 40: _t->showSortIndicator(); break;
        case 41: _t->sortIndicatorTracking(); break;
        case 42: _t->removeAndInsertRow(); break;
        case 43: _t->unhideSection(); break;
        case 44: _t->testEvent(); break;
        case 45: _t->headerDataChanged(); break;
        case 46: _t->currentChanged(); break;
        case 47: _t->horizontalOffset(); break;
        case 48: _t->verticalOffset(); break;
        case 49: _t->stretchSectionCount(); break;
        case 50: _t->hiddenSectionCount(); break;
        case 51: _t->focusPolicy(); break;
        case 52: _t->moveSectionAndReset(); break;
        case 53: _t->moveSectionAndRemove(); break;
        case 54: _t->saveRestore(); break;
        case 55: _t->restoreQt4State(); break;
        case 56: _t->restoreToMoreColumns(); break;
        case 57: _t->restoreToMoreColumnsNoMovedColumns(); break;
        case 58: _t->restoreBeforeSetModel(); break;
        case 59: _t->defaultSectionSizeTest(); break;
        case 60: _t->defaultSectionSizeTestStyles(); break;
        case 61: _t->defaultAlignment_data(); break;
        case 62: _t->defaultAlignment(); break;
        case 63: _t->globalResizeMode_data(); break;
        case 64: _t->globalResizeMode(); break;
        case 65: _t->sectionPressedSignal_data(); break;
        case 66: _t->sectionPressedSignal(); break;
        case 67: _t->sectionClickedSignal_data(); break;
        case 68: _t->sectionClickedSignal(); break;
        case 69: _t->defaultSectionSize_data(); break;
        case 70: _t->defaultSectionSize(); break;
        case 71: _t->oneSectionSize(); break;
        case 72: _t->hideAndInsert_data(); break;
        case 73: _t->hideAndInsert(); break;
        case 74: _t->removeSection(); break;
        case 75: _t->preserveHiddenSectionWidth(); break;
        case 76: _t->invisibleStretchLastSection(); break;
        case 77: _t->noSectionsWithNegativeSize(); break;
        case 78: _t->emptySectionSpan(); break;
        case 79: _t->task236450_hidden_data(); break;
        case 80: _t->task236450_hidden(); break;
        case 81: _t->task248050_hideRow(); break;
        case 82: _t->QTBUG6058_reset(); break;
        case 83: _t->QTBUG7833_sectionClicked(); break;
        case 84: _t->checkLayoutChangeEmptyModel(); break;
        case 85: _t->QTBUG8650_crashOnInsertSections(); break;
        case 86: _t->QTBUG12268_hiddenMovedSectionSorting(); break;
        case 87: _t->QTBUG14242_hideSectionAutoSize(); break;
        case 88: _t->QTBUG50171_visualRegionForSwappedItems(); break;
        case 89: _t->QTBUG53221_assertShiftHiddenRow(); break;
        case 90: _t->ensureNoIndexAtLength(); break;
        case 91: _t->offsetConsistent(); break;
        case 92: _t->initialSortOrderRole(); break;
        case 93: _t->logicalIndexAtTest_data(); break;
        case 94: _t->visualIndexAtTest_data(); break;
        case 95: _t->hideShowTest_data(); break;
        case 96: _t->swapSectionsTest_data(); break;
        case 97: _t->moveSectionTest_data(); break;
        case 98: _t->defaultSizeTest_data(); break;
        case 99: _t->removeTest_data(); break;
        case 100: _t->insertTest_data(); break;
        case 101: _t->mixedTests_data(); break;
        case 102: _t->resizeToContentTest_data(); break;
        case 103: _t->logicalIndexAtTest(); break;
        case 104: _t->visualIndexAtTest(); break;
        case 105: _t->hideShowTest(); break;
        case 106: _t->swapSectionsTest(); break;
        case 107: _t->moveSectionTest(); break;
        case 108: _t->defaultSizeTest(); break;
        case 109: _t->removeTest(); break;
        case 110: _t->insertTest(); break;
        case 111: _t->mixedTests(); break;
        case 112: _t->resizeToContentTest(); break;
        case 113: _t->testStreamWithHide(); break;
        case 114: _t->testStylePosition(); break;
        case 115: _t->stretchAndRestoreLastSection(); break;
        case 116: _t->sizeHintCrash(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QHeaderView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QHeaderView.data,
      qt_meta_data_tst_QHeaderView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QHeaderView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QHeaderView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QHeaderView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QHeaderView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 117)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 117;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 117)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 117;
    }
    return _id;
}
struct qt_meta_stringdata_QtTestModel_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtTestModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtTestModel_t qt_meta_stringdata_QtTestModel = {
    {
QT_MOC_LITERAL(0, 0, 11) // "QtTestModel"

    },
    "QtTestModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtTestModel[] = {

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

void QtTestModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QtTestModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_QtTestModel.data,
      qt_meta_data_QtTestModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtTestModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtTestModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtTestModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int QtTestModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SimpleModel_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimpleModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimpleModel_t qt_meta_stringdata_SimpleModel = {
    {
QT_MOC_LITERAL(0, 0, 11) // "SimpleModel"

    },
    "SimpleModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimpleModel[] = {

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

void SimpleModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SimpleModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_SimpleModel.data,
      qt_meta_data_SimpleModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SimpleModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimpleModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimpleModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int SimpleModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
