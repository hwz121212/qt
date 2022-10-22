/****************************************************************************
** Meta object code from reading C++ file 'tst_qnetworksession.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qnetworksession.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qnetworksession.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QNetworkSession_t {
    QByteArrayData data[20];
    char stringdata0[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QNetworkSession_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QNetworkSession_t qt_meta_stringdata_tst_QNetworkSession = {
    {
QT_MOC_LITERAL(0, 0, 19), // "tst_QNetworkSession"
QT_MOC_LITERAL(1, 20, 12), // "initTestCase"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "cleanupTestCase"
QT_MOC_LITERAL(4, 50, 17), // "robustnessBombing"
QT_MOC_LITERAL(5, 68, 19), // "sessionClosing_data"
QT_MOC_LITERAL(6, 88, 14), // "sessionClosing"
QT_MOC_LITERAL(7, 103, 19), // "outOfProcessSession"
QT_MOC_LITERAL(8, 123, 14), // "invalidSession"
QT_MOC_LITERAL(9, 138, 22), // "repeatedOpenClose_data"
QT_MOC_LITERAL(10, 161, 17), // "repeatedOpenClose"
QT_MOC_LITERAL(11, 179, 22), // "sessionProperties_data"
QT_MOC_LITERAL(12, 202, 17), // "sessionProperties"
QT_MOC_LITERAL(13, 220, 22), // "userChoiceSession_data"
QT_MOC_LITERAL(14, 243, 17), // "userChoiceSession"
QT_MOC_LITERAL(15, 261, 25), // "sessionOpenCloseStop_data"
QT_MOC_LITERAL(16, 287, 20), // "sessionOpenCloseStop"
QT_MOC_LITERAL(17, 308, 21), // "sessionAutoClose_data"
QT_MOC_LITERAL(18, 330, 16), // "sessionAutoClose"
QT_MOC_LITERAL(19, 347, 13) // "usagePolicies"

    },
    "tst_QNetworkSession\0initTestCase\0\0"
    "cleanupTestCase\0robustnessBombing\0"
    "sessionClosing_data\0sessionClosing\0"
    "outOfProcessSession\0invalidSession\0"
    "repeatedOpenClose_data\0repeatedOpenClose\0"
    "sessionProperties_data\0sessionProperties\0"
    "userChoiceSession_data\0userChoiceSession\0"
    "sessionOpenCloseStop_data\0"
    "sessionOpenCloseStop\0sessionAutoClose_data\0"
    "sessionAutoClose\0usagePolicies"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QNetworkSession[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x0a /* Public */,
       3,    0,  105,    2, 0x0a /* Public */,
       4,    0,  106,    2, 0x08 /* Private */,
       5,    0,  107,    2, 0x08 /* Private */,
       6,    0,  108,    2, 0x08 /* Private */,
       7,    0,  109,    2, 0x08 /* Private */,
       8,    0,  110,    2, 0x08 /* Private */,
       9,    0,  111,    2, 0x08 /* Private */,
      10,    0,  112,    2, 0x08 /* Private */,
      11,    0,  113,    2, 0x08 /* Private */,
      12,    0,  114,    2, 0x08 /* Private */,
      13,    0,  115,    2, 0x08 /* Private */,
      14,    0,  116,    2, 0x08 /* Private */,
      15,    0,  117,    2, 0x08 /* Private */,
      16,    0,  118,    2, 0x08 /* Private */,
      17,    0,  119,    2, 0x08 /* Private */,
      18,    0,  120,    2, 0x08 /* Private */,
      19,    0,  121,    2, 0x08 /* Private */,

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

       0        // eod
};

void tst_QNetworkSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QNetworkSession *_t = static_cast<tst_QNetworkSession *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanupTestCase(); break;
        case 2: _t->robustnessBombing(); break;
        case 3: _t->sessionClosing_data(); break;
        case 4: _t->sessionClosing(); break;
        case 5: _t->outOfProcessSession(); break;
        case 6: _t->invalidSession(); break;
        case 7: _t->repeatedOpenClose_data(); break;
        case 8: _t->repeatedOpenClose(); break;
        case 9: _t->sessionProperties_data(); break;
        case 10: _t->sessionProperties(); break;
        case 11: _t->userChoiceSession_data(); break;
        case 12: _t->userChoiceSession(); break;
        case 13: _t->sessionOpenCloseStop_data(); break;
        case 14: _t->sessionOpenCloseStop(); break;
        case 15: _t->sessionAutoClose_data(); break;
        case 16: _t->sessionAutoClose(); break;
        case 17: _t->usagePolicies(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QNetworkSession::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QNetworkSession.data,
      qt_meta_data_tst_QNetworkSession,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QNetworkSession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QNetworkSession::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QNetworkSession.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QNetworkSession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
