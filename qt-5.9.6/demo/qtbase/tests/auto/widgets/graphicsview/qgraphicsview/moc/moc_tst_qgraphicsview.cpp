/****************************************************************************
** Meta object code from reading C++ file 'tst_qgraphicsview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qgraphicsview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qgraphicsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EventSpy_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EventSpy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EventSpy_t qt_meta_stringdata_EventSpy = {
    {
QT_MOC_LITERAL(0, 0, 8) // "EventSpy"

    },
    "EventSpy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EventSpy[] = {

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

void EventSpy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject EventSpy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EventSpy.data,
      qt_meta_data_EventSpy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EventSpy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EventSpy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EventSpy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int EventSpy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_tst_QGraphicsView_t {
    QByteArrayData data[111];
    char stringdata0[2111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QGraphicsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QGraphicsView_t qt_meta_stringdata_tst_QGraphicsView = {
    {
QT_MOC_LITERAL(0, 0, 17), // "tst_QGraphicsView"
QT_MOC_LITERAL(1, 18, 7), // "cleanup"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "construction"
QT_MOC_LITERAL(4, 40, 11), // "renderHints"
QT_MOC_LITERAL(5, 52, 9), // "alignment"
QT_MOC_LITERAL(6, 62, 11), // "interactive"
QT_MOC_LITERAL(7, 74, 5), // "scene"
QT_MOC_LITERAL(8, 80, 8), // "setScene"
QT_MOC_LITERAL(9, 89, 11), // "deleteScene"
QT_MOC_LITERAL(10, 101, 9), // "sceneRect"
QT_MOC_LITERAL(11, 111, 17), // "sceneRect_growing"
QT_MOC_LITERAL(12, 129, 12), // "setSceneRect"
QT_MOC_LITERAL(13, 142, 8), // "viewport"
QT_MOC_LITERAL(14, 151, 14), // "openGLViewport"
QT_MOC_LITERAL(15, 166, 19), // "dragMode_scrollHand"
QT_MOC_LITERAL(16, 186, 19), // "dragMode_rubberBand"
QT_MOC_LITERAL(17, 206, 23), // "rubberBandSelectionMode"
QT_MOC_LITERAL(18, 230, 25), // "rubberBandExtendSelection"
QT_MOC_LITERAL(19, 256, 18), // "rotated_rubberBand"
QT_MOC_LITERAL(20, 275, 15), // "backgroundBrush"
QT_MOC_LITERAL(21, 291, 15), // "foregroundBrush"
QT_MOC_LITERAL(22, 307, 6), // "matrix"
QT_MOC_LITERAL(23, 314, 18), // "matrix_convenience"
QT_MOC_LITERAL(24, 333, 14), // "matrix_combine"
QT_MOC_LITERAL(25, 348, 13), // "centerOnPoint"
QT_MOC_LITERAL(26, 362, 12), // "centerOnItem"
QT_MOC_LITERAL(27, 375, 17), // "ensureVisibleRect"
QT_MOC_LITERAL(28, 393, 9), // "fitInView"
QT_MOC_LITERAL(29, 403, 12), // "itemsAtPoint"
QT_MOC_LITERAL(30, 416, 11), // "itemsInRect"
QT_MOC_LITERAL(31, 428, 31), // "itemsInRect_cosmeticAdjust_data"
QT_MOC_LITERAL(32, 460, 26), // "itemsInRect_cosmeticAdjust"
QT_MOC_LITERAL(33, 487, 11), // "itemsInPoly"
QT_MOC_LITERAL(34, 499, 11), // "itemsInPath"
QT_MOC_LITERAL(35, 511, 6), // "itemAt"
QT_MOC_LITERAL(36, 518, 7), // "itemAt2"
QT_MOC_LITERAL(37, 526, 10), // "mapToScene"
QT_MOC_LITERAL(38, 537, 15), // "mapToScenePoint"
QT_MOC_LITERAL(39, 553, 19), // "mapToSceneRect_data"
QT_MOC_LITERAL(40, 573, 14), // "mapToSceneRect"
QT_MOC_LITERAL(41, 588, 14), // "mapToScenePoly"
QT_MOC_LITERAL(42, 603, 14), // "mapToScenePath"
QT_MOC_LITERAL(43, 618, 17), // "mapFromScenePoint"
QT_MOC_LITERAL(44, 636, 16), // "mapFromSceneRect"
QT_MOC_LITERAL(45, 653, 16), // "mapFromScenePoly"
QT_MOC_LITERAL(46, 670, 16), // "mapFromScenePath"
QT_MOC_LITERAL(47, 687, 9), // "sendEvent"
QT_MOC_LITERAL(48, 697, 10), // "wheelEvent"
QT_MOC_LITERAL(49, 708, 6), // "cursor"
QT_MOC_LITERAL(50, 715, 7), // "cursor2"
QT_MOC_LITERAL(51, 723, 20), // "transformationAnchor"
QT_MOC_LITERAL(52, 744, 12), // "resizeAnchor"
QT_MOC_LITERAL(53, 757, 18), // "viewportUpdateMode"
QT_MOC_LITERAL(54, 776, 19), // "viewportUpdateMode2"
QT_MOC_LITERAL(55, 796, 11), // "acceptDrops"
QT_MOC_LITERAL(56, 808, 17), // "optimizationFlags"
QT_MOC_LITERAL(57, 826, 38), // "optimizationFlags_dontSavePai..."
QT_MOC_LITERAL(58, 865, 44), // "optimizationFlags_dontSavePai..."
QT_MOC_LITERAL(59, 910, 39), // "optimizationFlags_dontSavePai..."
QT_MOC_LITERAL(60, 950, 18), // "levelOfDetail_data"
QT_MOC_LITERAL(61, 969, 13), // "levelOfDetail"
QT_MOC_LITERAL(62, 983, 20), // "scrollBarRanges_data"
QT_MOC_LITERAL(63, 1004, 15), // "scrollBarRanges"
QT_MOC_LITERAL(64, 1020, 21), // "acceptMousePressEvent"
QT_MOC_LITERAL(65, 1042, 27), // "acceptMouseDoubleClickEvent"
QT_MOC_LITERAL(66, 1070, 17), // "forwardMousePress"
QT_MOC_LITERAL(67, 1088, 23), // "forwardMouseDoubleClick"
QT_MOC_LITERAL(68, 1112, 15), // "replayMouseMove"
QT_MOC_LITERAL(69, 1128, 15), // "itemsUnderMouse"
QT_MOC_LITERAL(70, 1144, 13), // "embeddedViews"
QT_MOC_LITERAL(71, 1158, 22), // "scrollAfterResize_data"
QT_MOC_LITERAL(72, 1181, 17), // "scrollAfterResize"
QT_MOC_LITERAL(73, 1199, 27), // "moveItemWhileScrolling_data"
QT_MOC_LITERAL(74, 1227, 22), // "moveItemWhileScrolling"
QT_MOC_LITERAL(75, 1250, 17), // "centerOnDirtyItem"
QT_MOC_LITERAL(76, 1268, 13), // "mouseTracking"
QT_MOC_LITERAL(77, 1282, 14), // "mouseTracking2"
QT_MOC_LITERAL(78, 1297, 14), // "mouseTracking3"
QT_MOC_LITERAL(79, 1312, 6), // "render"
QT_MOC_LITERAL(80, 1319, 12), // "exposeRegion"
QT_MOC_LITERAL(81, 1332, 11), // "update_data"
QT_MOC_LITERAL(82, 1344, 6), // "update"
QT_MOC_LITERAL(83, 1351, 12), // "update2_data"
QT_MOC_LITERAL(84, 1364, 7), // "update2"
QT_MOC_LITERAL(85, 1372, 35), // "update_ancestorClipsChildrenT..."
QT_MOC_LITERAL(86, 1408, 36), // "update_ancestorClipsChildrenT..."
QT_MOC_LITERAL(87, 1445, 22), // "inputMethodSensitivity"
QT_MOC_LITERAL(88, 1468, 17), // "inputContextReset"
QT_MOC_LITERAL(89, 1486, 16), // "indirectPainting"
QT_MOC_LITERAL(90, 1503, 31), // "compositionModeInDrawBackground"
QT_MOC_LITERAL(91, 1535, 31), // "task172231_untransformableItems"
QT_MOC_LITERAL(92, 1567, 31), // "task180429_mouseReleaseDragMode"
QT_MOC_LITERAL(93, 1599, 31), // "task187791_setSceneCausesUpdate"
QT_MOC_LITERAL(94, 1631, 29), // "task186827_deleteReplayedItem"
QT_MOC_LITERAL(95, 1661, 21), // "task207546_focusCrash"
QT_MOC_LITERAL(96, 1683, 33), // "task210599_unsetDragWhileDrag..."
QT_MOC_LITERAL(97, 1717, 28), // "task239729_noViewUpdate_data"
QT_MOC_LITERAL(98, 1746, 23), // "task239729_noViewUpdate"
QT_MOC_LITERAL(99, 1770, 33), // "task239047_fitInViewSmallView..."
QT_MOC_LITERAL(100, 1804, 31), // "task245469_itemsAtPointWithClip"
QT_MOC_LITERAL(101, 1836, 45), // "task253415_reconnectUpdateSce..."
QT_MOC_LITERAL(102, 1882, 54), // "task255529_transformationAnch..."
QT_MOC_LITERAL(103, 1937, 29), // "task259503_scrollingArtifacts"
QT_MOC_LITERAL(104, 1967, 29), // "QTBUG_4151_clipAndIgnore_data"
QT_MOC_LITERAL(105, 1997, 24), // "QTBUG_4151_clipAndIgnore"
QT_MOC_LITERAL(106, 2022, 22), // "QTBUG_5859_exposedRect"
QT_MOC_LITERAL(107, 2045, 17), // "QTBUG_7438_cursor"
QT_MOC_LITERAL(108, 2063, 10), // "hoverLeave"
QT_MOC_LITERAL(109, 2074, 26), // "QTBUG_16063_microFocusRect"
QT_MOC_LITERAL(110, 2101, 9) // "dummySlot"

    },
    "tst_QGraphicsView\0cleanup\0\0construction\0"
    "renderHints\0alignment\0interactive\0"
    "scene\0setScene\0deleteScene\0sceneRect\0"
    "sceneRect_growing\0setSceneRect\0viewport\0"
    "openGLViewport\0dragMode_scrollHand\0"
    "dragMode_rubberBand\0rubberBandSelectionMode\0"
    "rubberBandExtendSelection\0rotated_rubberBand\0"
    "backgroundBrush\0foregroundBrush\0matrix\0"
    "matrix_convenience\0matrix_combine\0"
    "centerOnPoint\0centerOnItem\0ensureVisibleRect\0"
    "fitInView\0itemsAtPoint\0itemsInRect\0"
    "itemsInRect_cosmeticAdjust_data\0"
    "itemsInRect_cosmeticAdjust\0itemsInPoly\0"
    "itemsInPath\0itemAt\0itemAt2\0mapToScene\0"
    "mapToScenePoint\0mapToSceneRect_data\0"
    "mapToSceneRect\0mapToScenePoly\0"
    "mapToScenePath\0mapFromScenePoint\0"
    "mapFromSceneRect\0mapFromScenePoly\0"
    "mapFromScenePath\0sendEvent\0wheelEvent\0"
    "cursor\0cursor2\0transformationAnchor\0"
    "resizeAnchor\0viewportUpdateMode\0"
    "viewportUpdateMode2\0acceptDrops\0"
    "optimizationFlags\0"
    "optimizationFlags_dontSavePainterState\0"
    "optimizationFlags_dontSavePainterState2_data\0"
    "optimizationFlags_dontSavePainterState2\0"
    "levelOfDetail_data\0levelOfDetail\0"
    "scrollBarRanges_data\0scrollBarRanges\0"
    "acceptMousePressEvent\0acceptMouseDoubleClickEvent\0"
    "forwardMousePress\0forwardMouseDoubleClick\0"
    "replayMouseMove\0itemsUnderMouse\0"
    "embeddedViews\0scrollAfterResize_data\0"
    "scrollAfterResize\0moveItemWhileScrolling_data\0"
    "moveItemWhileScrolling\0centerOnDirtyItem\0"
    "mouseTracking\0mouseTracking2\0"
    "mouseTracking3\0render\0exposeRegion\0"
    "update_data\0update\0update2_data\0update2\0"
    "update_ancestorClipsChildrenToShape\0"
    "update_ancestorClipsChildrenToShape2\0"
    "inputMethodSensitivity\0inputContextReset\0"
    "indirectPainting\0compositionModeInDrawBackground\0"
    "task172231_untransformableItems\0"
    "task180429_mouseReleaseDragMode\0"
    "task187791_setSceneCausesUpdate\0"
    "task186827_deleteReplayedItem\0"
    "task207546_focusCrash\0"
    "task210599_unsetDragWhileDragging\0"
    "task239729_noViewUpdate_data\0"
    "task239729_noViewUpdate\0"
    "task239047_fitInViewSmallViewport\0"
    "task245469_itemsAtPointWithClip\0"
    "task253415_reconnectUpdateSceneOnSceneChanged\0"
    "task255529_transformationAnchorMouseAndViewportMargins\0"
    "task259503_scrollingArtifacts\0"
    "QTBUG_4151_clipAndIgnore_data\0"
    "QTBUG_4151_clipAndIgnore\0"
    "QTBUG_5859_exposedRect\0QTBUG_7438_cursor\0"
    "hoverLeave\0QTBUG_16063_microFocusRect\0"
    "dummySlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QGraphicsView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     109,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  559,    2, 0x08 /* Private */,
       3,    0,  560,    2, 0x08 /* Private */,
       4,    0,  561,    2, 0x08 /* Private */,
       5,    0,  562,    2, 0x08 /* Private */,
       6,    0,  563,    2, 0x08 /* Private */,
       7,    0,  564,    2, 0x08 /* Private */,
       8,    0,  565,    2, 0x08 /* Private */,
       9,    0,  566,    2, 0x08 /* Private */,
      10,    0,  567,    2, 0x08 /* Private */,
      11,    0,  568,    2, 0x08 /* Private */,
      12,    0,  569,    2, 0x08 /* Private */,
      13,    0,  570,    2, 0x08 /* Private */,
      14,    0,  571,    2, 0x08 /* Private */,
      15,    0,  572,    2, 0x08 /* Private */,
      16,    0,  573,    2, 0x08 /* Private */,
      17,    0,  574,    2, 0x08 /* Private */,
      18,    0,  575,    2, 0x08 /* Private */,
      19,    0,  576,    2, 0x08 /* Private */,
      20,    0,  577,    2, 0x08 /* Private */,
      21,    0,  578,    2, 0x08 /* Private */,
      22,    0,  579,    2, 0x08 /* Private */,
      23,    0,  580,    2, 0x08 /* Private */,
      24,    0,  581,    2, 0x08 /* Private */,
      25,    0,  582,    2, 0x08 /* Private */,
      26,    0,  583,    2, 0x08 /* Private */,
      27,    0,  584,    2, 0x08 /* Private */,
      28,    0,  585,    2, 0x08 /* Private */,
      29,    0,  586,    2, 0x08 /* Private */,
      30,    0,  587,    2, 0x08 /* Private */,
      31,    0,  588,    2, 0x08 /* Private */,
      32,    0,  589,    2, 0x08 /* Private */,
      33,    0,  590,    2, 0x08 /* Private */,
      34,    0,  591,    2, 0x08 /* Private */,
      35,    0,  592,    2, 0x08 /* Private */,
      36,    0,  593,    2, 0x08 /* Private */,
      37,    0,  594,    2, 0x08 /* Private */,
      38,    0,  595,    2, 0x08 /* Private */,
      39,    0,  596,    2, 0x08 /* Private */,
      40,    0,  597,    2, 0x08 /* Private */,
      41,    0,  598,    2, 0x08 /* Private */,
      42,    0,  599,    2, 0x08 /* Private */,
      43,    0,  600,    2, 0x08 /* Private */,
      44,    0,  601,    2, 0x08 /* Private */,
      45,    0,  602,    2, 0x08 /* Private */,
      46,    0,  603,    2, 0x08 /* Private */,
      47,    0,  604,    2, 0x08 /* Private */,
      48,    0,  605,    2, 0x08 /* Private */,
      49,    0,  606,    2, 0x08 /* Private */,
      50,    0,  607,    2, 0x08 /* Private */,
      51,    0,  608,    2, 0x08 /* Private */,
      52,    0,  609,    2, 0x08 /* Private */,
      53,    0,  610,    2, 0x08 /* Private */,
      54,    0,  611,    2, 0x08 /* Private */,
      55,    0,  612,    2, 0x08 /* Private */,
      56,    0,  613,    2, 0x08 /* Private */,
      57,    0,  614,    2, 0x08 /* Private */,
      58,    0,  615,    2, 0x08 /* Private */,
      59,    0,  616,    2, 0x08 /* Private */,
      60,    0,  617,    2, 0x08 /* Private */,
      61,    0,  618,    2, 0x08 /* Private */,
      62,    0,  619,    2, 0x08 /* Private */,
      63,    0,  620,    2, 0x08 /* Private */,
      64,    0,  621,    2, 0x08 /* Private */,
      65,    0,  622,    2, 0x08 /* Private */,
      66,    0,  623,    2, 0x08 /* Private */,
      67,    0,  624,    2, 0x08 /* Private */,
      68,    0,  625,    2, 0x08 /* Private */,
      69,    0,  626,    2, 0x08 /* Private */,
      70,    0,  627,    2, 0x08 /* Private */,
      71,    0,  628,    2, 0x08 /* Private */,
      72,    0,  629,    2, 0x08 /* Private */,
      73,    0,  630,    2, 0x08 /* Private */,
      74,    0,  631,    2, 0x08 /* Private */,
      75,    0,  632,    2, 0x08 /* Private */,
      76,    0,  633,    2, 0x08 /* Private */,
      77,    0,  634,    2, 0x08 /* Private */,
      78,    0,  635,    2, 0x08 /* Private */,
      79,    0,  636,    2, 0x08 /* Private */,
      80,    0,  637,    2, 0x08 /* Private */,
      81,    0,  638,    2, 0x08 /* Private */,
      82,    0,  639,    2, 0x08 /* Private */,
      83,    0,  640,    2, 0x08 /* Private */,
      84,    0,  641,    2, 0x08 /* Private */,
      85,    0,  642,    2, 0x08 /* Private */,
      86,    0,  643,    2, 0x08 /* Private */,
      87,    0,  644,    2, 0x08 /* Private */,
      88,    0,  645,    2, 0x08 /* Private */,
      89,    0,  646,    2, 0x08 /* Private */,
      90,    0,  647,    2, 0x08 /* Private */,
      91,    0,  648,    2, 0x08 /* Private */,
      92,    0,  649,    2, 0x08 /* Private */,
      93,    0,  650,    2, 0x08 /* Private */,
      94,    0,  651,    2, 0x08 /* Private */,
      95,    0,  652,    2, 0x08 /* Private */,
      96,    0,  653,    2, 0x08 /* Private */,
      97,    0,  654,    2, 0x08 /* Private */,
      98,    0,  655,    2, 0x08 /* Private */,
      99,    0,  656,    2, 0x08 /* Private */,
     100,    0,  657,    2, 0x08 /* Private */,
     101,    0,  658,    2, 0x08 /* Private */,
     102,    0,  659,    2, 0x08 /* Private */,
     103,    0,  660,    2, 0x08 /* Private */,
     104,    0,  661,    2, 0x08 /* Private */,
     105,    0,  662,    2, 0x08 /* Private */,
     106,    0,  663,    2, 0x08 /* Private */,
     107,    0,  664,    2, 0x08 /* Private */,
     108,    0,  665,    2, 0x08 /* Private */,
     109,    0,  666,    2, 0x08 /* Private */,
     110,    0,  667,    2, 0x0a /* Public */,

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

       0        // eod
};

