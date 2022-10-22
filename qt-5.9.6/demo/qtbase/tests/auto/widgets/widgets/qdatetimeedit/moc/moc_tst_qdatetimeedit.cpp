/****************************************************************************
** Meta object code from reading C++ file 'tst_qdatetimeedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tst_qdatetimeedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_qdatetimeedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EditorDateEdit_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditorDateEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditorDateEdit_t qt_meta_stringdata_EditorDateEdit = {
    {
QT_MOC_LITERAL(0, 0, 14) // "EditorDateEdit"

    },
    "EditorDateEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditorDateEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void EditorDateEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject EditorDateEdit::staticMetaObject = {
    { &QDateTimeEdit::staticMetaObject, qt_meta_stringdata_EditorDateEdit.data,
      qt_meta_data_EditorDateEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EditorDateEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditorDateEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditorDateEdit.stringdata0))
        return static_cast<void*>(this);
    return QDateTimeEdit::qt_metacast(_clname);
}

int EditorDateEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDateTimeEdit::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_tst_QDateTimeEdit_t {
    QByteArrayData data[107];
    char stringdata0[1745];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tst_QDateTimeEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tst_QDateTimeEdit_t qt_meta_stringdata_tst_QDateTimeEdit = {
    {
QT_MOC_LITERAL(0, 0, 17), // "tst_QDateTimeEdit"
QT_MOC_LITERAL(1, 18, 12), // "initTestCase"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "init"
QT_MOC_LITERAL(4, 37, 7), // "cleanup"
QT_MOC_LITERAL(5, 45, 15), // "cleanupTestCase"
QT_MOC_LITERAL(6, 61, 13), // "cachedDayTest"
QT_MOC_LITERAL(7, 75, 11), // "getSetCheck"
QT_MOC_LITERAL(8, 87, 19), // "constructor_qwidget"
QT_MOC_LITERAL(9, 107, 26), // "constructor_qdatetime_data"
QT_MOC_LITERAL(10, 134, 21), // "constructor_qdatetime"
QT_MOC_LITERAL(11, 156, 22), // "constructor_qdate_data"
QT_MOC_LITERAL(12, 179, 17), // "constructor_qdate"
QT_MOC_LITERAL(13, 197, 22), // "constructor_qtime_data"
QT_MOC_LITERAL(14, 220, 17), // "constructor_qtime"
QT_MOC_LITERAL(15, 238, 16), // "sectionText_data"
QT_MOC_LITERAL(16, 255, 11), // "sectionText"
QT_MOC_LITERAL(17, 267, 27), // "dateTimeSignalChecking_data"
QT_MOC_LITERAL(18, 295, 22), // "dateTimeSignalChecking"
QT_MOC_LITERAL(19, 318, 10), // "mousePress"
QT_MOC_LITERAL(20, 329, 17), // "stepHourAMPM_data"
QT_MOC_LITERAL(21, 347, 12), // "stepHourAMPM"
QT_MOC_LITERAL(22, 360, 22), // "displayedSections_data"
QT_MOC_LITERAL(23, 383, 17), // "displayedSections"
QT_MOC_LITERAL(24, 401, 19), // "currentSection_data"
QT_MOC_LITERAL(25, 421, 14), // "currentSection"
QT_MOC_LITERAL(26, 436, 17), // "setCurrentSection"
QT_MOC_LITERAL(27, 454, 22), // "setCurrentSection_data"
QT_MOC_LITERAL(28, 477, 16), // "minimumDate_data"
QT_MOC_LITERAL(29, 494, 11), // "minimumDate"
QT_MOC_LITERAL(30, 506, 16), // "maximumDate_data"
QT_MOC_LITERAL(31, 523, 11), // "maximumDate"
QT_MOC_LITERAL(32, 535, 21), // "clearMinimumDate_data"
QT_MOC_LITERAL(33, 557, 16), // "clearMinimumDate"
QT_MOC_LITERAL(34, 574, 21), // "clearMaximumDate_data"
QT_MOC_LITERAL(35, 596, 16), // "clearMaximumDate"
QT_MOC_LITERAL(36, 613, 20), // "minimumDateTime_data"
QT_MOC_LITERAL(37, 634, 15), // "minimumDateTime"
QT_MOC_LITERAL(38, 650, 20), // "maximumDateTime_data"
QT_MOC_LITERAL(39, 671, 15), // "maximumDateTime"
QT_MOC_LITERAL(40, 687, 25), // "clearMinimumDateTime_data"
QT_MOC_LITERAL(41, 713, 20), // "clearMinimumDateTime"
QT_MOC_LITERAL(42, 734, 25), // "clearMaximumDateTime_data"
QT_MOC_LITERAL(43, 760, 20), // "clearMaximumDateTime"
QT_MOC_LITERAL(44, 781, 18), // "displayFormat_data"
QT_MOC_LITERAL(45, 800, 13), // "displayFormat"
QT_MOC_LITERAL(46, 814, 16), // "specialValueText"
QT_MOC_LITERAL(47, 831, 13), // "setRange_data"
QT_MOC_LITERAL(48, 845, 8), // "setRange"
QT_MOC_LITERAL(49, 854, 23), // "selectAndScrollWithKeys"
QT_MOC_LITERAL(50, 878, 12), // "backspaceKey"
QT_MOC_LITERAL(51, 891, 9), // "deleteKey"
QT_MOC_LITERAL(52, 901, 16), // "tabKeyNavigation"
QT_MOC_LITERAL(53, 918, 26), // "tabKeyNavigationWithPrefix"
QT_MOC_LITERAL(54, 945, 26), // "tabKeyNavigationWithSuffix"
QT_MOC_LITERAL(55, 972, 8), // "enterKey"
QT_MOC_LITERAL(56, 981, 8), // "readOnly"
QT_MOC_LITERAL(57, 990, 17), // "wrappingDate_data"
QT_MOC_LITERAL(58, 1008, 12), // "wrappingDate"
QT_MOC_LITERAL(59, 1021, 23), // "dateSignalChecking_data"
QT_MOC_LITERAL(60, 1045, 18), // "dateSignalChecking"
QT_MOC_LITERAL(61, 1064, 17), // "wrappingTime_data"
QT_MOC_LITERAL(62, 1082, 12), // "wrappingTime"
QT_MOC_LITERAL(63, 1095, 22), // "userKeyPress_Time_data"
QT_MOC_LITERAL(64, 1118, 17), // "userKeyPress_Time"
QT_MOC_LITERAL(65, 1136, 23), // "timeSignalChecking_data"
QT_MOC_LITERAL(66, 1160, 18), // "timeSignalChecking"
QT_MOC_LITERAL(67, 1179, 9), // "weirdCase"
QT_MOC_LITERAL(68, 1189, 7), // "newCase"
QT_MOC_LITERAL(69, 1197, 8), // "newCase2"
QT_MOC_LITERAL(70, 1206, 8), // "newCase3"
QT_MOC_LITERAL(71, 1215, 8), // "newCase4"
QT_MOC_LITERAL(72, 1224, 8), // "newCase5"
QT_MOC_LITERAL(73, 1233, 8), // "newCase6"
QT_MOC_LITERAL(74, 1242, 9), // "task98554"
QT_MOC_LITERAL(75, 1252, 10), // "task149097"
QT_MOC_LITERAL(76, 1263, 9), // "cursorPos"
QT_MOC_LITERAL(77, 1273, 13), // "calendarPopup"
QT_MOC_LITERAL(78, 1287, 10), // "hour12Test"
QT_MOC_LITERAL(79, 1298, 6), // "yyTest"
QT_MOC_LITERAL(80, 1305, 10), // "task108572"
QT_MOC_LITERAL(81, 1316, 10), // "task148725"
QT_MOC_LITERAL(82, 1327, 10), // "task148522"
QT_MOC_LITERAL(83, 1338, 18), // "setSelectedSection"
QT_MOC_LITERAL(84, 1357, 11), // "reverseTest"
QT_MOC_LITERAL(85, 1369, 10), // "ddMMMMyyyy"
QT_MOC_LITERAL(86, 1380, 10), // "wheelEvent"
QT_MOC_LITERAL(87, 1391, 22), // "specialValueCornerCase"
QT_MOC_LITERAL(88, 1414, 20), // "cursorPositionOnInit"
QT_MOC_LITERAL(89, 1435, 10), // "task118867"
QT_MOC_LITERAL(90, 1446, 20), // "nextPrevSection_data"
QT_MOC_LITERAL(91, 1467, 15), // "nextPrevSection"
QT_MOC_LITERAL(92, 1483, 23), // "dateEditTimeEditFormats"
QT_MOC_LITERAL(93, 1507, 13), // "timeSpec_data"
QT_MOC_LITERAL(94, 1521, 8), // "timeSpec"
QT_MOC_LITERAL(95, 1530, 11), // "timeSpecBug"
QT_MOC_LITERAL(96, 1542, 12), // "timeSpecInit"
QT_MOC_LITERAL(97, 1555, 13), // "monthEdgeCase"
QT_MOC_LITERAL(98, 1569, 9), // "setLocale"
QT_MOC_LITERAL(99, 1579, 19), // "potentialYYValueBug"
QT_MOC_LITERAL(100, 1599, 16), // "textSectionAtEnd"
QT_MOC_LITERAL(101, 1616, 22), // "keypadAutoAdvance_data"
QT_MOC_LITERAL(102, 1639, 17), // "keypadAutoAdvance"
QT_MOC_LITERAL(103, 1657, 10), // "task196924"
QT_MOC_LITERAL(104, 1668, 18), // "focusNextPrevChild"
QT_MOC_LITERAL(105, 1687, 36), // "taskQTBUG_12384_timeSpecShowT..."
QT_MOC_LITERAL(106, 1724, 20) // "deleteCalendarWidget"

    },
    "tst_QDateTimeEdit\0initTestCase\0\0init\0"
    "cleanup\0cleanupTestCase\0cachedDayTest\0"
    "getSetCheck\0constructor_qwidget\0"
    "constructor_qdatetime_data\0"
    "constructor_qdatetime\0constructor_qdate_data\0"
    "constructor_qdate\0constructor_qtime_data\0"
    "constructor_qtime\0sectionText_data\0"
    "sectionText\0dateTimeSignalChecking_data\0"
    "dateTimeSignalChecking\0mousePress\0"
    "stepHourAMPM_data\0stepHourAMPM\0"
    "displayedSections_data\0displayedSections\0"
    "currentSection_data\0currentSection\0"
    "setCurrentSection\0setCurrentSection_data\0"
    "minimumDate_data\0minimumDate\0"
    "maximumDate_data\0maximumDate\0"
    "clearMinimumDate_data\0clearMinimumDate\0"
    "clearMaximumDate_data\0clearMaximumDate\0"
    "minimumDateTime_data\0minimumDateTime\0"
    "maximumDateTime_data\0maximumDateTime\0"
    "clearMinimumDateTime_data\0"
    "clearMinimumDateTime\0clearMaximumDateTime_data\0"
    "clearMaximumDateTime\0displayFormat_data\0"
    "displayFormat\0specialValueText\0"
    "setRange_data\0setRange\0selectAndScrollWithKeys\0"
    "backspaceKey\0deleteKey\0tabKeyNavigation\0"
    "tabKeyNavigationWithPrefix\0"
    "tabKeyNavigationWithSuffix\0enterKey\0"
    "readOnly\0wrappingDate_data\0wrappingDate\0"
    "dateSignalChecking_data\0dateSignalChecking\0"
    "wrappingTime_data\0wrappingTime\0"
    "userKeyPress_Time_data\0userKeyPress_Time\0"
    "timeSignalChecking_data\0timeSignalChecking\0"
    "weirdCase\0newCase\0newCase2\0newCase3\0"
    "newCase4\0newCase5\0newCase6\0task98554\0"
    "task149097\0cursorPos\0calendarPopup\0"
    "hour12Test\0yyTest\0task108572\0task148725\0"
    "task148522\0setSelectedSection\0reverseTest\0"
    "ddMMMMyyyy\0wheelEvent\0specialValueCornerCase\0"
    "cursorPositionOnInit\0task118867\0"
    "nextPrevSection_data\0nextPrevSection\0"
    "dateEditTimeEditFormats\0timeSpec_data\0"
    "timeSpec\0timeSpecBug\0timeSpecInit\0"
    "monthEdgeCase\0setLocale\0potentialYYValueBug\0"
    "textSectionAtEnd\0keypadAutoAdvance_data\0"
    "keypadAutoAdvance\0task196924\0"
    "focusNextPrevChild\0"
    "taskQTBUG_12384_timeSpecShowTimeOnly\0"
    "deleteCalendarWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tst_QDateTimeEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     105,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  539,    2, 0x08 /* Private */,
       3,    0,  540,    2, 0x08 /* Private */,
       4,    0,  541,    2, 0x08 /* Private */,
       5,    0,  542,    2, 0x08 /* Private */,
       6,    0,  543,    2, 0x08 /* Private */,
       7,    0,  544,    2, 0x08 /* Private */,
       8,    0,  545,    2, 0x08 /* Private */,
       9,    0,  546,    2, 0x08 /* Private */,
      10,    0,  547,    2, 0x08 /* Private */,
      11,    0,  548,    2, 0x08 /* Private */,
      12,    0,  549,    2, 0x08 /* Private */,
      13,    0,  550,    2, 0x08 /* Private */,
      14,    0,  551,    2, 0x08 /* Private */,
      15,    0,  552,    2, 0x08 /* Private */,
      16,    0,  553,    2, 0x08 /* Private */,
      17,    0,  554,    2, 0x08 /* Private */,
      18,    0,  555,    2, 0x08 /* Private */,
      19,    0,  556,    2, 0x08 /* Private */,
      20,    0,  557,    2, 0x08 /* Private */,
      21,    0,  558,    2, 0x08 /* Private */,
      22,    0,  559,    2, 0x08 /* Private */,
      23,    0,  560,    2, 0x08 /* Private */,
      24,    0,  561,    2, 0x08 /* Private */,
      25,    0,  562,    2, 0x08 /* Private */,
      26,    0,  563,    2, 0x08 /* Private */,
      27,    0,  564,    2, 0x08 /* Private */,
      28,    0,  565,    2, 0x08 /* Private */,
      29,    0,  566,    2, 0x08 /* Private */,
      30,    0,  567,    2, 0x08 /* Private */,
      31,    0,  568,    2, 0x08 /* Private */,
      32,    0,  569,    2, 0x08 /* Private */,
      33,    0,  570,    2, 0x08 /* Private */,
      34,    0,  571,    2, 0x08 /* Private */,
      35,    0,  572,    2, 0x08 /* Private */,
      36,    0,  573,    2, 0x08 /* Private */,
      37,    0,  574,    2, 0x08 /* Private */,
      38,    0,  575,    2, 0x08 /* Private */,
      39,    0,  576,    2, 0x08 /* Private */,
      40,    0,  577,    2, 0x08 /* Private */,
      41,    0,  578,    2, 0x08 /* Private */,
      42,    0,  579,    2, 0x08 /* Private */,
      43,    0,  580,    2, 0x08 /* Private */,
      44,    0,  581,    2, 0x08 /* Private */,
      45,    0,  582,    2, 0x08 /* Private */,
      46,    0,  583,    2, 0x08 /* Private */,
      47,    0,  584,    2, 0x08 /* Private */,
      48,    0,  585,    2, 0x08 /* Private */,
      49,    0,  586,    2, 0x08 /* Private */,
      50,    0,  587,    2, 0x08 /* Private */,
      51,    0,  588,    2, 0x08 /* Private */,
      52,    0,  589,    2, 0x08 /* Private */,
      53,    0,  590,    2, 0x08 /* Private */,
      54,    0,  591,    2, 0x08 /* Private */,
      55,    0,  592,    2, 0x08 /* Private */,
      56,    0,  593,    2, 0x08 /* Private */,
      57,    0,  594,    2, 0x08 /* Private */,
      58,    0,  595,    2, 0x08 /* Private */,
      59,    0,  596,    2, 0x08 /* Private */,
      60,    0,  597,    2, 0x08 /* Private */,
      61,    0,  598,    2, 0x08 /* Private */,
      62,    0,  599,    2, 0x08 /* Private */,
      63,    0,  600,    2, 0x08 /* Private */,
      64,    0,  601,    2, 0x08 /* Private */,
      65,    0,  602,    2, 0x08 /* Private */,
      66,    0,  603,    2, 0x08 /* Private */,
      67,    0,  604,    2, 0x08 /* Private */,
      68,    0,  605,    2, 0x08 /* Private */,
      69,    0,  606,    2, 0x08 /* Private */,
      70,    0,  607,    2, 0x08 /* Private */,
      71,    0,  608,    2, 0x08 /* Private */,
      72,    0,  609,    2, 0x08 /* Private */,
      73,    0,  610,    2, 0x08 /* Private */,
      74,    0,  611,    2, 0x08 /* Private */,
      75,    0,  612,    2, 0x08 /* Private */,
      76,    0,  613,    2, 0x08 /* Private */,
      77,    0,  614,    2, 0x08 /* Private */,
      78,    0,  615,    2, 0x08 /* Private */,
      79,    0,  616,    2, 0x08 /* Private */,
      80,    0,  617,    2, 0x08 /* Private */,
      81,    0,  618,    2, 0x08 /* Private */,
      82,    0,  619,    2, 0x08 /* Private */,
      83,    0,  620,    2, 0x08 /* Private */,
      84,    0,  621,    2, 0x08 /* Private */,
      85,    0,  622,    2, 0x08 /* Private */,
      86,    0,  623,    2, 0x08 /* Private */,
      87,    0,  624,    2, 0x08 /* Private */,
      88,    0,  625,    2, 0x08 /* Private */,
      89,    0,  626,    2, 0x08 /* Private */,
      90,    0,  627,    2, 0x08 /* Private */,
      91,    0,  628,    2, 0x08 /* Private */,
      92,    0,  629,    2, 0x08 /* Private */,
      93,    0,  630,    2, 0x08 /* Private */,
      94,    0,  631,    2, 0x08 /* Private */,
      95,    0,  632,    2, 0x08 /* Private */,
      96,    0,  633,    2, 0x08 /* Private */,
      97,    0,  634,    2, 0x08 /* Private */,
      98,    0,  635,    2, 0x08 /* Private */,
      99,    0,  636,    2, 0x08 /* Private */,
     100,    0,  637,    2, 0x08 /* Private */,
     101,    0,  638,    2, 0x08 /* Private */,
     102,    0,  639,    2, 0x08 /* Private */,
     103,    0,  640,    2, 0x08 /* Private */,
     104,    0,  641,    2, 0x08 /* Private */,
     105,    0,  642,    2, 0x08 /* Private */,
     106,    0,  643,    2, 0x08 /* Private */,

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

       0        // eod
};

