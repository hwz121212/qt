/****************************************************************************
** Meta object code from reading C++ file 'tst_qdbuscpp2xml.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qdbuscpp2xml.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qdbuscpp2xml.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_qdbuscpp2xml_t {
    QByteArrayData data[6];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_qdbuscpp2xml_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_qdbuscpp2xml_t qt_meta_stringdata_tst_qdbuscpp2xml = {
    {
QT_MOC_LITERAL(0, 0, 16), // "tst_qdbuscpp2xml"
QT_MOC_LITERAL(1, 17, 17), // "qdbuscpp2xml_data"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 12), // "qdbuscpp2xml"
QT_MOC_LITERAL(4, 49, 12), // "initTestCase"
QT_MOC_LITERAL(5, 62, 15) // "cleanupTestCase"

    },
    "tst_qdbuscpp2xml\0qdbuscpp2xml_data\0\0"
    "qdbuscpp2xml\0initTestCase\0cleanupTestCase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_qdbuscpp2xml[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tst_qdbuscpp2xml::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_qdbuscpp2xml *_t = static_cast<tst_qdbuscpp2xml *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->qdbuscpp2xml_data(); break;
        case 1: _t->qdbuscpp2xml(); break;
        case 2: _t->initTestCase(); break;
        case 3: _t->cleanupTestCase(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_qdbuscpp2xml::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_qdbuscpp2xml.data,
      qt_meta_data_tst_qdbuscpp2xml,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_qdbuscpp2xml::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_qdbuscpp2xml::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_qdbuscpp2xml.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_qdbuscpp2xml::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
