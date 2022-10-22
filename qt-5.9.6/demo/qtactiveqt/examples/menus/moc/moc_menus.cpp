/****************************************************************************
** Meta object code from reading C++ file 'menus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../menus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMenus_t {
    QByteArrayData data[17];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMenus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMenus_t qt_meta_stringdata_QMenus = {
    {
QT_MOC_LITERAL(0, 0, 6), // "QMenus"
QT_MOC_LITERAL(1, 7, 7), // "ClassID"
QT_MOC_LITERAL(2, 15, 38), // "{4dc3f340-a6f7-44e4-a79b-3e92..."
QT_MOC_LITERAL(3, 54, 11), // "InterfaceID"
QT_MOC_LITERAL(4, 66, 38), // "{9ee49617-7d5c-441a-b833-4b06..."
QT_MOC_LITERAL(5, 105, 8), // "EventsID"
QT_MOC_LITERAL(6, 114, 38), // "{13eca64b-ee2a-4f3c-aa04-5d9d..."
QT_MOC_LITERAL(7, 153, 8), // "fileOpen"
QT_MOC_LITERAL(8, 162, 0), // ""
QT_MOC_LITERAL(9, 163, 8), // "fileSave"
QT_MOC_LITERAL(10, 172, 10), // "editNormal"
QT_MOC_LITERAL(11, 183, 8), // "editBold"
QT_MOC_LITERAL(12, 192, 13), // "editUnderline"
QT_MOC_LITERAL(13, 206, 16), // "editAdvancedFont"
QT_MOC_LITERAL(14, 223, 17), // "editAdvancedStyle"
QT_MOC_LITERAL(15, 241, 9), // "helpAbout"
QT_MOC_LITERAL(16, 251, 11) // "helpAboutQt"

    },
    "QMenus\0ClassID\0{4dc3f340-a6f7-44e4-a79b-3e9217695fbd}\0"
    "InterfaceID\0{9ee49617-7d5c-441a-b833-4b068d40d751}\0"
    "EventsID\0{13eca64b-ee2a-4f3c-aa04-5d9d975979a7}\0"
    "fileOpen\0\0fileSave\0editNormal\0editBold\0"
    "editUnderline\0editAdvancedFont\0"
    "editAdvancedStyle\0helpAbout\0helpAboutQt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMenus[] = {

 // content:
       7,       // revision
       0,       // classname
       3,   14, // classinfo
       9,   20, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    6,

 // slots: name, argc, parameters, tag, flags
       7,    0,   65,    8, 0x0a /* Public */,
       9,    0,   66,    8, 0x0a /* Public */,
      10,    0,   67,    8, 0x0a /* Public */,
      11,    0,   68,    8, 0x0a /* Public */,
      12,    0,   69,    8, 0x0a /* Public */,
      13,    0,   70,    8, 0x0a /* Public */,
      14,    0,   71,    8, 0x0a /* Public */,
      15,    0,   72,    8, 0x0a /* Public */,
      16,    0,   73,    8, 0x0a /* Public */,

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

       0        // eod
};

void QMenus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMenus *_t = static_cast<QMenus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileOpen(); break;
        case 1: _t->fileSave(); break;
        case 2: _t->editNormal(); break;
        case 3: _t->editBold(); break;
        case 4: _t->editUnderline(); break;
        case 5: _t->editAdvancedFont(); break;
        case 6: _t->editAdvancedStyle(); break;
        case 7: _t->helpAbout(); break;
        case 8: _t->helpAboutQt(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QMenus::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QMenus.data,
      qt_meta_data_QMenus,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMenus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMenus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMenus.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QMenus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
