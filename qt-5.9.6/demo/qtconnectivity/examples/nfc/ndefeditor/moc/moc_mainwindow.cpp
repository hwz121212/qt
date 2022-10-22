/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[320];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "addNfcTextRecord"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "addNfcUriRecord"
QT_MOC_LITERAL(4, 45, 18), // "addMimeImageRecord"
QT_MOC_LITERAL(5, 64, 14), // "addEmptyRecord"
QT_MOC_LITERAL(6, 79, 12), // "clearMessage"
QT_MOC_LITERAL(7, 92, 11), // "loadMessage"
QT_MOC_LITERAL(8, 104, 11), // "saveMessage"
QT_MOC_LITERAL(9, 116, 12), // "touchReceive"
QT_MOC_LITERAL(10, 129, 10), // "touchStore"
QT_MOC_LITERAL(11, 140, 14), // "targetDetected"
QT_MOC_LITERAL(12, 155, 17), // "QNearFieldTarget*"
QT_MOC_LITERAL(13, 173, 6), // "target"
QT_MOC_LITERAL(14, 180, 10), // "targetLost"
QT_MOC_LITERAL(15, 191, 15), // "ndefMessageRead"
QT_MOC_LITERAL(16, 207, 12), // "QNdefMessage"
QT_MOC_LITERAL(17, 220, 7), // "message"
QT_MOC_LITERAL(18, 228, 18), // "ndefMessageWritten"
QT_MOC_LITERAL(19, 247, 11), // "targetError"
QT_MOC_LITERAL(20, 259, 23), // "QNearFieldTarget::Error"
QT_MOC_LITERAL(21, 283, 5), // "error"
QT_MOC_LITERAL(22, 289, 27), // "QNearFieldTarget::RequestId"
QT_MOC_LITERAL(23, 317, 2) // "id"

    },
    "MainWindow\0addNfcTextRecord\0\0"
    "addNfcUriRecord\0addMimeImageRecord\0"
    "addEmptyRecord\0clearMessage\0loadMessage\0"
    "saveMessage\0touchReceive\0touchStore\0"
    "targetDetected\0QNearFieldTarget*\0"
    "target\0targetLost\0ndefMessageRead\0"
    "QNdefMessage\0message\0ndefMessageWritten\0"
    "targetError\0QNearFieldTarget::Error\0"
    "error\0QNearFieldTarget::RequestId\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

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
      11,    1,   93,    2, 0x08 /* Private */,
      14,    1,   96,    2, 0x08 /* Private */,
      15,    1,   99,    2, 0x08 /* Private */,
      18,    0,  102,    2, 0x08 /* Private */,
      19,    2,  103,    2, 0x08 /* Private */,

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
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 22,   21,   23,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addNfcTextRecord(); break;
        case 1: _t->addNfcUriRecord(); break;
        case 2: _t->addMimeImageRecord(); break;
        case 3: _t->addEmptyRecord(); break;
        case 4: _t->clearMessage(); break;
        case 5: _t->loadMessage(); break;
        case 6: _t->saveMessage(); break;
        case 7: _t->touchReceive(); break;
        case 8: _t->touchStore(); break;
        case 9: _t->targetDetected((*reinterpret_cast< QNearFieldTarget*(*)>(_a[1]))); break;
        case 10: _t->targetLost((*reinterpret_cast< QNearFieldTarget*(*)>(_a[1]))); break;
        case 11: _t->ndefMessageRead((*reinterpret_cast< const QNdefMessage(*)>(_a[1]))); break;
        case 12: _t->ndefMessageWritten(); break;
        case 13: _t->targetError((*reinterpret_cast< QNearFieldTarget::Error(*)>(_a[1])),(*reinterpret_cast< const QNearFieldTarget::RequestId(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNearFieldTarget* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNearFieldTarget* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNearFieldTarget::RequestId >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
