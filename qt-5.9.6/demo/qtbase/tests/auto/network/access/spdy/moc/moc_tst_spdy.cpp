/****************************************************************************
** Meta object code from reading C++ file 'tst_spdy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_spdy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_spdy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_Spdy_t {
    QByteArrayData data[19];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_Spdy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_Spdy_t qt_meta_stringdata_tst_Spdy = {
    {
QT_MOC_LITERAL(0, 0, 8), // "tst_Spdy"
QT_MOC_LITERAL(1, 9, 12), // "initTestCase"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 27), // "settingsAndNegotiation_data"
QT_MOC_LITERAL(4, 51, 22), // "settingsAndNegotiation"
QT_MOC_LITERAL(5, 74, 13), // "download_data"
QT_MOC_LITERAL(6, 88, 8), // "download"
QT_MOC_LITERAL(7, 97, 12), // "headerFields"
QT_MOC_LITERAL(8, 110, 11), // "upload_data"
QT_MOC_LITERAL(9, 122, 6), // "upload"
QT_MOC_LITERAL(10, 129, 11), // "errors_data"
QT_MOC_LITERAL(11, 141, 6), // "errors"
QT_MOC_LITERAL(12, 148, 21), // "multipleRequests_data"
QT_MOC_LITERAL(13, 170, 16), // "multipleRequests"
QT_MOC_LITERAL(14, 187, 27), // "proxyAuthenticationRequired"
QT_MOC_LITERAL(15, 215, 13), // "QNetworkProxy"
QT_MOC_LITERAL(16, 229, 15), // "QAuthenticator*"
QT_MOC_LITERAL(17, 245, 13), // "authenticator"
QT_MOC_LITERAL(18, 259, 28) // "multipleRequestsFinishedSlot"

    },
    "tst_Spdy\0initTestCase\0\0"
    "settingsAndNegotiation_data\0"
    "settingsAndNegotiation\0download_data\0"
    "download\0headerFields\0upload_data\0"
    "upload\0errors_data\0errors\0"
    "multipleRequests_data\0multipleRequests\0"
    "proxyAuthenticationRequired\0QNetworkProxy\0"
    "QAuthenticator*\0authenticator\0"
    "multipleRequestsFinishedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_Spdy[] = {

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
      14,    2,   96,    2, 0x09 /* Protected */,
      18,    0,  101,    2, 0x09 /* Protected */,

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
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 16,    2,   17,
    QMetaType::Void,

       0        // eod
};

void tst_Spdy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_Spdy *_t = static_cast<tst_Spdy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->settingsAndNegotiation_data(); break;
        case 2: _t->settingsAndNegotiation(); break;
        case 3: _t->download_data(); break;
        case 4: _t->download(); break;
        case 5: _t->headerFields(); break;
        case 6: _t->upload_data(); break;
        case 7: _t->upload(); break;
        case 8: _t->errors_data(); break;
        case 9: _t->errors(); break;
        case 10: _t->multipleRequests_data(); break;
        case 11: _t->multipleRequests(); break;
        case 12: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 13: _t->multipleRequestsFinishedSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAuthenticator* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkProxy >(); break;
            }
            break;
        }
    }
}

const QMetaObject tst_Spdy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_Spdy.data,
      qt_meta_data_tst_Spdy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_Spdy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_Spdy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_Spdy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_Spdy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
