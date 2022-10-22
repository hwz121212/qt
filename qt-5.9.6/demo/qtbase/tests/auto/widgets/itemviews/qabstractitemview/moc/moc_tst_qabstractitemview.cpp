/****************************************************************************
** Meta object code from reading C++ file 'tst_qabstractitemview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qabstractitemview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qabstractitemview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeometriesTestView_t {
    QByteArrayData data[3];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeometriesTestView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeometriesTestView_t qt_meta_stringdata_GeometriesTestView = {
    {
QT_MOC_LITERAL(0, 0, 18), // "GeometriesTestView"
QT_MOC_LITERAL(1, 19, 16), // "updateGeometries"
QT_MOC_LITERAL(2, 36, 0) // ""

    },
    "GeometriesTestView\0updateGeometries\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeometriesTestView[] = {

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
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void GeometriesTestView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GeometriesTestView *_t = static_cast<GeometriesTestView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateGeometries(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject GeometriesTestView::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_GeometriesTestView.data,
      qt_meta_data_GeometriesTestView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GeometriesTestView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeometriesTestView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeometriesTestView.stringdata0))
        return static_cast<void*>(this);
    return QTableView::qt_metacast(_clname);
}

int GeometriesTestView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_tst_QAbstractItemView_t {
    QByteArrayData data[50];
    char stringdata0[1106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QAbstractItemView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QAbstractItemView_t qt_meta_stringdata_tst_QAbstractItemView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "tst_QAbstractItemView"
QT_MOC_LITERAL(1, 22, 7), // "cleanup"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "getSetCheck"
QT_MOC_LITERAL(4, 43, 16), // "emptyModels_data"
QT_MOC_LITERAL(5, 60, 11), // "emptyModels"
QT_MOC_LITERAL(6, 72, 13), // "setModel_data"
QT_MOC_LITERAL(7, 86, 8), // "setModel"
QT_MOC_LITERAL(8, 95, 7), // "noModel"
QT_MOC_LITERAL(9, 103, 10), // "dragSelect"
QT_MOC_LITERAL(10, 114, 11), // "rowDelegate"
QT_MOC_LITERAL(11, 126, 14), // "columnDelegate"
QT_MOC_LITERAL(12, 141, 9), // "selectAll"
QT_MOC_LITERAL(13, 151, 5), // "ctrlA"
QT_MOC_LITERAL(14, 157, 21), // "persistentEditorFocus"
QT_MOC_LITERAL(15, 179, 15), // "setItemDelegate"
QT_MOC_LITERAL(16, 195, 20), // "setItemDelegate_data"
QT_MOC_LITERAL(17, 216, 16), // "noFallbackToRoot"
QT_MOC_LITERAL(18, 233, 20), // "setCurrentIndex_data"
QT_MOC_LITERAL(19, 254, 15), // "setCurrentIndex"
QT_MOC_LITERAL(20, 270, 25), // "task221955_selectedEditor"
QT_MOC_LITERAL(21, 296, 21), // "task250754_fontChange"
QT_MOC_LITERAL(22, 318, 22), // "task200665_itemEntered"
QT_MOC_LITERAL(23, 341, 22), // "task257481_emptyEditor"
QT_MOC_LITERAL(24, 364, 33), // "shiftArrowSelectionAfterScrol..."
QT_MOC_LITERAL(25, 398, 38), // "shiftSelectionAfterRubberband..."
QT_MOC_LITERAL(26, 437, 23), // "ctrlRubberbandSelection"
QT_MOC_LITERAL(27, 461, 27), // "QTBUG6407_extendedSelection"
QT_MOC_LITERAL(28, 489, 27), // "QTBUG6753_selectOnSelection"
QT_MOC_LITERAL(29, 517, 25), // "testDelegateDestroyEditor"
QT_MOC_LITERAL(30, 543, 17), // "testClickedSignal"
QT_MOC_LITERAL(31, 561, 21), // "testChangeEditorState"
QT_MOC_LITERAL(32, 583, 25), // "deselectInSingleSelection"
QT_MOC_LITERAL(33, 609, 28), // "testNoActivateOnDisabledItem"
QT_MOC_LITERAL(34, 638, 20), // "testFocusPolicy_data"
QT_MOC_LITERAL(35, 659, 15), // "testFocusPolicy"
QT_MOC_LITERAL(36, 675, 22), // "QTBUG31411_noSelection"
QT_MOC_LITERAL(37, 698, 43), // "QTBUG39324_settingSameInstanc..."
QT_MOC_LITERAL(38, 742, 28), // "sizeHintChangeTriggersLayout"
QT_MOC_LITERAL(39, 771, 40), // "shiftSelectionAfterChangingMo..."
QT_MOC_LITERAL(40, 812, 43), // "QTBUG48968_reentrant_updateEd..."
QT_MOC_LITERAL(41, 856, 33), // "QTBUG50102_SH_ItemView_Scroll..."
QT_MOC_LITERAL(42, 890, 40), // "QTBUG50535_update_on_new_sele..."
QT_MOC_LITERAL(43, 931, 32), // "testSelectionModelInSyncWithView"
QT_MOC_LITERAL(44, 964, 17), // "testClickToSelect"
QT_MOC_LITERAL(45, 982, 18), // "testDialogAsEditor"
QT_MOC_LITERAL(46, 1001, 31), // "QTBUG46785_mouseout_hover_state"
QT_MOC_LITERAL(47, 1033, 29), // "testClearModelInClickedSignal"
QT_MOC_LITERAL(48, 1063, 23), // "inputMethodEnabled_data"
QT_MOC_LITERAL(49, 1087, 18) // "inputMethodEnabled"

    },
    "tst_QAbstractItemView\0cleanup\0\0"
    "getSetCheck\0emptyModels_data\0emptyModels\0"
    "setModel_data\0setModel\0noModel\0"
    "dragSelect\0rowDelegate\0columnDelegate\0"
    "selectAll\0ctrlA\0persistentEditorFocus\0"
    "setItemDelegate\0setItemDelegate_data\0"
    "noFallbackToRoot\0setCurrentIndex_data\0"
    "setCurrentIndex\0task221955_selectedEditor\0"
    "task250754_fontChange\0task200665_itemEntered\0"
    "task257481_emptyEditor\0"
    "shiftArrowSelectionAfterScrolling\0"
    "shiftSelectionAfterRubberbandSelection\0"
    "ctrlRubberbandSelection\0"
    "QTBUG6407_extendedSelection\0"
    "QTBUG6753_selectOnSelection\0"
    "testDelegateDestroyEditor\0testClickedSignal\0"
    "testChangeEditorState\0deselectInSingleSelection\0"
    "testNoActivateOnDisabledItem\0"
    "testFocusPolicy_data\0testFocusPolicy\0"
    "QTBUG31411_noSelection\0"
    "QTBUG39324_settingSameInstanceOfIndexWidget\0"
    "sizeHintChangeTriggersLayout\0"
    "shiftSelectionAfterChangingModelContents\0"
    "QTBUG48968_reentrant_updateEditorGeometries\0"
    "QTBUG50102_SH_ItemView_ScrollMode\0"
    "QTBUG50535_update_on_new_selection_model\0"
    "testSelectionModelInSyncWithView\0"
    "testClickToSelect\0testDialogAsEditor\0"
    "QTBUG46785_mouseout_hover_state\0"
    "testClearModelInClickedSignal\0"
    "inputMethodEnabled_data\0inputMethodEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QAbstractItemView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  254,    2, 0x08 /* Private */,
       3,    0,  255,    2, 0x08 /* Private */,
       4,    0,  256,    2, 0x08 /* Private */,
       5,    0,  257,    2, 0x08 /* Private */,
       6,    0,  258,    2, 0x08 /* Private */,
       7,    0,  259,    2, 0x08 /* Private */,
       8,    0,  260,    2, 0x08 /* Private */,
       9,    0,  261,    2, 0x08 /* Private */,
      10,    0,  262,    2, 0x08 /* Private */,
      11,    0,  263,    2, 0x08 /* Private */,
      12,    0,  264,    2, 0x08 /* Private */,
      13,    0,  265,    2, 0x08 /* Private */,
      14,    0,  266,    2, 0x08 /* Private */,
      15,    0,  267,    2, 0x08 /* Private */,
      16,    0,  268,    2, 0x08 /* Private */,
      17,    0,  269,    2, 0x08 /* Private */,
      18,    0,  270,    2, 0x08 /* Private */,
      19,    0,  271,    2, 0x08 /* Private */,
      20,    0,  272,    2, 0x08 /* Private */,
      21,    0,  273,    2, 0x08 /* Private */,
      22,    0,  274,    2, 0x08 /* Private */,
      23,    0,  275,    2, 0x08 /* Private */,
      24,    0,  276,    2, 0x08 /* Private */,
      25,    0,  277,    2, 0x08 /* Private */,
      26,    0,  278,    2, 0x08 /* Private */,
      27,    0,  279,    2, 0x08 /* Private */,
      28,    0,  280,    2, 0x08 /* Private */,
      29,    0,  281,    2, 0x08 /* Private */,
      30,    0,  282,    2, 0x08 /* Private */,
      31,    0,  283,    2, 0x08 /* Private */,
      32,    0,  284,    2, 0x08 /* Private */,
      33,    0,  285,    2, 0x08 /* Private */,
      34,    0,  286,    2, 0x08 /* Private */,
      35,    0,  287,    2, 0x08 /* Private */,
      36,    0,  288,    2, 0x08 /* Private */,
      37,    0,  289,    2, 0x08 /* Private */,
      38,    0,  290,    2, 0x08 /* Private */,
      39,    0,  291,    2, 0x08 /* Private */,
      40,    0,  292,    2, 0x08 /* Private */,
      41,    0,  293,    2, 0x08 /* Private */,
      42,    0,  294,    2, 0x08 /* Private */,
      43,    0,  295,    2, 0x08 /* Private */,
      44,    0,  296,    2, 0x08 /* Private */,
      45,    0,  297,    2, 0x08 /* Private */,
      46,    0,  298,    2, 0x08 /* Private */,
      47,    0,  299,    2, 0x08 /* Private */,
      48,    0,  300,    2, 0x08 /* Private */,
      49,    0,  301,    2, 0x08 /* Private */,

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

       0        // eod
};

