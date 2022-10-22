/****************************************************************************
** Meta object code from reading C++ file 'calendar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../calendar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calendar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CalendarWidget_t {
    QByteArrayData data[18];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalendarWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalendarWidget_t qt_meta_stringdata_CalendarWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CalendarWidget"
QT_MOC_LITERAL(1, 15, 13), // "localeChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "locale"
QT_MOC_LITERAL(4, 37, 15), // "firstDayChanged"
QT_MOC_LITERAL(5, 53, 5), // "index"
QT_MOC_LITERAL(6, 59, 20), // "selectionModeChanged"
QT_MOC_LITERAL(7, 80, 23), // "horizontalHeaderChanged"
QT_MOC_LITERAL(8, 104, 21), // "verticalHeaderChanged"
QT_MOC_LITERAL(9, 126, 19), // "selectedDateChanged"
QT_MOC_LITERAL(10, 146, 18), // "minimumDateChanged"
QT_MOC_LITERAL(11, 165, 4), // "date"
QT_MOC_LITERAL(12, 170, 18), // "maximumDateChanged"
QT_MOC_LITERAL(13, 189, 17), // "updateWeekendDays"
QT_MOC_LITERAL(14, 207, 20), // "weekdayFormatChanged"
QT_MOC_LITERAL(15, 228, 20), // "weekendFormatChanged"
QT_MOC_LITERAL(16, 249, 15), // "reformatHeaders"
QT_MOC_LITERAL(17, 265, 20) // "reformatCalendarPage"

    },
    "CalendarWidget\0localeChanged\0\0locale\0"
    "firstDayChanged\0index\0selectionModeChanged\0"
    "horizontalHeaderChanged\0verticalHeaderChanged\0"
    "selectedDateChanged\0minimumDateChanged\0"
    "date\0maximumDateChanged\0updateWeekendDays\0"
    "weekdayFormatChanged\0weekendFormatChanged\0"
    "reformatHeaders\0reformatCalendarPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalendarWidget[] = {

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
       1,    1,   79,    2, 0x08 /* Private */,
       4,    1,   82,    2, 0x08 /* Private */,
       6,    1,   85,    2, 0x08 /* Private */,
       7,    1,   88,    2, 0x08 /* Private */,
       8,    1,   91,    2, 0x08 /* Private */,
       9,    0,   94,    2, 0x08 /* Private */,
      10,    1,   95,    2, 0x08 /* Private */,
      12,    1,   98,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QLocale,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,   11,
    QMetaType::Void, QMetaType::QDate,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CalendarWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CalendarWidget *_t = static_cast<CalendarWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->localeChanged((*reinterpret_cast< QLocale(*)>(_a[1]))); break;
        case 1: _t->firstDayChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->selectionModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->horizontalHeaderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->verticalHeaderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->selectedDateChanged(); break;
        case 6: _t->minimumDateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 7: _t->maximumDateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 8: _t->updateWeekendDays(); break;
        case 9: _t->weekdayFormatChanged(); break;
        case 10: _t->weekendFormatChanged(); break;
        case 11: _t->reformatHeaders(); break;
        case 12: _t->reformatCalendarPage(); break;
        default: ;
        }
    }
}

const QMetaObject CalendarWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CalendarWidget.data,
      qt_meta_data_CalendarWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CalendarWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalendarWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CalendarWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CalendarWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
