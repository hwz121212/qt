/****************************************************************************
** Meta object code from reading C++ file 'remotecontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../remotecontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remotecontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RemoteControl_t {
    QByteArrayData data[15];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemoteControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemoteControl_t qt_meta_stringdata_RemoteControl = {
    {
QT_MOC_LITERAL(0, 0, 13), // "RemoteControl"
QT_MOC_LITERAL(1, 14, 23), // "on_launchButton_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 23), // "on_actionQuit_triggered"
QT_MOC_LITERAL(4, 63, 22), // "on_indexButton_clicked"
QT_MOC_LITERAL(5, 86, 27), // "on_identifierButton_clicked"
QT_MOC_LITERAL(6, 114, 20), // "on_urlButton_clicked"
QT_MOC_LITERAL(7, 135, 29), // "on_syncContentsButton_clicked"
QT_MOC_LITERAL(8, 165, 27), // "on_contentsCheckBox_toggled"
QT_MOC_LITERAL(9, 193, 7), // "checked"
QT_MOC_LITERAL(10, 201, 24), // "on_indexCheckBox_toggled"
QT_MOC_LITERAL(11, 226, 28), // "on_bookmarksCheckBox_toggled"
QT_MOC_LITERAL(12, 255, 16), // "helpViewerClosed"
QT_MOC_LITERAL(13, 272, 11), // "sendCommand"
QT_MOC_LITERAL(14, 284, 3) // "cmd"

    },
    "RemoteControl\0on_launchButton_clicked\0"
    "\0on_actionQuit_triggered\0"
    "on_indexButton_clicked\0"
    "on_identifierButton_clicked\0"
    "on_urlButton_clicked\0on_syncContentsButton_clicked\0"
    "on_contentsCheckBox_toggled\0checked\0"
    "on_indexCheckBox_toggled\0"
    "on_bookmarksCheckBox_toggled\0"
    "helpViewerClosed\0sendCommand\0cmd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemoteControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    1,   75,    2, 0x08 /* Private */,
      10,    1,   78,    2, 0x08 /* Private */,
      11,    1,   81,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    1,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void RemoteControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RemoteControl *_t = static_cast<RemoteControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_launchButton_clicked(); break;
        case 1: _t->on_actionQuit_triggered(); break;
        case 2: _t->on_indexButton_clicked(); break;
        case 3: _t->on_identifierButton_clicked(); break;
        case 4: _t->on_urlButton_clicked(); break;
        case 5: _t->on_syncContentsButton_clicked(); break;
        case 6: _t->on_contentsCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_indexCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_bookmarksCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->helpViewerClosed(); break;
        case 10: _t->sendCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject RemoteControl::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_RemoteControl.data,
      qt_meta_data_RemoteControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RemoteControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoteControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteControl.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int RemoteControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
