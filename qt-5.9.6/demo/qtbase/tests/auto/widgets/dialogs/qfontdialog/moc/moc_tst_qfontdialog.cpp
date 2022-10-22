/****************************************************************************
** Meta object code from reading C++ file 'tst_qfontdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qfontdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qfontdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QFontDialog_t {
    QByteArrayData data[15];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QFontDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QFontDialog_t qt_meta_stringdata_tst_QFontDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "tst_QFontDialog"
QT_MOC_LITERAL(1, 16, 13), // "postKeyReturn"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "testGetFont"
QT_MOC_LITERAL(4, 43, 11), // "testSetFont"
QT_MOC_LITERAL(5, 55, 23), // "testNonStandardFontSize"
QT_MOC_LITERAL(6, 79, 12), // "initTestCase"
QT_MOC_LITERAL(7, 92, 15), // "cleanupTestCase"
QT_MOC_LITERAL(8, 108, 4), // "init"
QT_MOC_LITERAL(9, 113, 7), // "cleanup"
QT_MOC_LITERAL(10, 121, 15), // "defaultOkButton"
QT_MOC_LITERAL(11, 137, 7), // "setFont"
QT_MOC_LITERAL(12, 145, 21), // "task256466_wrongStyle"
QT_MOC_LITERAL(13, 167, 22), // "setNonStandardFontSize"
QT_MOC_LITERAL(14, 190, 27) // "qtbug_41513_stylesheetStyle"

    },
    "tst_QFontDialog\0postKeyReturn\0\0"
    "testGetFont\0testSetFont\0testNonStandardFontSize\0"
    "initTestCase\0cleanupTestCase\0init\0"
    "cleanup\0defaultOkButton\0setFont\0"
    "task256466_wrongStyle\0setNonStandardFontSize\0"
    "qtbug_41513_stylesheetStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QFontDialog[] = {

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
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x0a /* Public */,
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

void tst_QFontDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QFontDialog *_t = static_cast<tst_QFontDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->postKeyReturn(); break;
        case 1: _t->testGetFont(); break;
        case 2: _t->testSetFont(); break;
        case 3: _t->testNonStandardFontSize(); break;
        case 4: _t->initTestCase(); break;
        case 5: _t->cleanupTestCase(); break;
        case 6: _t->init(); break;
        case 7: _t->cleanup(); break;
        case 8: _t->defaultOkButton(); break;
        case 9: _t->setFont(); break;
        case 10: _t->task256466_wrongStyle(); break;
        case 11: _t->setNonStandardFontSize(); break;
        case 12: _t->qtbug_41513_stylesheetStyle(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QFontDialog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QFontDialog.data,
      qt_meta_data_tst_QFontDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QFontDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QFontDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QFontDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QFontDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
