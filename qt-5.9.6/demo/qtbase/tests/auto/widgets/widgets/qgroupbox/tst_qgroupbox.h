#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <QLineEdit>
#include <QStyle>
#include <QStyleOptionGroupBox>
#include <QVBoxLayout>
#include <QRadioButton>
#include <QDialog>

#include "qgroupbox.h"

class tst_QGroupBox : public QObject
{
    Q_OBJECT

public:
    tst_QGroupBox();
    virtual ~tst_QGroupBox();

public slots:
    void toggledHelperSlot(bool on);
    void init();
    void clickTimestampSlot();
    void toggleTimestampSlot();

private slots:
    void setTitle_data();
    void setTitle();
    void setCheckable_data();
    void setCheckable();
    void setChecked_data();
    void setChecked();
    void enabledPropagation();
    void enabledChildPropagation();
    void sizeHint();
    void toggled();
    void clicked_data();
    void clicked();
    void toggledVsClicked();
    void childrenAreDisabled();
    void propagateFocus();
    void task_QTBUG_19170_ignoreMouseReleseEvent();
    void task_QTBUG_15519_propagateMouseEvents();

private:
    bool checked;
    qint64 timeStamp;
    qint64 clickTimeStamp;
    qint64 toggleTimeStamp;

    static void sendMouseMoveEvent(QWidget *widget, const QPoint &localPos);
};

