/****************************************************************************
** Meta object code from reading C++ file 'context2d.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../context2d.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'context2d.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Context2D_t {
    QByteArrayData data[82];
    char stringdata0[633];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Context2D_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Context2D_t qt_meta_stringdata_Context2D = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Context2D"
QT_MOC_LITERAL(1, 10, 7), // "changed"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 5), // "image"
QT_MOC_LITERAL(4, 25, 4), // "save"
QT_MOC_LITERAL(5, 30, 7), // "restore"
QT_MOC_LITERAL(6, 38, 5), // "scale"
QT_MOC_LITERAL(7, 44, 1), // "x"
QT_MOC_LITERAL(8, 46, 1), // "y"
QT_MOC_LITERAL(9, 48, 6), // "rotate"
QT_MOC_LITERAL(10, 55, 5), // "angle"
QT_MOC_LITERAL(11, 61, 9), // "translate"
QT_MOC_LITERAL(12, 71, 9), // "transform"
QT_MOC_LITERAL(13, 81, 3), // "m11"
QT_MOC_LITERAL(14, 85, 3), // "m12"
QT_MOC_LITERAL(15, 89, 3), // "m21"
QT_MOC_LITERAL(16, 93, 3), // "m22"
QT_MOC_LITERAL(17, 97, 2), // "dx"
QT_MOC_LITERAL(18, 100, 2), // "dy"
QT_MOC_LITERAL(19, 103, 12), // "setTransform"
QT_MOC_LITERAL(20, 116, 20), // "createLinearGradient"
QT_MOC_LITERAL(21, 137, 14), // "CanvasGradient"
QT_MOC_LITERAL(22, 152, 2), // "x0"
QT_MOC_LITERAL(23, 155, 2), // "y0"
QT_MOC_LITERAL(24, 158, 2), // "x1"
QT_MOC_LITERAL(25, 161, 2), // "y1"
QT_MOC_LITERAL(26, 164, 20), // "createRadialGradient"
QT_MOC_LITERAL(27, 185, 2), // "r0"
QT_MOC_LITERAL(28, 188, 2), // "r1"
QT_MOC_LITERAL(29, 191, 9), // "clearRect"
QT_MOC_LITERAL(30, 201, 1), // "w"
QT_MOC_LITERAL(31, 203, 1), // "h"
QT_MOC_LITERAL(32, 205, 8), // "fillRect"
QT_MOC_LITERAL(33, 214, 10), // "strokeRect"
QT_MOC_LITERAL(34, 225, 9), // "beginPath"
QT_MOC_LITERAL(35, 235, 9), // "closePath"
QT_MOC_LITERAL(36, 245, 6), // "moveTo"
QT_MOC_LITERAL(37, 252, 6), // "lineTo"
QT_MOC_LITERAL(38, 259, 16), // "quadraticCurveTo"
QT_MOC_LITERAL(39, 276, 3), // "cpx"
QT_MOC_LITERAL(40, 280, 3), // "cpy"
QT_MOC_LITERAL(41, 284, 13), // "bezierCurveTo"
QT_MOC_LITERAL(42, 298, 4), // "cp1x"
QT_MOC_LITERAL(43, 303, 4), // "cp1y"
QT_MOC_LITERAL(44, 308, 4), // "cp2x"
QT_MOC_LITERAL(45, 313, 4), // "cp2y"
QT_MOC_LITERAL(46, 318, 5), // "arcTo"
QT_MOC_LITERAL(47, 324, 2), // "x2"
QT_MOC_LITERAL(48, 327, 2), // "y2"
QT_MOC_LITERAL(49, 330, 6), // "radius"
QT_MOC_LITERAL(50, 337, 4), // "rect"
QT_MOC_LITERAL(51, 342, 3), // "arc"
QT_MOC_LITERAL(52, 346, 10), // "startAngle"
QT_MOC_LITERAL(53, 357, 8), // "endAngle"
QT_MOC_LITERAL(54, 366, 13), // "anticlockwise"
QT_MOC_LITERAL(55, 380, 4), // "fill"
QT_MOC_LITERAL(56, 385, 6), // "stroke"
QT_MOC_LITERAL(57, 392, 4), // "clip"
QT_MOC_LITERAL(58, 397, 13), // "isPointInPath"
QT_MOC_LITERAL(59, 411, 9), // "drawImage"
QT_MOC_LITERAL(60, 421, 9), // "DomImage*"
QT_MOC_LITERAL(61, 431, 2), // "dw"
QT_MOC_LITERAL(62, 434, 2), // "dh"
QT_MOC_LITERAL(63, 437, 2), // "sx"
QT_MOC_LITERAL(64, 440, 2), // "sy"
QT_MOC_LITERAL(65, 443, 2), // "sw"
QT_MOC_LITERAL(66, 446, 2), // "sh"
QT_MOC_LITERAL(67, 449, 12), // "getImageData"
QT_MOC_LITERAL(68, 462, 9), // "ImageData"
QT_MOC_LITERAL(69, 472, 12), // "putImageData"
QT_MOC_LITERAL(70, 485, 11), // "globalAlpha"
QT_MOC_LITERAL(71, 497, 24), // "globalCompositeOperation"
QT_MOC_LITERAL(72, 522, 11), // "strokeStyle"
QT_MOC_LITERAL(73, 534, 9), // "fillStyle"
QT_MOC_LITERAL(74, 544, 9), // "lineWidth"
QT_MOC_LITERAL(75, 554, 7), // "lineCap"
QT_MOC_LITERAL(76, 562, 8), // "lineJoin"
QT_MOC_LITERAL(77, 571, 10), // "miterLimit"
QT_MOC_LITERAL(78, 582, 13), // "shadowOffsetX"
QT_MOC_LITERAL(79, 596, 13), // "shadowOffsetY"
QT_MOC_LITERAL(80, 610, 10), // "shadowBlur"
QT_MOC_LITERAL(81, 621, 11) // "shadowColor"

    },
    "Context2D\0changed\0\0image\0save\0restore\0"
    "scale\0x\0y\0rotate\0angle\0translate\0"
    "transform\0m11\0m12\0m21\0m22\0dx\0dy\0"
    "setTransform\0createLinearGradient\0"
    "CanvasGradient\0x0\0y0\0x1\0y1\0"
    "createRadialGradient\0r0\0r1\0clearRect\0"
    "w\0h\0fillRect\0strokeRect\0beginPath\0"
    "closePath\0moveTo\0lineTo\0quadraticCurveTo\0"
    "cpx\0cpy\0bezierCurveTo\0cp1x\0cp1y\0cp2x\0"
    "cp2y\0arcTo\0x2\0y2\0radius\0rect\0arc\0"
    "startAngle\0endAngle\0anticlockwise\0"
    "fill\0stroke\0clip\0isPointInPath\0drawImage\0"
    "DomImage*\0dw\0dh\0sx\0sy\0sw\0sh\0getImageData\0"
    "ImageData\0putImageData\0globalAlpha\0"
    "globalCompositeOperation\0strokeStyle\0"
    "fillStyle\0lineWidth\0lineCap\0lineJoin\0"
    "miterLimit\0shadowOffsetX\0shadowOffsetY\0"
    "shadowBlur\0shadowColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Context2D[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
      12,  390, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  169,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  172,    2, 0x0a /* Public */,
       5,    0,  173,    2, 0x0a /* Public */,
       6,    2,  174,    2, 0x0a /* Public */,
       9,    1,  179,    2, 0x0a /* Public */,
      11,    2,  182,    2, 0x0a /* Public */,
      12,    6,  187,    2, 0x0a /* Public */,
      19,    6,  200,    2, 0x0a /* Public */,
      20,    4,  213,    2, 0x0a /* Public */,
      26,    6,  222,    2, 0x0a /* Public */,
      29,    4,  235,    2, 0x0a /* Public */,
      32,    4,  244,    2, 0x0a /* Public */,
      33,    4,  253,    2, 0x0a /* Public */,
      34,    0,  262,    2, 0x0a /* Public */,
      35,    0,  263,    2, 0x0a /* Public */,
      36,    2,  264,    2, 0x0a /* Public */,
      37,    2,  269,    2, 0x0a /* Public */,
      38,    4,  274,    2, 0x0a /* Public */,
      41,    6,  283,    2, 0x0a /* Public */,
      46,    5,  296,    2, 0x0a /* Public */,
      50,    4,  307,    2, 0x0a /* Public */,
      51,    6,  316,    2, 0x0a /* Public */,
      55,    0,  329,    2, 0x0a /* Public */,
      56,    0,  330,    2, 0x0a /* Public */,
      57,    0,  331,    2, 0x0a /* Public */,
      58,    2,  332,    2, 0x0a /* Public */,
      59,    3,  337,    2, 0x0a /* Public */,
      59,    5,  344,    2, 0x0a /* Public */,
      59,    9,  355,    2, 0x0a /* Public */,
      67,    4,  374,    2, 0x0a /* Public */,
      69,    3,  383,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    7,    8,
    QMetaType::Void, QMetaType::QReal,   10,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    7,    8,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   13,   14,   15,   16,   17,   18,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   13,   14,   15,   16,   17,   18,
    0x80000000 | 21, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   22,   23,   24,   25,
    0x80000000 | 21, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   22,   23,   27,   24,   25,   28,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    7,    8,   30,   31,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    7,    8,   30,   31,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    7,    8,   30,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    7,    8,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    7,    8,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   39,   40,    7,    8,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   42,   43,   44,   45,    7,    8,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   24,   25,   47,   48,   49,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    7,    8,   30,   31,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::Bool,    7,    8,   49,   52,   53,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QReal, QMetaType::QReal,    7,    8,
    QMetaType::Void, 0x80000000 | 60, QMetaType::QReal, QMetaType::QReal,    3,   17,   18,
    QMetaType::Void, 0x80000000 | 60, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    3,   17,   18,   61,   62,
    QMetaType::Void, 0x80000000 | 60, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    3,   63,   64,   65,   66,   17,   18,   61,   62,
    0x80000000 | 68, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   63,   64,   65,   66,
    QMetaType::Void, 0x80000000 | 68, QMetaType::QReal, QMetaType::QReal,    3,   17,   18,

 // properties: name, type, flags
      70, QMetaType::QReal, 0x00095103,
      71, QMetaType::QString, 0x00095103,
      72, QMetaType::QVariant, 0x00095103,
      73, QMetaType::QVariant, 0x00095103,
      74, QMetaType::QReal, 0x00095103,
      75, QMetaType::QString, 0x00095103,
      76, QMetaType::QString, 0x00095103,
      77, QMetaType::QReal, 0x00095103,
      78, QMetaType::QReal, 0x00095103,
      79, QMetaType::QReal, 0x00095103,
      80, QMetaType::QReal, 0x00095103,
      81, QMetaType::QString, 0x00095103,

       0        // eod
};

