#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <QAbstractSlider>
#include <QScrollBar>
#include <QSlider>
#include <QStyle>
#include <QStyleOption>
#include <QTime>
#include <QDebug>

#include <QtTest/private/qtesthelpers_p.h>

using namespace QTestPrivate;

// defined to be 120 by the wheel mouse vendors according to the docs
#define WHEEL_DELTA 120

class Slider : public QAbstractSlider
{
    public:
        Slider(QWidget *parent)
            : QAbstractSlider(parent) {}
        using QAbstractSlider::setRepeatAction;
        using QAbstractSlider::repeatAction;
};

class tst_QAbstractSlider: public QObject
{
    Q_OBJECT
public slots:
    void initTestCase();
    void cleanupTestCase();
    void actionTriggered(int action);
    void rangeChanged(int min, int max);
    void valueChanged(int value);
    void sliderMoved(int value);

private slots:
    void triggerAction_data();
    void triggerAction();
    void minimum_maximum_data();
    void minimum_maximum();
    void keyPressed_data();
    void keyPressed();
#if QT_CONFIG(wheelevent)
    void wheelEvent_data();
    void wheelEvent();
    void fineGrainedWheelEvent_data();
    void fineGrainedWheelEvent();
#endif
    void sliderPressedReleased_data();
    void sliderPressedReleased();
    void setOrientation();
    void sliderMoved_data();
    void sliderMoved();
    void rangeChanged_data();
    void rangeChanged();
    void setSliderPosition_data();
    void setSliderPosition();
    void setValue_data();
    void setValue();
    void setRepeatAction();
    void connectedSliders();

private:
    void waitUntilTimeElapsed(const QTime& t, int ms);

    QWidget *topLevel;
    Slider *slider;
    int previousAction;
    int reportedMinimum;
    int reportedMaximum;
    int reportedValue;
    int reportedSliderPosition;
    qint64 timeStamp;
    qint64 actionTriggeredTimeStamp;
    qint64 valueChangedTimeStamp;
    qint64 rangeChangedTimeStamp;
    qint64 sliderMovedTimeStamp;
};

