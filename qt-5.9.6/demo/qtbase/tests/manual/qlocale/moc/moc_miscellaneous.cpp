/****************************************************************************
** Meta object code from reading C++ file 'miscellaneous.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../miscellaneous.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'miscellaneous.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MiscWidget_t {
    QByteArrayData data[7];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MiscWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MiscWidget_t qt_meta_stringdata_MiscWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MiscWidget"
QT_MOC_LITERAL(1, 11, 13), // "localeChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 6), // "locale"
QT_MOC_LITERAL(4, 33, 16), // "updateQuotedText"
QT_MOC_LITERAL(5, 50, 3), // "str"
QT_MOC_LITERAL(6, 54, 31) // "updateListToSeparatedStringText"

    },
    "MiscWidget\0localeChanged\0\0locale\0"
    "updateQuotedText\0str\0"
    "updateListToSeparatedStringText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MiscWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       6,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QLocale,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void MiscWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MiscWidget *_t = static_cast<MiscWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->localeChanged((*reinterpret_cast< QLocale(*)>(_a[1]))); break;
        case 1: _t->updateQuotedText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->updateListToSeparatedStringText(); break;
        default: ;
        }
    }
}

const QMetaObject MiscWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MiscWidget.data,
      qt_meta_data_MiscWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MiscWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MiscWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MiscWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MiscWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
