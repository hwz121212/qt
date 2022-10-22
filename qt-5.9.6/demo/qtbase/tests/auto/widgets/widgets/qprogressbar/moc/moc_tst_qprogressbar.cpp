/****************************************************************************
** Meta object code from reading C++ file 'tst_qprogressbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qprogressbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qprogressbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QProgressBar_t {
    QByteArrayData data[15];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QProgressBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QProgressBar_t qt_meta_stringdata_tst_QProgressBar = {
    {
QT_MOC_LITERAL(0, 0, 16), // "tst_QProgressBar"
QT_MOC_LITERAL(1, 17, 11), // "getSetCheck"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "minMaxSameValue"
QT_MOC_LITERAL(4, 46, 20), // "destroyIndeterminate"
QT_MOC_LITERAL(5, 67, 4), // "text"
QT_MOC_LITERAL(6, 72, 6), // "format"
QT_MOC_LITERAL(7, 79, 15), // "setValueRepaint"
QT_MOC_LITERAL(8, 95, 16), // "setMinMaxRepaint"
QT_MOC_LITERAL(9, 112, 8), // "sizeHint"
QT_MOC_LITERAL(10, 121, 17), // "formatedText_data"
QT_MOC_LITERAL(11, 139, 12), // "formatedText"
QT_MOC_LITERAL(12, 152, 22), // "localizedFormattedText"
QT_MOC_LITERAL(13, 175, 40), // "task245201_testChangeStyleAnd..."
QT_MOC_LITERAL(14, 216, 35) // "task245201_testChangeStyleAnd..."

    },
    "tst_QProgressBar\0getSetCheck\0\0"
    "minMaxSameValue\0destroyIndeterminate\0"
    "text\0format\0setValueRepaint\0"
    "setMinMaxRepaint\0sizeHint\0formatedText_data\0"
    "formatedText\0localizedFormattedText\0"
    "task245201_testChangeStyleAndDelete_data\0"
    "task245201_testChangeStyleAndDelete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QProgressBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

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

       0        // eod
};

void tst_QProgressBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QProgressBar *_t = static_cast<tst_QProgressBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getSetCheck(); break;
        case 1: _t->minMaxSameValue(); break;
        case 2: _t->destroyIndeterminate(); break;
        case 3: _t->text(); break;
        case 4: _t->format(); break;
        case 5: _t->setValueRepaint(); break;
        case 6: _t->setMinMaxRepaint(); break;
        case 7: _t->sizeHint(); break;
        case 8: _t->formatedText_data(); break;
        case 9: _t->formatedText(); break;
        case 10: _t->localizedFormattedText(); break;
        case 11: _t->task245201_testChangeStyleAndDelete_data(); break;
        case 12: _t->task245201_testChangeStyleAndDelete(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QProgressBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QProgressBar.data,
      qt_meta_data_tst_QProgressBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QProgressBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QProgressBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QProgressBar.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QProgressBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