void tst_QGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QGraphicsView *_t = static_cast<tst_QGraphicsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cleanup(); break;
        case 1: _t->construction(); break;
        case 2: _t->renderHints(); break;
        case 3: _t->alignment(); break;
        case 4: _t->interactive(); break;
        case 5: _t->scene(); break;
        case 6: _t->setScene(); break;
        case 7: _t->deleteScene(); break;
        case 8: _t->sceneRect(); break;
        case 9: _t->sceneRect_growing(); break;
        case 10: _t->setSceneRect(); break;
        case 11: _t->viewport(); break;
        case 12: _t->openGLViewport(); break;
        case 13: _t->dragMode_scrollHand(); break;
        case 14: _t->dragMode_rubberBand(); break;
        case 15: _t->rubberBandSelectionMode(); break;
        case 16: _t->rubberBandExtendSelection(); break;
        case 17: _t->rotated_rubberBand(); break;
        case 18: _t->backgroundBrush(); break;
        case 19: _t->foregroundBrush(); break;
        case 20: _t->matrix(); break;
        case 21: _t->matrix_convenience(); break;
        case 22: _t->matrix_combine(); break;
        case 23: _t->centerOnPoint(); break;
        case 24: _t->centerOnItem(); break;
        case 25: _t->ensureVisibleRect(); break;
        case 26: _t->fitInView(); break;
        case 27: _t->itemsAtPoint(); break;
        case 28: _t->itemsInRect(); break;
        case 29: _t->itemsInRect_cosmeticAdjust_data(); break;
        case 30: _t->itemsInRect_cosmeticAdjust(); break;
        case 31: _t->itemsInPoly(); break;
        case 32: _t->itemsInPath(); break;
        case 33: _t->itemAt(); break;
        case 34: _t->itemAt2(); break;
        case 35: _t->mapToScene(); break;
        case 36: _t->mapToScenePoint(); break;
        case 37: _t->mapToSceneRect_data(); break;
        case 38: _t->mapToSceneRect(); break;
        case 39: _t->mapToScenePoly(); break;
        case 40: _t->mapToScenePath(); break;
        case 41: _t->mapFromScenePoint(); break;
        case 42: _t->mapFromSceneRect(); break;
        case 43: _t->mapFromScenePoly(); break;
        case 44: _t->mapFromScenePath(); break;
        case 45: _t->sendEvent(); break;
        case 46: _t->wheelEvent(); break;
        case 47: _t->cursor(); break;
        case 48: _t->cursor2(); break;
        case 49: _t->transformationAnchor(); break;
        case 50: _t->resizeAnchor(); break;
        case 51: _t->viewportUpdateMode(); break;
        case 52: _t->viewportUpdateMode2(); break;
        case 53: _t->acceptDrops(); break;
        case 54: _t->optimizationFlags(); break;
        case 55: _t->optimizationFlags_dontSavePainterState(); break;
        case 56: _t->optimizationFlags_dontSavePainterState2_data(); break;
        case 57: _t->optimizationFlags_dontSavePainterState2(); break;
        case 58: _t->levelOfDetail_data(); break;
        case 59: _t->levelOfDetail(); break;
        case 60: _t->scrollBarRanges_data(); break;
        case 61: _t->scrollBarRanges(); break;
        case 62: _t->acceptMousePressEvent(); break;
        case 63: _t->acceptMouseDoubleClickEvent(); break;
        case 64: _t->forwardMousePress(); break;
        case 65: _t->forwardMouseDoubleClick(); break;
        case 66: _t->replayMouseMove(); break;
        case 67: _t->itemsUnderMouse(); break;
        case 68: _t->embeddedViews(); break;
        case 69: _t->scrollAfterResize_data(); break;
        case 70: _t->scrollAfterResize(); break;
        case 71: _t->moveItemWhileScrolling_data(); break;
        case 72: _t->moveItemWhileScrolling(); break;
        case 73: _t->centerOnDirtyItem(); break;
        case 74: _t->mouseTracking(); break;
        case 75: _t->mouseTracking2(); break;
        case 76: _t->mouseTracking3(); break;
        case 77: _t->render(); break;
        case 78: _t->exposeRegion(); break;
        case 79: _t->update_data(); break;
        case 80: _t->update(); break;
        case 81: _t->update2_data(); break;
        case 82: _t->update2(); break;
        case 83: _t->update_ancestorClipsChildrenToShape(); break;
        case 84: _t->update_ancestorClipsChildrenToShape2(); break;
        case 85: _t->inputMethodSensitivity(); break;
        case 86: _t->inputContextReset(); break;
        case 87: _t->indirectPainting(); break;
        case 88: _t->compositionModeInDrawBackground(); break;
        case 89: _t->task172231_untransformableItems(); break;
        case 90: _t->task180429_mouseReleaseDragMode(); break;
        case 91: _t->task187791_setSceneCausesUpdate(); break;
        case 92: _t->task186827_deleteReplayedItem(); break;
        case 93: _t->task207546_focusCrash(); break;
        case 94: _t->task210599_unsetDragWhileDragging(); break;
        case 95: _t->task239729_noViewUpdate_data(); break;
        case 96: _t->task239729_noViewUpdate(); break;
        case 97: _t->task239047_fitInViewSmallViewport(); break;
        case 98: _t->task245469_itemsAtPointWithClip(); break;
        case 99: _t->task253415_reconnectUpdateSceneOnSceneChanged(); break;
        case 100: _t->task255529_transformationAnchorMouseAndViewportMargins(); break;
        case 101: _t->task259503_scrollingArtifacts(); break;
        case 102: _t->QTBUG_4151_clipAndIgnore_data(); break;
        case 103: _t->QTBUG_4151_clipAndIgnore(); break;
        case 104: _t->QTBUG_5859_exposedRect(); break;
        case 105: _t->QTBUG_7438_cursor(); break;
        case 106: _t->hoverLeave(); break;
        case 107: _t->QTBUG_16063_microFocusRect(); break;
        case 108: _t->dummySlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QGraphicsView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QGraphicsView.data,
      qt_meta_data_tst_QGraphicsView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QGraphicsView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 109)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 109;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 109)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 109;
    }
    return _id;
}
struct qt_meta_stringdata_CustomView_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomView_t qt_meta_stringdata_CustomView = {
    {
QT_MOC_LITERAL(0, 0, 10) // "CustomView"

    },
    "CustomView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomView[] = {

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

void CustomView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CustomView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_CustomView.data,
      qt_meta_data_CustomView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CustomView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int CustomView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ChangedListener_t {
    QByteArrayData data[5];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChangedListener_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChangedListener_t qt_meta_stringdata_ChangedListener = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ChangedListener"
QT_MOC_LITERAL(1, 16, 7), // "changed"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "QList<QRectF>"
QT_MOC_LITERAL(4, 39, 5) // "dirty"

    },
    "ChangedListener\0changed\0\0QList<QRectF>\0"
    "dirty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChangedListener[] = {

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
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void ChangedListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChangedListener *_t = static_cast<ChangedListener *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< const QList<QRectF>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QRectF> >(); break;
            }
            break;
        }
    }
}

const QMetaObject ChangedListener::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ChangedListener.data,
      qt_meta_data_ChangedListener,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ChangedListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChangedListener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChangedListener.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ChangedListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
