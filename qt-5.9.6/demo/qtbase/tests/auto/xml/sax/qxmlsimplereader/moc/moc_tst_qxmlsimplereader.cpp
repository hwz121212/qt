/****************************************************************************
** Meta object code from reading C++ file 'tst_qxmlsimplereader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qxmlsimplereader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qxmlsimplereader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XmlServer_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XmlServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XmlServer_t qt_meta_stringdata_XmlServer = {
    {
QT_MOC_LITERAL(0, 0, 9) // "XmlServer"

    },
    "XmlServer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XmlServer[] = {

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

void XmlServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject XmlServer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_XmlServer.data,
      qt_meta_data_XmlServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *XmlServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XmlServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XmlServer.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int XmlServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_tst_QXmlSimpleReader_t {
    QByteArrayData data[21];
    char stringdata0[394];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QXmlSimpleReader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QXmlSimpleReader_t qt_meta_stringdata_tst_QXmlSimpleReader = {
    {
QT_MOC_LITERAL(0, 0, 20), // "tst_QXmlSimpleReader"
QT_MOC_LITERAL(1, 21, 12), // "initTestCase"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "testGoodXmlFile"
QT_MOC_LITERAL(4, 51, 20), // "testGoodXmlFile_data"
QT_MOC_LITERAL(5, 72, 14), // "testBadXmlFile"
QT_MOC_LITERAL(6, 87, 19), // "testBadXmlFile_data"
QT_MOC_LITERAL(7, 107, 22), // "testIncrementalParsing"
QT_MOC_LITERAL(8, 130, 27), // "testIncrementalParsing_data"
QT_MOC_LITERAL(9, 158, 14), // "setDataQString"
QT_MOC_LITERAL(10, 173, 18), // "inputFromQIODevice"
QT_MOC_LITERAL(11, 192, 15), // "inputFromString"
QT_MOC_LITERAL(12, 208, 20), // "inputFromSocket_data"
QT_MOC_LITERAL(13, 229, 15), // "inputFromSocket"
QT_MOC_LITERAL(14, 245, 20), // "idsInParseException1"
QT_MOC_LITERAL(15, 266, 20), // "idsInParseException2"
QT_MOC_LITERAL(16, 287, 27), // "preserveCharacterReferences"
QT_MOC_LITERAL(17, 315, 15), // "reportNamespace"
QT_MOC_LITERAL(18, 331, 20), // "reportNamespace_data"
QT_MOC_LITERAL(19, 352, 23), // "roundtripWithNamespaces"
QT_MOC_LITERAL(20, 376, 17) // "dtdRecursionLimit"

    },
    "tst_QXmlSimpleReader\0initTestCase\0\0"
    "testGoodXmlFile\0testGoodXmlFile_data\0"
    "testBadXmlFile\0testBadXmlFile_data\0"
    "testIncrementalParsing\0"
    "testIncrementalParsing_data\0setDataQString\0"
    "inputFromQIODevice\0inputFromString\0"
    "inputFromSocket_data\0inputFromSocket\0"
    "idsInParseException1\0idsInParseException2\0"
    "preserveCharacterReferences\0reportNamespace\0"
    "reportNamespace_data\0roundtripWithNamespaces\0"
    "dtdRecursionLimit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QXmlSimpleReader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x08 /* Private */,
       3,    0,  110,    2, 0x08 /* Private */,
       4,    0,  111,    2, 0x08 /* Private */,
       5,    0,  112,    2, 0x08 /* Private */,
       6,    0,  113,    2, 0x08 /* Private */,
       7,    0,  114,    2, 0x08 /* Private */,
       8,    0,  115,    2, 0x08 /* Private */,
       9,    0,  116,    2, 0x08 /* Private */,
      10,    0,  117,    2, 0x08 /* Private */,
      11,    0,  118,    2, 0x08 /* Private */,
      12,    0,  119,    2, 0x08 /* Private */,
      13,    0,  120,    2, 0x08 /* Private */,
      14,    0,  121,    2, 0x08 /* Private */,
      15,    0,  122,    2, 0x08 /* Private */,
      16,    0,  123,    2, 0x08 /* Private */,
      17,    0,  124,    2, 0x08 /* Private */,
      18,    0,  125,    2, 0x08 /* Private */,
      19,    0,  126,    2, 0x08 /* Private */,
      20,    0,  127,    2, 0x08 /* Private */,

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

       0        // eod
};

void tst_QXmlSimpleReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QXmlSimpleReader *_t = static_cast<tst_QXmlSimpleReader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->testGoodXmlFile(); break;
        case 2: _t->testGoodXmlFile_data(); break;
        case 3: _t->testBadXmlFile(); break;
        case 4: _t->testBadXmlFile_data(); break;
        case 5: _t->testIncrementalParsing(); break;
        case 6: _t->testIncrementalParsing_data(); break;
        case 7: _t->setDataQString(); break;
        case 8: _t->inputFromQIODevice(); break;
        case 9: _t->inputFromString(); break;
        case 10: _t->inputFromSocket_data(); break;
        case 11: _t->inputFromSocket(); break;
        case 12: _t->idsInParseException1(); break;
        case 13: _t->idsInParseException2(); break;
        case 14: _t->preserveCharacterReferences(); break;
        case 15: _t->reportNamespace(); break;
        case 16: _t->reportNamespace_data(); break;
        case 17: _t->roundtripWithNamespaces(); break;
        case 18: _t->dtdRecursionLimit(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QXmlSimpleReader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QXmlSimpleReader.data,
      qt_meta_data_tst_QXmlSimpleReader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QXmlSimpleReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QXmlSimpleReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QXmlSimpleReader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QXmlSimpleReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
