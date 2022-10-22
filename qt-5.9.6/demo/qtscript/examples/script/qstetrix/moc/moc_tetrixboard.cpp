/****************************************************************************
** Meta object code from reading C++ file 'tetrixboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tetrixboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tetrixboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TetrixBoard_t {
    QByteArrayData data[26];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TetrixBoard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TetrixBoard_t qt_meta_stringdata_TetrixBoard = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TetrixBoard"
QT_MOC_LITERAL(1, 12, 12), // "scoreChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "score"
QT_MOC_LITERAL(4, 32, 12), // "levelChanged"
QT_MOC_LITERAL(5, 45, 5), // "level"
QT_MOC_LITERAL(6, 51, 19), // "linesRemovedChanged"
QT_MOC_LITERAL(7, 71, 8), // "numLines"
QT_MOC_LITERAL(8, 80, 10), // "keyPressed"
QT_MOC_LITERAL(9, 91, 3), // "key"
QT_MOC_LITERAL(10, 95, 14), // "paintRequested"
QT_MOC_LITERAL(11, 110, 9), // "QPainter*"
QT_MOC_LITERAL(12, 120, 7), // "painter"
QT_MOC_LITERAL(13, 128, 23), // "paintNextPieceRequested"
QT_MOC_LITERAL(14, 152, 13), // "showNextPiece"
QT_MOC_LITERAL(15, 166, 5), // "width"
QT_MOC_LITERAL(16, 172, 6), // "height"
QT_MOC_LITERAL(17, 179, 15), // "drawPauseScreen"
QT_MOC_LITERAL(18, 195, 10), // "drawSquare"
QT_MOC_LITERAL(19, 206, 1), // "x"
QT_MOC_LITERAL(20, 208, 1), // "y"
QT_MOC_LITERAL(21, 210, 5), // "shape"
QT_MOC_LITERAL(22, 216, 6), // "update"
QT_MOC_LITERAL(23, 223, 5), // "timer"
QT_MOC_LITERAL(24, 229, 14), // "nextPieceLabel"
QT_MOC_LITERAL(25, 244, 8) // "QWidget*"

    },
    "TetrixBoard\0scoreChanged\0\0score\0"
    "levelChanged\0level\0linesRemovedChanged\0"
    "numLines\0keyPressed\0key\0paintRequested\0"
    "QPainter*\0painter\0paintNextPieceRequested\0"
    "showNextPiece\0width\0height\0drawPauseScreen\0"
    "drawSquare\0x\0y\0shape\0update\0timer\0"
    "nextPieceLabel\0QWidget*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TetrixBoard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       8,    1,   73,    2, 0x06 /* Public */,
      10,    1,   76,    2, 0x06 /* Public */,
      13,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    2,   82,    2, 0x09 /* Protected */,
      17,    1,   87,    2, 0x09 /* Protected */,
      18,    4,   90,    2, 0x09 /* Protected */,
      22,    0,   99,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int, QMetaType::Int, QMetaType::Int,   12,   19,   20,   21,
    QMetaType::Void,

 // properties: name, type, flags
      23, QMetaType::QObjectStar, 0x00095001,
      24, 0x80000000 | 25, 0x0009510b,

       0        // eod
};

void TetrixBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TetrixBoard *_t = static_cast<TetrixBoard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scoreChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->levelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->linesRemovedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->keyPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->paintRequested((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 5: _t->paintNextPieceRequested((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 6: _t->showNextPiece((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->drawPauseScreen((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 8: _t->drawSquare((*reinterpret_cast< QPainter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 9: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TetrixBoard::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TetrixBoard::scoreChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TetrixBoard::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TetrixBoard::levelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TetrixBoard::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TetrixBoard::linesRemovedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TetrixBoard::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TetrixBoard::keyPressed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TetrixBoard::*_t)(QPainter * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TetrixBoard::paintRequested)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (TetrixBoard::*_t)(QPainter * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TetrixBoard::paintNextPieceRequested)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TetrixBoard *_t = static_cast<TetrixBoard *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->getTimer(); break;
        case 1: *reinterpret_cast< QWidget**>(_v) = _t->nextPieceLabel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TetrixBoard *_t = static_cast<TetrixBoard *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setNextPieceLabel(*reinterpret_cast< QWidget**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TetrixBoard::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_TetrixBoard.data,
      qt_meta_data_TetrixBoard,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TetrixBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TetrixBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TetrixBoard.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int TetrixBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TetrixBoard::scoreChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TetrixBoard::levelChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TetrixBoard::linesRemovedChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TetrixBoard::keyPressed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TetrixBoard::paintRequested(QPainter * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TetrixBoard::paintNextPieceRequested(QPainter * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
