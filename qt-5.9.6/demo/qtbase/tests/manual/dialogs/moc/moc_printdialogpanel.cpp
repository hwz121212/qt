/****************************************************************************
** Meta object code from reading C++ file 'printdialogpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../printdialogpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printdialogpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PrintDialogPanel_t {
    QByteArrayData data[15];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrintDialogPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrintDialogPanel_t qt_meta_stringdata_PrintDialogPanel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PrintDialogPanel"
QT_MOC_LITERAL(1, 17, 13), // "createPrinter"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "deletePrinter"
QT_MOC_LITERAL(4, 46, 15), // "showPrintDialog"
QT_MOC_LITERAL(5, 62, 17), // "showPreviewDialog"
QT_MOC_LITERAL(6, 80, 19), // "showPageSetupDialog"
QT_MOC_LITERAL(7, 100, 11), // "directPrint"
QT_MOC_LITERAL(8, 112, 12), // "unitsChanged"
QT_MOC_LITERAL(9, 125, 15), // "pageSizeChanged"
QT_MOC_LITERAL(10, 141, 21), // "pageDimensionsChanged"
QT_MOC_LITERAL(11, 163, 18), // "orientationChanged"
QT_MOC_LITERAL(12, 182, 14), // "marginsChanged"
QT_MOC_LITERAL(13, 197, 17), // "layoutModeChanged"
QT_MOC_LITERAL(14, 215, 14) // "printerChanged"

    },
    "PrintDialogPanel\0createPrinter\0\0"
    "deletePrinter\0showPrintDialog\0"
    "showPreviewDialog\0showPageSetupDialog\0"
    "directPrint\0unitsChanged\0pageSizeChanged\0"
    "pageDimensionsChanged\0orientationChanged\0"
    "marginsChanged\0layoutModeChanged\0"
    "printerChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrintDialogPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

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

       0        // eod
};

void PrintDialogPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PrintDialogPanel *_t = static_cast<PrintDialogPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createPrinter(); break;
        case 1: _t->deletePrinter(); break;
        case 2: _t->showPrintDialog(); break;
        case 3: _t->showPreviewDialog(); break;
        case 4: _t->showPageSetupDialog(); break;
        case 5: _t->directPrint(); break;
        case 6: _t->unitsChanged(); break;
        case 7: _t->pageSizeChanged(); break;
        case 8: _t->pageDimensionsChanged(); break;
        case 9: _t->orientationChanged(); break;
        case 10: _t->marginsChanged(); break;
        case 11: _t->layoutModeChanged(); break;
        case 12: _t->printerChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PrintDialogPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PrintDialogPanel.data,
      qt_meta_data_PrintDialogPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PrintDialogPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrintDialogPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PrintDialogPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PrintDialogPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