void tst_QAbstractItemView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QAbstractItemView *_t = static_cast<tst_QAbstractItemView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cleanup(); break;
        case 1: _t->getSetCheck(); break;
        case 2: _t->emptyModels_data(); break;
        case 3: _t->emptyModels(); break;
        case 4: _t->setModel_data(); break;
        case 5: _t->setModel(); break;
        case 6: _t->noModel(); break;
        case 7: _t->dragSelect(); break;
        case 8: _t->rowDelegate(); break;
        case 9: _t->columnDelegate(); break;
        case 10: _t->selectAll(); break;
        case 11: _t->ctrlA(); break;
        case 12: _t->persistentEditorFocus(); break;
        case 13: _t->setItemDelegate(); break;
        case 14: _t->setItemDelegate_data(); break;
        case 15: _t->noFallbackToRoot(); break;
        case 16: _t->setCurrentIndex_data(); break;
        case 17: _t->setCurrentIndex(); break;
        case 18: _t->task221955_selectedEditor(); break;
        case 19: _t->task250754_fontChange(); break;
        case 20: _t->task200665_itemEntered(); break;
        case 21: _t->task257481_emptyEditor(); break;
        case 22: _t->shiftArrowSelectionAfterScrolling(); break;
        case 23: _t->shiftSelectionAfterRubberbandSelection(); break;
        case 24: _t->ctrlRubberbandSelection(); break;
        case 25: _t->QTBUG6407_extendedSelection(); break;
        case 26: _t->QTBUG6753_selectOnSelection(); break;
        case 27: _t->testDelegateDestroyEditor(); break;
        case 28: _t->testClickedSignal(); break;
        case 29: _t->testChangeEditorState(); break;
        case 30: _t->deselectInSingleSelection(); break;
        case 31: _t->testNoActivateOnDisabledItem(); break;
        case 32: _t->testFocusPolicy_data(); break;
        case 33: _t->testFocusPolicy(); break;
        case 34: _t->QTBUG31411_noSelection(); break;
        case 35: _t->QTBUG39324_settingSameInstanceOfIndexWidget(); break;
        case 36: _t->sizeHintChangeTriggersLayout(); break;
        case 37: _t->shiftSelectionAfterChangingModelContents(); break;
        case 38: _t->QTBUG48968_reentrant_updateEditorGeometries(); break;
        case 39: _t->QTBUG50102_SH_ItemView_ScrollMode(); break;
        case 40: _t->QTBUG50535_update_on_new_selection_model(); break;
        case 41: _t->testSelectionModelInSyncWithView(); break;
        case 42: _t->testClickToSelect(); break;
        case 43: _t->testDialogAsEditor(); break;
        case 44: _t->QTBUG46785_mouseout_hover_state(); break;
        case 45: _t->testClearModelInClickedSignal(); break;
        case 46: _t->inputMethodEnabled_data(); break;
        case 47: _t->inputMethodEnabled(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QAbstractItemView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QAbstractItemView.data,
      qt_meta_data_tst_QAbstractItemView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QAbstractItemView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QAbstractItemView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QAbstractItemView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QAbstractItemView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 48;
    }
    return _id;
}
struct qt_meta_stringdata_SetSelectionTestView_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SetSelectionTestView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SetSelectionTestView_t qt_meta_stringdata_SetSelectionTestView = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SetSelectionTestView"
QT_MOC_LITERAL(1, 21, 18), // "setSelectionCalled"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4) // "rect"

    },
    "SetSelectionTestView\0setSelectionCalled\0"
    "\0rect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetSelectionTestView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRect,    3,

       0        // eod
};

