/****************************************************************************
** Meta object code from reading C++ file 'tst_qboxlayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qboxlayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qboxlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QBoxLayout_t {
    QByteArrayData data[16];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QBoxLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QBoxLayout_t qt_meta_stringdata_tst_QBoxLayout = {
    {
QT_MOC_LITERAL(0, 0, 14), // "tst_QBoxLayout"
QT_MOC_LITERAL(1, 15, 7), // "cleanup"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "insertSpacerItem"
QT_MOC_LITERAL(4, 41, 12), // "insertLayout"
QT_MOC_LITERAL(5, 54, 8), // "sizeHint"
QT_MOC_LITERAL(6, 63, 15), // "sizeConstraints"
QT_MOC_LITERAL(7, 79, 11), // "setGeometry"
QT_MOC_LITERAL(8, 91, 27), // "setStyleShouldChangeSpacing"
QT_MOC_LITERAL(9, 119, 21), // "testLayoutEngine_data"
QT_MOC_LITERAL(10, 141, 16), // "testLayoutEngine"
QT_MOC_LITERAL(11, 158, 38), // "taskQTBUG_7103_minMaxWidthNot..."
QT_MOC_LITERAL(12, 197, 42), // "taskQTBUG_27420_takeAtShouldU..."
QT_MOC_LITERAL(13, 240, 42), // "taskQTBUG_40609_addingWidgetT..."
QT_MOC_LITERAL(14, 283, 36), // "taskQTBUG_40609_addingLayoutT..."
QT_MOC_LITERAL(15, 320, 13) // "replaceWidget"

    },
    "tst_QBoxLayout\0cleanup\0\0insertSpacerItem\0"
    "insertLayout\0sizeHint\0sizeConstraints\0"
    "setGeometry\0setStyleShouldChangeSpacing\0"
    "testLayoutEngine_data\0testLayoutEngine\0"
    "taskQTBUG_7103_minMaxWidthNotRespected\0"
    "taskQTBUG_27420_takeAtShouldUnparentLayout\0"
    "taskQTBUG_40609_addingWidgetToItsOwnLayout\0"
    "taskQTBUG_40609_addingLayoutToItself\0"
    "replaceWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QBoxLayout[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

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

       0        // eod
};

void tst_QBoxLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QBoxLayout *_t = static_cast<tst_QBoxLayout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cleanup(); break;
        case 1: _t->insertSpacerItem(); break;
        case 2: _t->insertLayout(); break;
        case 3: _t->sizeHint(); break;
        case 4: _t->sizeConstraints(); break;
        case 5: _t->setGeometry(); break;
        case 6: _t->setStyleShouldChangeSpacing(); break;
        case 7: _t->testLayoutEngine_data(); break;
        case 8: _t->testLayoutEngine(); break;
        case 9: _t->taskQTBUG_7103_minMaxWidthNotRespected(); break;
        case 10: _t->taskQTBUG_27420_takeAtShouldUnparentLayout(); break;
        case 11: _t->taskQTBUG_40609_addingWidgetToItsOwnLayout(); break;
        case 12: _t->taskQTBUG_40609_addingLayoutToItself(); break;
        case 13: _t->replaceWidget(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QBoxLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QBoxLayout.data,
      qt_meta_data_tst_QBoxLayout,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QBoxLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QBoxLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QBoxLayout.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QBoxLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
struct qt_meta_stringdata_CustomLayoutStyle_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomLayoutStyle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomLayoutStyle_t qt_meta_stringdata_CustomLayoutStyle = {
    {
QT_MOC_LITERAL(0, 0, 17) // "CustomLayoutStyle"

    },
    "CustomLayoutStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomLayoutStyle[] = {

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

void CustomLayoutStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CustomLayoutStyle::staticMetaObject = {
    { &QProxyStyle::staticMetaObject, qt_meta_stringdata_CustomLayoutStyle.data,
      qt_meta_data_CustomLayoutStyle,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CustomLayoutStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomLayoutStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomLayoutStyle.stringdata0))
        return static_cast<void*>(this);
    return QProxyStyle::qt_metacast(_clname);
}

int CustomLayoutStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProxyStyle::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
