/****************************************************************************
** Meta object code from reading C++ file 'tst_oauth1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_oauth1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_oauth1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_OAuth1_t {
    QByteArrayData data[17];
    char stringdata0[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_OAuth1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_OAuth1_t qt_meta_stringdata_tst_OAuth1 = {
    {
QT_MOC_LITERAL(0, 0, 10), // "tst_OAuth1"
QT_MOC_LITERAL(1, 11, 8), // "finished"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "gotError"
QT_MOC_LITERAL(4, 30, 22), // "clientIdentifierSignal"
QT_MOC_LITERAL(5, 53, 24), // "clientSharedSecretSignal"
QT_MOC_LITERAL(6, 78, 17), // "tokenSecretSignal"
QT_MOC_LITERAL(7, 96, 29), // "temporaryCredentialsUrlSignal"
QT_MOC_LITERAL(8, 126, 34), // "temporaryTokenCredentialsUrlS..."
QT_MOC_LITERAL(9, 161, 25), // "tokenCredentialsUrlSignal"
QT_MOC_LITERAL(10, 187, 21), // "signatureMethodSignal"
QT_MOC_LITERAL(11, 209, 13), // "getToken_data"
QT_MOC_LITERAL(12, 223, 8), // "getToken"
QT_MOC_LITERAL(13, 232, 10), // "grant_data"
QT_MOC_LITERAL(14, 243, 5), // "grant"
QT_MOC_LITERAL(15, 249, 23), // "authenticatedCalls_data"
QT_MOC_LITERAL(16, 273, 18) // "authenticatedCalls"

    },
    "tst_OAuth1\0finished\0\0gotError\0"
    "clientIdentifierSignal\0clientSharedSecretSignal\0"
    "tokenSecretSignal\0temporaryCredentialsUrlSignal\0"
    "temporaryTokenCredentialsUrlSignal\0"
    "tokenCredentialsUrlSignal\0"
    "signatureMethodSignal\0getToken_data\0"
    "getToken\0grant_data\0grant\0"
    "authenticatedCalls_data\0authenticatedCalls"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_OAuth1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

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

       0        // eod
};

void tst_OAuth1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_OAuth1 *_t = static_cast<tst_OAuth1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->gotError(); break;
        case 2: _t->clientIdentifierSignal(); break;
        case 3: _t->clientSharedSecretSignal(); break;
        case 4: _t->tokenSecretSignal(); break;
        case 5: _t->temporaryCredentialsUrlSignal(); break;
        case 6: _t->temporaryTokenCredentialsUrlSignal(); break;
        case 7: _t->tokenCredentialsUrlSignal(); break;
        case 8: _t->signatureMethodSignal(); break;
        case 9: _t->getToken_data(); break;
        case 10: _t->getToken(); break;
        case 11: _t->grant_data(); break;
        case 12: _t->grant(); break;
        case 13: _t->authenticatedCalls_data(); break;
        case 14: _t->authenticatedCalls(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_OAuth1::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_OAuth1.data,
      qt_meta_data_tst_OAuth1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_OAuth1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_OAuth1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_OAuth1.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_OAuth1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