void Context2D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Context2D *_t = static_cast<Context2D *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->save(); break;
        case 2: _t->restore(); break;
        case 3: _t->scale((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 4: _t->rotate((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->translate((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 6: _t->transform((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6]))); break;
        case 7: _t->setTransform((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6]))); break;
        case 8: { CanvasGradient _r = _t->createLinearGradient((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< CanvasGradient*>(_a[0]) = std::move(_r); }  break;
        case 9: { CanvasGradient _r = _t->createRadialGradient((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< CanvasGradient*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->clearRect((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 11: _t->fillRect((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 12: _t->strokeRect((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 13: _t->beginPath(); break;
        case 14: _t->closePath(); break;
        case 15: _t->moveTo((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 16: _t->lineTo((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 17: _t->quadraticCurveTo((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 18: _t->bezierCurveTo((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6]))); break;
        case 19: _t->arcTo((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5]))); break;
        case 20: _t->rect((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 21: _t->arc((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 22: _t->fill(); break;
        case 23: _t->stroke(); break;
        case 24: _t->clip(); break;
        case 25: { bool _r = _t->isPointInPath((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: _t->drawImage((*reinterpret_cast< DomImage*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 27: _t->drawImage((*reinterpret_cast< DomImage*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5]))); break;
        case 28: _t->drawImage((*reinterpret_cast< DomImage*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])),(*reinterpret_cast< qreal(*)>(_a[7])),(*reinterpret_cast< qreal(*)>(_a[8])),(*reinterpret_cast< qreal(*)>(_a[9]))); break;
        case 29: { ImageData _r = _t->getImageData((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< ImageData*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->putImageData((*reinterpret_cast< ImageData(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DomImage* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DomImage* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DomImage* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Context2D::*_t)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Context2D::changed)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Context2D *_t = static_cast<Context2D *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->globalAlpha(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->globalCompositeOperation(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = _t->strokeStyle(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = _t->fillStyle(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->lineWidth(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->lineCap(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->lineJoin(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->miterLimit(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = _t->shadowOffsetX(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = _t->shadowOffsetY(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = _t->shadowBlur(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->shadowColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Context2D *_t = static_cast<Context2D *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGlobalAlpha(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setGlobalCompositeOperation(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setStrokeStyle(*reinterpret_cast< QVariant*>(_v)); break;
        case 3: _t->setFillStyle(*reinterpret_cast< QVariant*>(_v)); break;
        case 4: _t->setLineWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setLineCap(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setLineJoin(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setMiterLimit(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->setShadowOffsetX(*reinterpret_cast< qreal*>(_v)); break;
        case 9: _t->setShadowOffsetY(*reinterpret_cast< qreal*>(_v)); break;
        case 10: _t->setShadowBlur(*reinterpret_cast< qreal*>(_v)); break;
        case 11: _t->setShadowColor(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Context2D::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Context2D.data,
      qt_meta_data_Context2D,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Context2D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Context2D::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Context2D.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Context2D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Context2D::changed(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
