/****************************************************************************
** Meta object code from reading C++ file 'filedialogpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../filedialogpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filedialogpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileDialogPanel_t {
    QByteArrayData data[21];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileDialogPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileDialogPanel_t qt_meta_stringdata_FileDialogPanel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FileDialogPanel"
QT_MOC_LITERAL(1, 16, 9), // "execModal"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "showModal"
QT_MOC_LITERAL(4, 37, 12), // "showNonModal"
QT_MOC_LITERAL(5, 50, 20), // "deleteNonModalDialog"
QT_MOC_LITERAL(6, 71, 17), // "deleteModalDialog"
QT_MOC_LITERAL(7, 89, 16), // "getOpenFileNames"
QT_MOC_LITERAL(8, 106, 15), // "getOpenFileUrls"
QT_MOC_LITERAL(9, 122, 15), // "getOpenFileName"
QT_MOC_LITERAL(10, 138, 14), // "getOpenFileUrl"
QT_MOC_LITERAL(11, 153, 15), // "getSaveFileName"
QT_MOC_LITERAL(12, 169, 14), // "getSaveFileUrl"
QT_MOC_LITERAL(13, 184, 20), // "getExistingDirectory"
QT_MOC_LITERAL(14, 205, 23), // "getExistingDirectoryUrl"
QT_MOC_LITERAL(15, 229, 8), // "accepted"
QT_MOC_LITERAL(16, 238, 18), // "showAcceptedResult"
QT_MOC_LITERAL(17, 257, 15), // "restoreDefaults"
QT_MOC_LITERAL(18, 273, 32), // "enableDeleteNonModalDialogButton"
QT_MOC_LITERAL(19, 306, 29), // "enableDeleteModalDialogButton"
QT_MOC_LITERAL(20, 336, 18) // "useMimeTypeFilters"

    },
    "FileDialogPanel\0execModal\0\0showModal\0"
    "showNonModal\0deleteNonModalDialog\0"
    "deleteModalDialog\0getOpenFileNames\0"
    "getOpenFileUrls\0getOpenFileName\0"
    "getOpenFileUrl\0getSaveFileName\0"
    "getSaveFileUrl\0getExistingDirectory\0"
    "getExistingDirectoryUrl\0accepted\0"
    "showAcceptedResult\0restoreDefaults\0"
    "enableDeleteNonModalDialogButton\0"
    "enableDeleteModalDialogButton\0"
    "useMimeTypeFilters"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileDialogPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x0a /* Public */,
       3,    0,  110,    2, 0x0a /* Public */,
       4,    0,  111,    2, 0x0a /* Public */,
       5,    0,  112,    2, 0x0a /* Public */,
       6,    0,  113,    2, 0x0a /* Public */,
       7,    0,  114,    2, 0x0a /* Public */,
       8,    0,  115,    2, 0x0a /* Public */,
       9,    0,  116,    2, 0x0a /* Public */,
      10,    0,  117,    2, 0x0a /* Public */,
      11,    0,  118,    2, 0x0a /* Public */,
      12,    0,  119,    2, 0x0a /* Public */,
      13,    0,  120,    2, 0x0a /* Public */,
      14,    0,  121,    2, 0x0a /* Public */,
      15,    0,  122,    2, 0x0a /* Public */,
      16,    0,  123,    2, 0x0a /* Public */,
      17,    0,  124,    2, 0x0a /* Public */,
      18,    0,  125,    2, 0x08 /* Private */,
      19,    0,  126,    2, 0x08 /* Private */,
      20,    1,  127,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void FileDialogPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileDialogPanel *_t = static_cast<FileDialogPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->execModal(); break;
        case 1: _t->showModal(); break;
        case 2: _t->showNonModal(); break;
        case 3: _t->deleteNonModalDialog(); break;
        case 4: _t->deleteModalDialog(); break;
        case 5: _t->getOpenFileNames(); break;
        case 6: _t->getOpenFileUrls(); break;
        case 7: _t->getOpenFileName(); break;
        case 8: _t->getOpenFileUrl(); break;
        case 9: _t->getSaveFileName(); break;
        case 10: _t->getSaveFileUrl(); break;
        case 11: _t->getExistingDirectory(); break;
        case 12: _t->getExistingDirectoryUrl(); break;
        case 13: _t->accepted(); break;
        case 14: _t->showAcceptedResult(); break;
        case 15: _t->restoreDefaults(); break;
        case 16: _t->enableDeleteNonModalDialogButton(); break;
        case 17: _t->enableDeleteModalDialogButton(); break;
        case 18: _t->useMimeTypeFilters((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FileDialogPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FileDialogPanel.data,
      qt_meta_data_FileDialogPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FileDialogPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileDialogPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileDialogPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FileDialogPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
