/****************************************************************************
** Meta object code from reading C++ file 'tst_qpixmapfilter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qpixmapfilter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qpixmapfilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tst_QPixmapFilter_t {
    QByteArrayData data[14];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QPixmapFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QPixmapFilter_t qt_meta_stringdata_tst_QPixmapFilter = {
    {
QT_MOC_LITERAL(0, 0, 17), // "tst_QPixmapFilter"
QT_MOC_LITERAL(1, 18, 16), // "colorizeSetColor"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 19), // "colorizeSetStrength"
QT_MOC_LITERAL(4, 56, 15), // "colorizeProcess"
QT_MOC_LITERAL(5, 72, 12), // "colorizeDraw"
QT_MOC_LITERAL(6, 85, 20), // "colorizeDrawStrength"
QT_MOC_LITERAL(7, 106, 19), // "colorizeDrawSubRect"
QT_MOC_LITERAL(8, 126, 22), // "colorizeProcessSubRect"
QT_MOC_LITERAL(9, 149, 26), // "convolutionBoundingRectFor"
QT_MOC_LITERAL(10, 176, 22), // "convolutionDrawSubRect"
QT_MOC_LITERAL(11, 199, 25), // "dropShadowBoundingRectFor"
QT_MOC_LITERAL(12, 225, 12), // "blurIndexed8"
QT_MOC_LITERAL(13, 238, 26) // "testDefaultImplementations"

    },
    "tst_QPixmapFilter\0colorizeSetColor\0\0"
    "colorizeSetStrength\0colorizeProcess\0"
    "colorizeDraw\0colorizeDrawStrength\0"
    "colorizeDrawSubRect\0colorizeProcessSubRect\0"
    "convolutionBoundingRectFor\0"
    "convolutionDrawSubRect\0dropShadowBoundingRectFor\0"
    "blurIndexed8\0testDefaultImplementations"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QPixmapFilter[] = {

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
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

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

       0        // eod
};

void tst_QPixmapFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QPixmapFilter *_t = static_cast<tst_QPixmapFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorizeSetColor(); break;
        case 1: _t->colorizeSetStrength(); break;
        case 2: _t->colorizeProcess(); break;
        case 3: _t->colorizeDraw(); break;
        case 4: _t->colorizeDrawStrength(); break;
        case 5: _t->colorizeDrawSubRect(); break;
        case 6: _t->colorizeProcessSubRect(); break;
        case 7: _t->convolutionBoundingRectFor(); break;
        case 8: _t->convolutionDrawSubRect(); break;
        case 9: _t->dropShadowBoundingRectFor(); break;
        case 10: _t->blurIndexed8(); break;
        case 11: _t->testDefaultImplementations(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QPixmapFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QPixmapFilter.data,
      qt_meta_data_tst_QPixmapFilter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QPixmapFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QPixmapFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QPixmapFilter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QPixmapFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
