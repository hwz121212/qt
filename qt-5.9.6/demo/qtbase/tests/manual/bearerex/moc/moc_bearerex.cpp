/****************************************************************************
** Meta object code from reading C++ file 'bearerex.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bearerex.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bearerex.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BearerEx_t {
    QByteArrayData data[15];
    char stringdata0[316];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BearerEx_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BearerEx_t qt_meta_stringdata_BearerEx = {
    {
QT_MOC_LITERAL(0, 0, 8), // "BearerEx"
QT_MOC_LITERAL(1, 9, 37), // "on_updateConfigurationsButton..."
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 27), // "on_updateListButton_clicked"
QT_MOC_LITERAL(4, 76, 28), // "on_showDetailsButton_clicked"
QT_MOC_LITERAL(5, 105, 30), // "on_createSessionButton_clicked"
QT_MOC_LITERAL(6, 136, 31), // "on_clearEventListButton_clicked"
QT_MOC_LITERAL(7, 168, 29), // "configurationsUpdateCompleted"
QT_MOC_LITERAL(8, 198, 18), // "configurationAdded"
QT_MOC_LITERAL(9, 217, 21), // "QNetworkConfiguration"
QT_MOC_LITERAL(10, 239, 6), // "config"
QT_MOC_LITERAL(11, 246, 20), // "configurationRemoved"
QT_MOC_LITERAL(12, 267, 18), // "onlineStateChanged"
QT_MOC_LITERAL(13, 286, 8), // "isOnline"
QT_MOC_LITERAL(14, 295, 20) // "configurationChanged"

    },
    "BearerEx\0on_updateConfigurationsButton_clicked\0"
    "\0on_updateListButton_clicked\0"
    "on_showDetailsButton_clicked\0"
    "on_createSessionButton_clicked\0"
    "on_clearEventListButton_clicked\0"
    "configurationsUpdateCompleted\0"
    "configurationAdded\0QNetworkConfiguration\0"
    "config\0configurationRemoved\0"
    "onlineStateChanged\0isOnline\0"
    "configurationChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BearerEx[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      11,    1,   73,    2, 0x08 /* Private */,
      12,    1,   76,    2, 0x08 /* Private */,
      14,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void BearerEx::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BearerEx *_t = static_cast<BearerEx *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_updateConfigurationsButton_clicked(); break;
        case 1: _t->on_updateListButton_clicked(); break;
        case 2: _t->on_showDetailsButton_clicked(); break;
        case 3: _t->on_createSessionButton_clicked(); break;
        case 4: _t->on_clearEventListButton_clicked(); break;
        case 5: _t->configurationsUpdateCompleted(); break;
        case 6: _t->configurationAdded((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 7: _t->configurationRemoved((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 8: _t->onlineStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->configurationChanged((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        }
    }
}

const QMetaObject BearerEx::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BearerEx.data,
      qt_meta_data_BearerEx,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BearerEx::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BearerEx::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BearerEx.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::BearerExMainWindow"))
        return static_cast< Ui::BearerExMainWindow*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BearerEx::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
struct qt_meta_stringdata_DetailedInfoDialog_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DetailedInfoDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DetailedInfoDialog_t qt_meta_stringdata_DetailedInfoDialog = {
    {
QT_MOC_LITERAL(0, 0, 18) // "DetailedInfoDialog"

    },
    "DetailedInfoDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DetailedInfoDialog[] = {

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

void DetailedInfoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject DetailedInfoDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DetailedInfoDialog.data,
      qt_meta_data_DetailedInfoDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DetailedInfoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DetailedInfoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DetailedInfoDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DetailedInfoDialog"))
        return static_cast< Ui::DetailedInfoDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int DetailedInfoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SessionTab_t {
    QByteArrayData data[28];
    char stringdata0[503];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SessionTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SessionTab_t qt_meta_stringdata_SessionTab = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SessionTab"
QT_MOC_LITERAL(1, 11, 44), // "on_createQNetworkAccessManage..."
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 28), // "on_sendRequestButton_clicked"
QT_MOC_LITERAL(4, 86, 28), // "on_openSessionButton_clicked"
QT_MOC_LITERAL(5, 115, 29), // "on_closeSessionButton_clicked"
QT_MOC_LITERAL(6, 145, 31), // "on_stopConnectionButton_clicked"
QT_MOC_LITERAL(7, 177, 30), // "on_deleteSessionButton_clicked"
QT_MOC_LITERAL(8, 208, 20), // "on_dataObjectChanged"
QT_MOC_LITERAL(9, 229, 13), // "newObjectType"
QT_MOC_LITERAL(10, 243, 20), // "on_alrButton_clicked"
QT_MOC_LITERAL(11, 264, 8), // "finished"
QT_MOC_LITERAL(12, 273, 9), // "errorCode"
QT_MOC_LITERAL(13, 283, 12), // "dataReceived"
QT_MOC_LITERAL(14, 296, 9), // "errorType"
QT_MOC_LITERAL(15, 306, 25), // "newConfigurationActivated"
QT_MOC_LITERAL(16, 332, 29), // "preferredConfigurationChanged"
QT_MOC_LITERAL(17, 362, 21), // "QNetworkConfiguration"
QT_MOC_LITERAL(18, 384, 6), // "config"
QT_MOC_LITERAL(19, 391, 10), // "isSeamless"
QT_MOC_LITERAL(20, 402, 12), // "stateChanged"
QT_MOC_LITERAL(21, 415, 22), // "QNetworkSession::State"
QT_MOC_LITERAL(22, 438, 5), // "state"
QT_MOC_LITERAL(23, 444, 8), // "newState"
QT_MOC_LITERAL(24, 453, 6), // "opened"
QT_MOC_LITERAL(25, 460, 6), // "closed"
QT_MOC_LITERAL(26, 467, 5), // "error"
QT_MOC_LITERAL(27, 473, 29) // "QNetworkSession::SessionError"

    },
    "SessionTab\0on_createQNetworkAccessManagerButton_clicked\0"
    "\0on_sendRequestButton_clicked\0"
    "on_openSessionButton_clicked\0"
    "on_closeSessionButton_clicked\0"
    "on_stopConnectionButton_clicked\0"
    "on_deleteSessionButton_clicked\0"
    "on_dataObjectChanged\0newObjectType\0"
    "on_alrButton_clicked\0finished\0errorCode\0"
    "dataReceived\0errorType\0newConfigurationActivated\0"
    "preferredConfigurationChanged\0"
    "QNetworkConfiguration\0config\0isSeamless\0"
    "stateChanged\0QNetworkSession::State\0"
    "state\0newState\0opened\0closed\0error\0"
    "QNetworkSession::SessionError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SessionTab[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    1,  100,    2, 0x08 /* Private */,
      10,    0,  103,    2, 0x08 /* Private */,
      11,    3,  104,    2, 0x08 /* Private */,
      15,    0,  111,    2, 0x08 /* Private */,
      16,    2,  112,    2, 0x08 /* Private */,
      20,    1,  117,    2, 0x08 /* Private */,
      23,    1,  120,    2, 0x08 /* Private */,
      24,    0,  123,    2, 0x08 /* Private */,
      25,    0,  124,    2, 0x08 /* Private */,
      26,    1,  125,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::LongLong, QMetaType::QString,   12,   13,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Bool,   18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,   26,

       0        // eod
};

void SessionTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SessionTab *_t = static_cast<SessionTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_createQNetworkAccessManagerButton_clicked(); break;
        case 1: _t->on_sendRequestButton_clicked(); break;
        case 2: _t->on_openSessionButton_clicked(); break;
        case 3: _t->on_closeSessionButton_clicked(); break;
        case 4: _t->on_stopConnectionButton_clicked(); break;
        case 5: _t->on_deleteSessionButton_clicked(); break;
        case 6: _t->on_dataObjectChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_alrButton_clicked(); break;
        case 8: _t->finished((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 9: _t->newConfigurationActivated(); break;
        case 10: _t->preferredConfigurationChanged((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->stateChanged((*reinterpret_cast< QNetworkSession::State(*)>(_a[1]))); break;
        case 12: _t->newState((*reinterpret_cast< QNetworkSession::State(*)>(_a[1]))); break;
        case 13: _t->opened(); break;
        case 14: _t->closed(); break;
        case 15: _t->error((*reinterpret_cast< QNetworkSession::SessionError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession::State >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession::State >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession::SessionError >(); break;
            }
            break;
        }
    }
}

const QMetaObject SessionTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SessionTab.data,
      qt_meta_data_SessionTab,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SessionTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SessionTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SessionTab.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SessionTab"))
        return static_cast< Ui::SessionTab*>(this);
    return QWidget::qt_metacast(_clname);
}

int SessionTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
