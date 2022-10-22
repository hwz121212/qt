/****************************************************************************
** Meta object code from reading C++ file 'tst_qcolordialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qcolordialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qcolordialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QColorDialog_t {
    QByteArrayData data[9];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QColorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QColorDialog_t qt_meta_stringdata_tst_QColorDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "tst_QColorDialog"
QT_MOC_LITERAL(1, 17, 13), // "postKeyReturn"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "testGetRgba"
QT_MOC_LITERAL(4, 44, 27), // "testNativeActiveModalWidget"
QT_MOC_LITERAL(5, 72, 15), // "defaultOkButton"
QT_MOC_LITERAL(6, 88, 24), // "native_activeModalWidget"
QT_MOC_LITERAL(7, 113, 16), // "task247349_alpha"
QT_MOC_LITERAL(8, 130, 24) // "QTBUG_43548_initialColor"

    },
    "tst_QColorDialog\0postKeyReturn\0\0"
    "testGetRgba\0testNativeActiveModalWidget\0"
    "defaultOkButton\0native_activeModalWidget\0"
    "task247349_alpha\0QTBUG_43548_initialColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QColorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tst_QColorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QColorDialog *_t = static_cast<tst_QColorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->postKeyReturn(); break;
        case 1: _t->testGetRgba(); break;
        case 2: _t->testNativeActiveModalWidget(); break;
        case 3: _t->defaultOkButton(); break;
        case 4: _t->native_activeModalWidget(); break;
        case 5: _t->task247349_alpha(); break;
        case 6: _t->QTBUG_43548_initialColor(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QColorDialog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QColorDialog.data,
      qt_meta_data_tst_QColorDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QColorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QColorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QColorDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QColorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_TestNativeDialog_t {
    QByteArrayData data[3];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestNativeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestNativeDialog_t qt_meta_stringdata_TestNativeDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TestNativeDialog"
QT_MOC_LITERAL(1, 17, 28), // "test_activeModalWidgetSignal"
QT_MOC_LITERAL(2, 46, 0) // ""

    },
    "TestNativeDialog\0test_activeModalWidgetSignal\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestNativeDialog[] = {

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

void TestNativeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestNativeDialog *_t = static_cast<TestNativeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->test_activeModalWidgetSignal(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TestNativeDialog::staticMetaObject = {
    { &QColorDialog::staticMetaObject, qt_meta_stringdata_TestNativeDialog.data,
      qt_meta_data_TestNativeDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TestNativeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestNativeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestNativeDialog.stringdata0))
        return static_cast<void*>(this);
    return QColorDialog::qt_metacast(_clname);
}

int TestNativeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QColorDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
