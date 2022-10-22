/****************************************************************************
** Meta object code from reading C++ file 'tst_qnetworkcookiejar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qnetworkcookiejar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qnetworkcookiejar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QNetworkCookieJar_t {
    QByteArrayData data[9];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QNetworkCookieJar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QNetworkCookieJar_t qt_meta_stringdata_tst_QNetworkCookieJar = {
    {
QT_MOC_LITERAL(0, 0, 21), // "tst_QNetworkCookieJar"
QT_MOC_LITERAL(1, 22, 12), // "getterSetter"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 22), // "setCookiesFromUrl_data"
QT_MOC_LITERAL(4, 59, 17), // "setCookiesFromUrl"
QT_MOC_LITERAL(5, 77, 18), // "cookiesForUrl_data"
QT_MOC_LITERAL(6, 96, 13), // "cookiesForUrl"
QT_MOC_LITERAL(7, 110, 12), // "rfc6265_data"
QT_MOC_LITERAL(8, 123, 7) // "rfc6265"

    },
    "tst_QNetworkCookieJar\0getterSetter\0\0"
    "setCookiesFromUrl_data\0setCookiesFromUrl\0"
    "cookiesForUrl_data\0cookiesForUrl\0"
    "rfc6265_data\0rfc6265"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QNetworkCookieJar[] = {

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
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
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

void tst_QNetworkCookieJar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QNetworkCookieJar *_t = static_cast<tst_QNetworkCookieJar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getterSetter(); break;
        case 1: _t->setCookiesFromUrl_data(); break;
        case 2: _t->setCookiesFromUrl(); break;
        case 3: _t->cookiesForUrl_data(); break;
        case 4: _t->cookiesForUrl(); break;
        case 5: _t->rfc6265_data(); break;
        case 6: _t->rfc6265(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QNetworkCookieJar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QNetworkCookieJar.data,
      qt_meta_data_tst_QNetworkCookieJar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QNetworkCookieJar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QNetworkCookieJar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QNetworkCookieJar.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QNetworkCookieJar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
