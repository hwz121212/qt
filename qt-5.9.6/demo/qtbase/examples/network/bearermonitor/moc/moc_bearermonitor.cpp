/****************************************************************************
** Meta object code from reading C++ file 'bearermonitor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bearermonitor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bearermonitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BearerMonitor_t {
    QByteArrayData data[22];
    char stringdata0[327];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BearerMonitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BearerMonitor_t qt_meta_stringdata_BearerMonitor = {
    {
QT_MOC_LITERAL(0, 0, 13), // "BearerMonitor"
QT_MOC_LITERAL(1, 14, 18), // "configurationAdded"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "QNetworkConfiguration"
QT_MOC_LITERAL(4, 56, 6), // "config"
QT_MOC_LITERAL(5, 63, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 80, 6), // "parent"
QT_MOC_LITERAL(7, 87, 20), // "configurationRemoved"
QT_MOC_LITERAL(8, 108, 20), // "configurationChanged"
QT_MOC_LITERAL(9, 129, 23), // "updateSnapConfiguration"
QT_MOC_LITERAL(10, 153, 4), // "snap"
QT_MOC_LITERAL(11, 158, 20), // "updateConfigurations"
QT_MOC_LITERAL(12, 179, 18), // "onlineStateChanged"
QT_MOC_LITERAL(13, 198, 8), // "isOnline"
QT_MOC_LITERAL(14, 207, 15), // "registerNetwork"
QT_MOC_LITERAL(15, 223, 17), // "unregisterNetwork"
QT_MOC_LITERAL(16, 241, 20), // "showConfigurationFor"
QT_MOC_LITERAL(17, 262, 4), // "item"
QT_MOC_LITERAL(18, 267, 16), // "createSessionFor"
QT_MOC_LITERAL(19, 284, 16), // "createNewSession"
QT_MOC_LITERAL(20, 301, 13), // "deleteSession"
QT_MOC_LITERAL(21, 315, 11) // "performScan"

    },
    "BearerMonitor\0configurationAdded\0\0"
    "QNetworkConfiguration\0config\0"
    "QTreeWidgetItem*\0parent\0configurationRemoved\0"
    "configurationChanged\0updateSnapConfiguration\0"
    "snap\0updateConfigurations\0onlineStateChanged\0"
    "isOnline\0registerNetwork\0unregisterNetwork\0"
    "showConfigurationFor\0item\0createSessionFor\0"
    "createNewSession\0deleteSession\0"
    "performScan"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BearerMonitor[] = {

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
       1,    2,   84,    2, 0x08 /* Private */,
       1,    1,   89,    2, 0x28 /* Private | MethodCloned */,
       7,    1,   92,    2, 0x08 /* Private */,
       8,    1,   95,    2, 0x08 /* Private */,
       9,    2,   98,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    1,  104,    2, 0x08 /* Private */,
      14,    0,  107,    2, 0x08 /* Private */,
      15,    0,  108,    2, 0x08 /* Private */,
      16,    1,  109,    2, 0x08 /* Private */,
      18,    1,  112,    2, 0x08 /* Private */,
      19,    0,  115,    2, 0x08 /* Private */,
      20,    0,  116,    2, 0x08 /* Private */,
      21,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 3,    6,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,   17,
    QMetaType::Void, 0x80000000 | 5,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BearerMonitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BearerMonitor *_t = static_cast<BearerMonitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configurationAdded((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->configurationAdded((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 2: _t->configurationRemoved((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 3: _t->configurationChanged((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 4: _t->updateSnapConfiguration((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QNetworkConfiguration(*)>(_a[2]))); break;
        case 5: _t->updateConfigurations(); break;
        case 6: _t->onlineStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->registerNetwork(); break;
        case 8: _t->unregisterNetwork(); break;
        case 9: _t->showConfigurationFor((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->createSessionFor((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->createNewSession(); break;
        case 12: _t->deleteSession(); break;
        case 13: _t->performScan(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        }
    }
}

const QMetaObject BearerMonitor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BearerMonitor.data,
      qt_meta_data_BearerMonitor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BearerMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BearerMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BearerMonitor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_BearerMonitor"))
        return static_cast< Ui_BearerMonitor*>(this);
    return QWidget::qt_metacast(_clname);
}

int BearerMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
