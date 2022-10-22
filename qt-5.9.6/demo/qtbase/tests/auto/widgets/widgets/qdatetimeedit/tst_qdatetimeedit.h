#pragma once



#define QT_GUI_LIB


#define QT_WIDGETS_LIB
#include <QtTest/QtTest>
#include <qapplication.h>
#include <qgroupbox.h>
#include <qlineedit.h>



#include <qdatetimeedit.h>
#include <qlocale.h>
#include <qlayout.h>
#include <qeventloop.h>
#include <qstyle.h>
#include <qstyle.h>
#include <QStyleOptionSpinBox>
#include <QDate>
#include <QDateTime>
#include <QTime>
#include <QList>
#include <QDateTimeEdit>
#include <QCalendarWidget>
#include <QWidget>
#include <QLineEdit>
#include <QObject>
#include <QLocale>
#include <QString>
#include <QVariantList>
#include <QVariant>
#include <QApplication>
#include <QPoint>
#include <QVBoxLayout>
#include <QRect>
#include <QCursor>
#include <QEventLoop>
#include <QStyle>
#include <QStyleOptionComboBox>
#include <QTimeEdit>
#include <QMetaType>
#include <QDebug>
#include <QWheelEvent>
#include <QTest>
#include <QSignalSpy>
#include <QTestEventList>
#include <QDateEdit>

#include <private/qdatetimeedit_p.h>

#ifdef Q_OS_WIN
# include <windows.h>
# undef min
# undef max
#endif


Q_DECLARE_METATYPE(Qt::Key);
Q_DECLARE_METATYPE(Qt::KeyboardModifiers);
Q_DECLARE_METATYPE(Qt::KeyboardModifier);

class EditorDateEdit : public QDateTimeEdit
{
    Q_OBJECT
public:
    EditorDateEdit(QWidget *parent = 0) : QDateTimeEdit(parent) {}
    QLineEdit *lineEdit() { return QDateTimeEdit::lineEdit(); }
    friend class tst_QDateTimeEdit;
};

class tst_QDateTimeEdit : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void init();
    void cleanup();
    void cleanupTestCase();

    void cachedDayTest();
    void getSetCheck();
    void constructor_qwidget();
    void constructor_qdatetime_data();
    void constructor_qdatetime();
    void constructor_qdate_data();
    void constructor_qdate();
    void constructor_qtime_data();
    void constructor_qtime();

    void sectionText_data();
    void sectionText();
    void dateTimeSignalChecking_data();
    void dateTimeSignalChecking();
    void mousePress();
    void stepHourAMPM_data();

    void stepHourAMPM();
    void displayedSections_data();
    void displayedSections();
    void currentSection_data();
    void currentSection();

    void setCurrentSection();
    void setCurrentSection_data();

    void minimumDate_data();
    void minimumDate();
    void maximumDate_data();
    void maximumDate();
    void clearMinimumDate_data();
    void clearMinimumDate();
    void clearMaximumDate_data();
    void clearMaximumDate();

    void minimumDateTime_data();
    void minimumDateTime();
    void maximumDateTime_data();
    void maximumDateTime();

    void clearMinimumDateTime_data();
    void clearMinimumDateTime();
    void clearMaximumDateTime_data();
    void clearMaximumDateTime();

    void displayFormat_data();
    void displayFormat();

    void specialValueText();
    void setRange_data();
    void setRange();

    void selectAndScrollWithKeys();
    void backspaceKey();
    void deleteKey();
    void tabKeyNavigation();
    void tabKeyNavigationWithPrefix();
    void tabKeyNavigationWithSuffix();
    void enterKey();

    void readOnly();

    void wrappingDate_data();
    void wrappingDate();

    void dateSignalChecking_data();
    void dateSignalChecking();

    void wrappingTime_data();
    void wrappingTime();

    void userKeyPress_Time_data();
    void userKeyPress_Time();

    void timeSignalChecking_data();
    void timeSignalChecking();

    void weirdCase();
    void newCase();
    void newCase2();
    void newCase3();
    void newCase4();
    void newCase5();
    void newCase6();

    void task98554();
    void task149097();

    void cursorPos();
    void calendarPopup();

    void hour12Test();
    void yyTest();
    void task108572();

    void task148725();
    void task148522();

    void setSelectedSection();
    void reverseTest();

    void ddMMMMyyyy();
#if QT_CONFIG(wheelevent)
    void wheelEvent();
#endif

    void specialValueCornerCase();
    void cursorPositionOnInit();

    void task118867();

    void nextPrevSection_data();
    void nextPrevSection();

    void dateEditTimeEditFormats();
    void timeSpec_data();
    void timeSpec();
    void timeSpecBug();
    void timeSpecInit();

    void monthEdgeCase();
    void setLocale();

    void potentialYYValueBug();
    void textSectionAtEnd();

    void keypadAutoAdvance_data();
    void keypadAutoAdvance();

    void task196924();
    void focusNextPrevChild();

    void taskQTBUG_12384_timeSpecShowTimeOnly();

    void deleteCalendarWidget();

#ifdef QT_BUILD_INTERNAL
    void dateEditCorrectSectionSize_data();
    void dateEditCorrectSectionSize();
#endif
private:
    EditorDateEdit* testWidget;
    QWidget *testFocusWidget;
};

