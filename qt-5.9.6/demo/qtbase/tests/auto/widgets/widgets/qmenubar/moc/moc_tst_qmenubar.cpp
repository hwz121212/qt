/****************************************************************************
** Meta object code from reading C++ file 'tst_qmenubar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qmenubar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qmenubar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Menu_t {
    QByteArrayData data[3];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Menu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Menu_t qt_meta_stringdata_Menu = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Menu"
QT_MOC_LITERAL(1, 5, 10), // "addActions"
QT_MOC_LITERAL(2, 16, 0) // ""

    },
    "Menu\0addActions\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Menu[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Menu *_t = static_cast<Menu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addActions(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Menu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_Menu.data,
      qt_meta_data_Menu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Menu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Menu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int Menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_tst_QMenuBar_t {
    QByteArrayData data[44];
    char stringdata0[816];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QMenuBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QMenuBar_t qt_meta_stringdata_tst_QMenuBar = {
    {
QT_MOC_LITERAL(0, 0, 12), // "tst_QMenuBar"
QT_MOC_LITERAL(1, 13, 11), // "getSetCheck"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "cleanup"
QT_MOC_LITERAL(4, 34, 5), // "clear"
QT_MOC_LITERAL(5, 40, 12), // "removeItemAt"
QT_MOC_LITERAL(6, 53, 17), // "removeItemAt_data"
QT_MOC_LITERAL(7, 71, 15), // "removeItem_data"
QT_MOC_LITERAL(8, 87, 10), // "removeItem"
QT_MOC_LITERAL(9, 98, 5), // "count"
QT_MOC_LITERAL(10, 104, 26), // "insertItem_QString_QObject"
QT_MOC_LITERAL(11, 131, 5), // "accel"
QT_MOC_LITERAL(12, 137, 14), // "activatedCount"
QT_MOC_LITERAL(13, 152, 19), // "activatedCount_data"
QT_MOC_LITERAL(14, 172, 15), // "check_accelKeys"
QT_MOC_LITERAL(15, 188, 17), // "check_cursorKeys1"
QT_MOC_LITERAL(16, 206, 17), // "check_cursorKeys2"
QT_MOC_LITERAL(17, 224, 17), // "check_cursorKeys3"
QT_MOC_LITERAL(18, 242, 12), // "check_escKey"
QT_MOC_LITERAL(19, 255, 22), // "allowActiveAndDisabled"
QT_MOC_LITERAL(20, 278, 20), // "taskQTBUG56860_focus"
QT_MOC_LITERAL(21, 299, 12), // "check_endKey"
QT_MOC_LITERAL(22, 312, 13), // "check_homeKey"
QT_MOC_LITERAL(23, 326, 14), // "check_altPress"
QT_MOC_LITERAL(24, 341, 19), // "check_altClosePress"
QT_MOC_LITERAL(25, 361, 19), // "check_shortcutPress"
QT_MOC_LITERAL(26, 381, 18), // "check_menuPosition"
QT_MOC_LITERAL(27, 400, 43), // "taskQTBUG46812_doNotLeaveMenu..."
QT_MOC_LITERAL(28, 444, 20), // "task223138_triggered"
QT_MOC_LITERAL(29, 465, 20), // "task256322_highlight"
QT_MOC_LITERAL(30, 486, 15), // "menubarSizeHint"
QT_MOC_LITERAL(31, 502, 25), // "taskQTBUG4965_escapeEaten"
QT_MOC_LITERAL(32, 528, 40), // "taskQTBUG11823_crashwithInvis..."
QT_MOC_LITERAL(33, 569, 37), // "closeOnSecondClickAndOpenOnTh..."
QT_MOC_LITERAL(34, 607, 18), // "cornerWidgets_data"
QT_MOC_LITERAL(35, 626, 13), // "cornerWidgets"
QT_MOC_LITERAL(36, 640, 34), // "taskQTBUG53205_crashReparentN..."
QT_MOC_LITERAL(37, 675, 29), // "taskQTBUG55966_subMenuRemoved"
QT_MOC_LITERAL(38, 705, 23), // "QTBUG_58344_invalidIcon"
QT_MOC_LITERAL(39, 729, 12), // "platformMenu"
QT_MOC_LITERAL(40, 742, 17), // "onSimpleActivated"
QT_MOC_LITERAL(41, 760, 8), // "QAction*"
QT_MOC_LITERAL(42, 769, 24), // "onComplexActionTriggered"
QT_MOC_LITERAL(43, 794, 21) // "slotForTaskQTBUG53205"

    },
    "tst_QMenuBar\0getSetCheck\0\0cleanup\0"
    "clear\0removeItemAt\0removeItemAt_data\0"
    "removeItem_data\0removeItem\0count\0"
    "insertItem_QString_QObject\0accel\0"
    "activatedCount\0activatedCount_data\0"
    "check_accelKeys\0check_cursorKeys1\0"
    "check_cursorKeys2\0check_cursorKeys3\0"
    "check_escKey\0allowActiveAndDisabled\0"
    "taskQTBUG56860_focus\0check_endKey\0"
    "check_homeKey\0check_altPress\0"
    "check_altClosePress\0check_shortcutPress\0"
    "check_menuPosition\0"
    "taskQTBUG46812_doNotLeaveMenubarHighlighted\0"
    "task223138_triggered\0task256322_highlight\0"
    "menubarSizeHint\0taskQTBUG4965_escapeEaten\0"
    "taskQTBUG11823_crashwithInvisibleActions\0"
    "closeOnSecondClickAndOpenOnThirdClick\0"
    "cornerWidgets_data\0cornerWidgets\0"
    "taskQTBUG53205_crashReparentNested\0"
    "taskQTBUG55966_subMenuRemoved\0"
    "QTBUG_58344_invalidIcon\0platformMenu\0"
    "onSimpleActivated\0QAction*\0"
    "onComplexActionTriggered\0slotForTaskQTBUG53205"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QMenuBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  219,    2, 0x08 /* Private */,
       3,    0,  220,    2, 0x08 /* Private */,
       4,    0,  221,    2, 0x08 /* Private */,
       5,    0,  222,    2, 0x08 /* Private */,
       6,    0,  223,    2, 0x08 /* Private */,
       7,    0,  224,    2, 0x08 /* Private */,
       8,    0,  225,    2, 0x08 /* Private */,
       9,    0,  226,    2, 0x08 /* Private */,
      10,    0,  227,    2, 0x08 /* Private */,
      11,    0,  228,    2, 0x08 /* Private */,
      12,    0,  229,    2, 0x08 /* Private */,
      13,    0,  230,    2, 0x08 /* Private */,
      14,    0,  231,    2, 0x08 /* Private */,
      15,    0,  232,    2, 0x08 /* Private */,
      16,    0,  233,    2, 0x08 /* Private */,
      17,    0,  234,    2, 0x08 /* Private */,
      18,    0,  235,    2, 0x08 /* Private */,
      19,    0,  236,    2, 0x08 /* Private */,
      20,    0,  237,    2, 0x08 /* Private */,
      21,    0,  238,    2, 0x08 /* Private */,
      22,    0,  239,    2, 0x08 /* Private */,
      23,    0,  240,    2, 0x08 /* Private */,
      24,    0,  241,    2, 0x08 /* Private */,
      25,    0,  242,    2, 0x08 /* Private */,
      26,    0,  243,    2, 0x08 /* Private */,
      27,    0,  244,    2, 0x08 /* Private */,
      28,    0,  245,    2, 0x08 /* Private */,
      29,    0,  246,    2, 0x08 /* Private */,
      30,    0,  247,    2, 0x08 /* Private */,
      31,    0,  248,    2, 0x08 /* Private */,
      32,    0,  249,    2, 0x08 /* Private */,
      33,    0,  250,    2, 0x08 /* Private */,
      34,    0,  251,    2, 0x08 /* Private */,
      35,    0,  252,    2, 0x08 /* Private */,
      36,    0,  253,    2, 0x08 /* Private */,
      37,    0,  254,    2, 0x08 /* Private */,
      38,    0,  255,    2, 0x08 /* Private */,
      39,    0,  256,    2, 0x08 /* Private */,
      40,    1,  257,    2, 0x09 /* Protected */,
      42,    0,  260,    2, 0x09 /* Protected */,
      43,    0,  261,    2, 0x09 /* Protected */,

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
    QMetaType::Void, 0x80000000 | 41,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tst_QMenuBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QMenuBar *_t = static_cast<tst_QMenuBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getSetCheck(); break;
        case 1: _t->cleanup(); break;
        case 2: _t->clear(); break;
        case 3: _t->removeItemAt(); break;
        case 4: _t->removeItemAt_data(); break;
        case 5: _t->removeItem_data(); break;
        case 6: _t->removeItem(); break;
        case 7: _t->count(); break;
        case 8: _t->insertItem_QString_QObject(); break;
        case 9: _t->accel(); break;
        case 10: _t->activatedCount(); break;
        case 11: _t->activatedCount_data(); break;
        case 12: _t->check_accelKeys(); break;
        case 13: _t->check_cursorKeys1(); break;
        case 14: _t->check_cursorKeys2(); break;
        case 15: _t->check_cursorKeys3(); break;
        case 16: _t->check_escKey(); break;
        case 17: _t->allowActiveAndDisabled(); break;
        case 18: _t->taskQTBUG56860_focus(); break;
        case 19: _t->check_endKey(); break;
        case 20: _t->check_homeKey(); break;
        case 21: _t->check_altPress(); break;
        case 22: _t->check_altClosePress(); break;
        case 23: _t->check_shortcutPress(); break;
        case 24: _t->check_menuPosition(); break;
        case 25: _t->taskQTBUG46812_doNotLeaveMenubarHighlighted(); break;
        case 26: _t->task223138_triggered(); break;
        case 27: _t->task256322_highlight(); break;
        case 28: _t->menubarSizeHint(); break;
        case 29: _t->taskQTBUG4965_escapeEaten(); break;
        case 30: _t->taskQTBUG11823_crashwithInvisibleActions(); break;
        case 31: _t->closeOnSecondClickAndOpenOnThirdClick(); break;
        case 32: _t->cornerWidgets_data(); break;
        case 33: _t->cornerWidgets(); break;
        case 34: _t->taskQTBUG53205_crashReparentNested(); break;
        case 35: _t->taskQTBUG55966_subMenuRemoved(); break;
        case 36: _t->QTBUG_58344_invalidIcon(); break;
        case 37: _t->platformMenu(); break;
        case 38: _t->onSimpleActivated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 39: _t->onComplexActionTriggered(); break;
        case 40: _t->slotForTaskQTBUG53205(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject tst_QMenuBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QMenuBar.data,
      qt_meta_data_tst_QMenuBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QMenuBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QMenuBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QMenuBar.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QMenuBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
