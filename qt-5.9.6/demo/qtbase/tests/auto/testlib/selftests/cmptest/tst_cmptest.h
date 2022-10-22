#pragma once


#include <QtCore/QCoreApplication>
#include <QtTest/QtTest>
#ifdef QT_GUI_LIB
#include <QtGui/QColor>
#include <QtGui/QImage>
#include <QtGui/QPixmap>
#endif

/* XPM test data for QPixmap, QImage tests (use drag cursors as example) */

static const char * const xpmPixmapData1[] = {
"11 20 3 1",
".        c None",
"a        c #FFFFFF",
"X        c #000000", // X11 cursor is traditionally black
"aa.........",
"aXa........",
"aXXa.......",
"aXXXa......",
"aXXXXa.....",
"aXXXXXa....",
"aXXXXXXa...",
"aXXXXXXXa..",
"aXXXXXXXXa.",
"aXXXXXXXXXa",
"aXXXXXXaaaa",
"aXXXaXXa...",
"aXXaaXXa...",
"aXa..aXXa..",
"aa...aXXa..",
"a.....aXXa.",
"......aXXa.",
".......aXXa",
".......aXXa",
"........aa."};

static const char * const xpmPixmapData2[] = {
"11 20 4 1",
".        c None",
"a        c #FFFFFF",
"b        c #0000FF",
"X        c #000000",
"aab........",
"aXab.......",
"aXXab......",
"aXXXab.....",
"aXXXXab....",
"aXXXXXab...",
"aXXXXXXab..",
"aXXXXXXXa..",
"aXXXXXXXXa.",
"aXXXXXXXXXa",
"aXXXXXXaaaa",
"aXXXaXXa...",
"aXXaaXXa...",
"aXa..aXXa..",
"aa...aXXa..",
"a.....aXXa.",
"......aXXa.",
".......aXXa",
".......aXXa",
"........aa."};

static const char * const xpmPixmapData3[] = {
"20 20 2 1",
"       c #000000",
".      c #C32D2D",
"          ..........",
"            ........",
"             .......",
"              ......",
"                ....",
"                  ..",
"                   .",
"                    ",
"                    ",
".                   ",
"...                 ",
".....               ",
"......              ",
".......             ",
".........           ",
"...........         ",
"...........         ",
"............        ",
"............        ",
".............       "};

class tst_Cmptest: public QObject
{
    Q_OBJECT

public:
    enum class MyClassEnum { MyClassEnumValue1, MyClassEnumValue2 };
    Q_ENUM(MyClassEnum)

private slots:
    void compare_unregistered_enums();
    void compare_registered_enums();
    void compare_class_enums();
    void compare_boolfuncs();
    void compare_to_nullptr();
    void compare_pointerfuncs();
    void compare_tostring();
    void compare_tostring_data();
    void compareQStringLists();
    void compareQStringLists_data();
    void compareQListInt();
    void compareQListDouble();
#ifdef QT_GUI_LIB
    void compareQColor();
    void compareQPixmaps();
    void compareQPixmaps_data();
    void compareQImages();
    void compareQImages_data();
    void compareQRegion_data();
    void compareQRegion();
#endif
    void verify();
    void verify2();
    void tryVerify();
    void tryVerify2();
    void verifyExplicitOperatorBool();
};