void SetSelectionTestView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SetSelectionTestView *_t = static_cast<SetSelectionTestView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setSelectionCalled((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SetSelectionTestView::*_t)(const QRect & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetSelectionTestView::setSelectionCalled)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SetSelectionTestView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_SetSelectionTestView.data,
      qt_meta_data_SetSelectionTestView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SetSelectionTestView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetSelectionTestView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SetSelectionTestView.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int SetSelectionTestView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SetSelectionTestView::setSelectionCalled(const QRect & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_StateChangeDelegate_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StateChangeDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StateChangeDelegate_t qt_meta_stringdata_StateChangeDelegate = {
    {
QT_MOC_LITERAL(0, 0, 19) // "StateChangeDelegate"

    },
    "StateChangeDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StateChangeDelegate[] = {

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

void StateChangeDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject StateChangeDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_StateChangeDelegate.data,
      qt_meta_data_StateChangeDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StateChangeDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StateChangeDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StateChangeDelegate.stringdata0))
        return static_cast<void*>(this);
    return QItemDelegate::qt_metacast(_clname);
}

int StateChangeDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StateChangeModel_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StateChangeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StateChangeModel_t qt_meta_stringdata_StateChangeModel = {
    {
QT_MOC_LITERAL(0, 0, 16) // "StateChangeModel"

    },
    "StateChangeModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StateChangeModel[] = {

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

void StateChangeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject StateChangeModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_StateChangeModel.data,
      qt_meta_data_StateChangeModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StateChangeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StateChangeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StateChangeModel.stringdata0))
        return static_cast<void*>(this);
    return QStandardItemModel::qt_metacast(_clname);
}

int StateChangeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
