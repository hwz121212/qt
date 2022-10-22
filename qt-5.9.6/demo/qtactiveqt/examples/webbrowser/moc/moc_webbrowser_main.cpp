/****************************************************************************
** Meta object code from reading C++ file 'webbrowser_main.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../webbrowser_main.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webbrowser_main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[357];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 8), // "navigate"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "address"
QT_MOC_LITERAL(4, 29, 25), // "on_WebBrowser_TitleChange"
QT_MOC_LITERAL(5, 55, 5), // "title"
QT_MOC_LITERAL(6, 61, 28), // "on_WebBrowser_ProgressChange"
QT_MOC_LITERAL(7, 90, 1), // "a"
QT_MOC_LITERAL(8, 92, 1), // "b"
QT_MOC_LITERAL(9, 94, 32), // "on_WebBrowser_CommandStateChange"
QT_MOC_LITERAL(10, 127, 3), // "cmd"
QT_MOC_LITERAL(11, 131, 2), // "on"
QT_MOC_LITERAL(12, 134, 28), // "on_WebBrowser_BeforeNavigate"
QT_MOC_LITERAL(13, 163, 30), // "on_WebBrowser_NavigateComplete"
QT_MOC_LITERAL(14, 194, 21), // "on_actionGo_triggered"
QT_MOC_LITERAL(15, 216, 28), // "on_actionNewWindow_triggered"
QT_MOC_LITERAL(16, 245, 30), // "on_actionAddBookmark_triggered"
QT_MOC_LITERAL(17, 276, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(18, 301, 26), // "on_actionAboutQt_triggered"
QT_MOC_LITERAL(19, 328, 28) // "on_actionFileClose_triggered"

    },
    "MainWindow\0navigate\0\0address\0"
    "on_WebBrowser_TitleChange\0title\0"
    "on_WebBrowser_ProgressChange\0a\0b\0"
    "on_WebBrowser_CommandStateChange\0cmd\0"
    "on\0on_WebBrowser_BeforeNavigate\0"
    "on_WebBrowser_NavigateComplete\0"
    "on_actionGo_triggered\0"
    "on_actionNewWindow_triggered\0"
    "on_actionAddBookmark_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionAboutQt_triggered\0"
    "on_actionFileClose_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       4,    1,   77,    2, 0x0a /* Public */,
       6,    2,   80,    2, 0x0a /* Public */,
       9,    2,   85,    2, 0x0a /* Public */,
      12,    0,   90,    2, 0x0a /* Public */,
      13,    1,   91,    2, 0x0a /* Public */,
      14,    0,   94,    2, 0x0a /* Public */,
      15,    0,   95,    2, 0x0a /* Public */,
      16,    0,   96,    2, 0x0a /* Public */,
      17,    0,   97,    2, 0x0a /* Public */,
      18,    0,   98,    2, 0x0a /* Public */,
      19,    0,   99,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->navigate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_WebBrowser_TitleChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_WebBrowser_ProgressChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_WebBrowser_CommandStateChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->on_WebBrowser_BeforeNavigate(); break;
        case 5: _t->on_WebBrowser_NavigateComplete((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_actionGo_triggered(); break;
        case 7: _t->on_actionNewWindow_triggered(); break;
        case 8: _t->on_actionAddBookmark_triggered(); break;
        case 9: _t->on_actionAbout_triggered(); break;
        case 10: _t->on_actionAboutQt_triggered(); break;
        case 11: _t->on_actionFileClose_triggered(); break;
        default: ;
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
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
