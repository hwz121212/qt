/****************************************************************************
** Meta object code from reading C++ file 'tst_qnetworkrequest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qnetworkrequest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qnetworkrequest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QNetworkRequest_t {
    QByteArrayData data[16];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QNetworkRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QNetworkRequest_t qt_meta_stringdata_tst_QNetworkRequest = {
    {
QT_MOC_LITERAL(0, 0, 19), // "tst_QNetworkRequest"
QT_MOC_LITERAL(1, 20, 9), // "ctor_data"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "ctor"
QT_MOC_LITERAL(4, 36, 11), // "setUrl_data"
QT_MOC_LITERAL(5, 48, 6), // "setUrl"
QT_MOC_LITERAL(6, 55, 17), // "setRawHeader_data"
QT_MOC_LITERAL(7, 73, 12), // "setRawHeader"
QT_MOC_LITERAL(8, 86, 18), // "rawHeaderList_data"
QT_MOC_LITERAL(9, 105, 13), // "rawHeaderList"
QT_MOC_LITERAL(10, 119, 14), // "setHeader_data"
QT_MOC_LITERAL(11, 134, 9), // "setHeader"
QT_MOC_LITERAL(12, 144, 21), // "rawHeaderParsing_data"
QT_MOC_LITERAL(13, 166, 16), // "rawHeaderParsing"
QT_MOC_LITERAL(14, 183, 17), // "originatingObject"
QT_MOC_LITERAL(15, 201, 12) // "removeHeader"

    },
    "tst_QNetworkRequest\0ctor_data\0\0ctor\0"
    "setUrl_data\0setUrl\0setRawHeader_data\0"
    "setRawHeader\0rawHeaderList_data\0"
    "rawHeaderList\0setHeader_data\0setHeader\0"
    "rawHeaderParsing_data\0rawHeaderParsing\0"
    "originatingObject\0removeHeader"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QNetworkRequest[] = {

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

void tst_QNetworkRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QNetworkRequest *_t = static_cast<tst_QNetworkRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ctor_data(); break;
        case 1: _t->ctor(); break;
        case 2: _t->setUrl_data(); break;
        case 3: _t->setUrl(); break;
        case 4: _t->setRawHeader_data(); break;
        case 5: _t->setRawHeader(); break;
        case 6: _t->rawHeaderList_data(); break;
        case 7: _t->rawHeaderList(); break;
        case 8: _t->setHeader_data(); break;
        case 9: _t->setHeader(); break;
        case 10: _t->rawHeaderParsing_data(); break;
        case 11: _t->rawHeaderParsing(); break;
        case 12: _t->originatingObject(); break;
        case 13: _t->removeHeader(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QNetworkRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QNetworkRequest.data,
      qt_meta_data_tst_QNetworkRequest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QNetworkRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QNetworkRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QNetworkRequest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QNetworkRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
