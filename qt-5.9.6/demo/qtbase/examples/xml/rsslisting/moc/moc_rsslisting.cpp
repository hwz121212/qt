/****************************************************************************
** Meta object code from reading C++ file 'rsslisting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rsslisting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rsslisting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RSSListing_t {
    QByteArrayData data[13];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RSSListing_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RSSListing_t qt_meta_stringdata_RSSListing = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RSSListing"
QT_MOC_LITERAL(1, 11, 5), // "fetch"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 8), // "finished"
QT_MOC_LITERAL(4, 27, 14), // "QNetworkReply*"
QT_MOC_LITERAL(5, 42, 5), // "reply"
QT_MOC_LITERAL(6, 48, 9), // "readyRead"
QT_MOC_LITERAL(7, 58, 15), // "metaDataChanged"
QT_MOC_LITERAL(8, 74, 13), // "itemActivated"
QT_MOC_LITERAL(9, 88, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(10, 105, 4), // "item"
QT_MOC_LITERAL(11, 110, 5), // "error"
QT_MOC_LITERAL(12, 116, 27) // "QNetworkReply::NetworkError"

    },
    "RSSListing\0fetch\0\0finished\0QNetworkReply*\0"
    "reply\0readyRead\0metaDataChanged\0"
    "itemActivated\0QTreeWidgetItem*\0item\0"
    "error\0QNetworkReply::NetworkError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RSSListing[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    1,   45,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,
       8,    1,   50,    2, 0x0a /* Public */,
      11,    1,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,    2,

       0        // eod
};

void RSSListing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RSSListing *_t = static_cast<RSSListing *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fetch(); break;
        case 1: _t->finished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->readyRead(); break;
        case 3: _t->metaDataChanged(); break;
        case 4: _t->itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

const QMetaObject RSSListing::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RSSListing.data,
      qt_meta_data_RSSListing,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RSSListing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RSSListing::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RSSListing.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RSSListing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