void tst_QDateTimeEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tst_QDateTimeEdit *_t = static_cast<tst_QDateTimeEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->init(); break;
        case 2: _t->cleanup(); break;
        case 3: _t->cleanupTestCase(); break;
        case 4: _t->cachedDayTest(); break;
        case 5: _t->getSetCheck(); break;
        case 6: _t->constructor_qwidget(); break;
        case 7: _t->constructor_qdatetime_data(); break;
        case 8: _t->constructor_qdatetime(); break;
        case 9: _t->constructor_qdate_data(); break;
        case 10: _t->constructor_qdate(); break;
        case 11: _t->constructor_qtime_data(); break;
        case 12: _t->constructor_qtime(); break;
        case 13: _t->sectionText_data(); break;
        case 14: _t->sectionText(); break;
        case 15: _t->dateTimeSignalChecking_data(); break;
        case 16: _t->dateTimeSignalChecking(); break;
        case 17: _t->mousePress(); break;
        case 18: _t->stepHourAMPM_data(); break;
        case 19: _t->stepHourAMPM(); break;
        case 20: _t->displayedSections_data(); break;
        case 21: _t->displayedSections(); break;
        case 22: _t->currentSection_data(); break;
        case 23: _t->currentSection(); break;
        case 24: _t->setCurrentSection(); break;
        case 25: _t->setCurrentSection_data(); break;
        case 26: _t->minimumDate_data(); break;
        case 27: _t->minimumDate(); break;
        case 28: _t->maximumDate_data(); break;
        case 29: _t->maximumDate(); break;
        case 30: _t->clearMinimumDate_data(); break;
        case 31: _t->clearMinimumDate(); break;
        case 32: _t->clearMaximumDate_data(); break;
        case 33: _t->clearMaximumDate(); break;
        case 34: _t->minimumDateTime_data(); break;
        case 35: _t->minimumDateTime(); break;
        case 36: _t->maximumDateTime_data(); break;
        case 37: _t->maximumDateTime(); break;
        case 38: _t->clearMinimumDateTime_data(); break;
        case 39: _t->clearMinimumDateTime(); break;
        case 40: _t->clearMaximumDateTime_data(); break;
        case 41: _t->clearMaximumDateTime(); break;
        case 42: _t->displayFormat_data(); break;
        case 43: _t->displayFormat(); break;
        case 44: _t->specialValueText(); break;
        case 45: _t->setRange_data(); break;
        case 46: _t->setRange(); break;
        case 47: _t->selectAndScrollWithKeys(); break;
        case 48: _t->backspaceKey(); break;
        case 49: _t->deleteKey(); break;
        case 50: _t->tabKeyNavigation(); break;
        case 51: _t->tabKeyNavigationWithPrefix(); break;
        case 52: _t->tabKeyNavigationWithSuffix(); break;
        case 53: _t->enterKey(); break;
        case 54: _t->readOnly(); break;
        case 55: _t->wrappingDate_data(); break;
        case 56: _t->wrappingDate(); break;
        case 57: _t->dateSignalChecking_data(); break;
        case 58: _t->dateSignalChecking(); break;
        case 59: _t->wrappingTime_data(); break;
        case 60: _t->wrappingTime(); break;
        case 61: _t->userKeyPress_Time_data(); break;
        case 62: _t->userKeyPress_Time(); break;
        case 63: _t->timeSignalChecking_data(); break;
        case 64: _t->timeSignalChecking(); break;
        case 65: _t->weirdCase(); break;
        case 66: _t->newCase(); break;
        case 67: _t->newCase2(); break;
        case 68: _t->newCase3(); break;
        case 69: _t->newCase4(); break;
        case 70: _t->newCase5(); break;
        case 71: _t->newCase6(); break;
        case 72: _t->task98554(); break;
        case 73: _t->task149097(); break;
        case 74: _t->cursorPos(); break;
        case 75: _t->calendarPopup(); break;
        case 76: _t->hour12Test(); break;
        case 77: _t->yyTest(); break;
        case 78: _t->task108572(); break;
        case 79: _t->task148725(); break;
        case 80: _t->task148522(); break;
        case 81: _t->setSelectedSection(); break;
        case 82: _t->reverseTest(); break;
        case 83: _t->ddMMMMyyyy(); break;
        case 84: _t->wheelEvent(); break;
        case 85: _t->specialValueCornerCase(); break;
        case 86: _t->cursorPositionOnInit(); break;
        case 87: _t->task118867(); break;
        case 88: _t->nextPrevSection_data(); break;
        case 89: _t->nextPrevSection(); break;
        case 90: _t->dateEditTimeEditFormats(); break;
        case 91: _t->timeSpec_data(); break;
        case 92: _t->timeSpec(); break;
        case 93: _t->timeSpecBug(); break;
        case 94: _t->timeSpecInit(); break;
        case 95: _t->monthEdgeCase(); break;
        case 96: _t->setLocale(); break;
        case 97: _t->potentialYYValueBug(); break;
        case 98: _t->textSectionAtEnd(); break;
        case 99: _t->keypadAutoAdvance_data(); break;
        case 100: _t->keypadAutoAdvance(); break;
        case 101: _t->task196924(); break;
        case 102: _t->focusNextPrevChild(); break;
        case 103: _t->taskQTBUG_12384_timeSpecShowTimeOnly(); break;
        case 104: _t->deleteCalendarWidget(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tst_QDateTimeEdit::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tst_QDateTimeEdit.data,
      qt_meta_data_tst_QDateTimeEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tst_QDateTimeEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tst_QDateTimeEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tst_QDateTimeEdit.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tst_QDateTimeEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 105)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 105;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 105)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 105;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
