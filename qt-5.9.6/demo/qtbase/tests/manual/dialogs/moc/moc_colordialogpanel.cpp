/****************************************************************************
** Meta object code from reading C++ file 'colordialogpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../colordialogpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colordialogpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ColorDialogPanel_t {
    QByteArrayData data[15];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorDialogPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorDialogPanel_t qt_meta_stringdata_ColorDialogPanel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ColorDialogPanel"
QT_MOC_LITERAL(1, 17, 9), // "execModal"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "showModal"
QT_MOC_LITERAL(4, 38, 12), // "showNonModal"
QT_MOC_LITERAL(5, 51, 20), // "deleteNonModalDialog"
QT_MOC_LITERAL(6, 72, 17), // "deleteModalDialog"
QT_MOC_LITERAL(7, 90, 8), // "accepted"
QT_MOC_LITERAL(8, 99, 8), // "rejected"
QT_MOC_LITERAL(9, 108, 19), // "currentColorChanged"
QT_MOC_LITERAL(10, 128, 5), // "color"
QT_MOC_LITERAL(11, 134, 18), // "showAcceptedResult"
QT_MOC_LITERAL(12, 153, 15), // "restoreDefaults"
QT_MOC_LITERAL(13, 169, 32), // "enableDeleteNonModalDialogButton"
QT_MOC_LITERAL(14, 202, 29) // "enableDeleteModalDialogButton"

    },
    "ColorDialogPanel\0execModal\0\0showModal\0"
    "showNonModal\0deleteNonModalDialog\0"
    "deleteModalDialog\0accepted\0rejected\0"
    "currentColorChanged\0color\0showAcceptedResult\0"
    "restoreDefaults\0enableDeleteNonModalDialogButton\0"
    "enableDeleteModalDialogButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorDialogPanel[] = {

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
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    1,   81,    2, 0x0a /* Public */,
      11,    0,   84,    2, 0x0a /* Public */,
      12,    0,   85,    2, 0x0a /* Public */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ColorDialogPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColorDialogPanel *_t = static_cast<ColorDialogPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->execModal(); break;
        case 1: _t->showModal(); break;
        case 2: _t->showNonModal(); break;
        case 3: _t->deleteNonModalDialog(); break;
        case 4: _t->deleteModalDialog(); break;
        case 5: _t->accepted(); break;
        case 6: _t->rejected(); break;
        case 7: _t->currentColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 8: _t->showAcceptedResult(); break;
        case 9: _t->restoreDefaults(); break;
        case 10: _t->enableDeleteNonModalDialogButton(); break;
        case 11: _t->enableDeleteModalDialogButton(); break;
        default: ;
        }
    }
}

const QMetaObject ColorDialogPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ColorDialogPanel.data,
      qt_meta_data_ColorDialogPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ColorDialogPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorDialogPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorDialogPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ColorDialogPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
