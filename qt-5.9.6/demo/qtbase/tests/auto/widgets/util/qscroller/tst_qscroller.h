#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtGui>
#include <QtWidgets>
#include <QtTest>
#include <qpa/qwindowsysteminterface.h>

// #include <QDebug>

class tst_QScrollerWidget : public QWidget
{
public:
    tst_QScrollerWidget()
        : QWidget()
    {
        reset();
    }

    void reset()
    {
        receivedPrepare = false;
        receivedScroll = false;
        receivedFirst = false;
        receivedLast = false;
        receivedOvershoot = false;
    }

    bool event(QEvent *e)
    {
        switch (e->type()) {
        case QEvent::Gesture:
            e->setAccepted(false); // better reject the event or QGestureManager will make trouble
            return false;

        case QEvent::ScrollPrepare:
            {
                receivedPrepare = true;
                QScrollPrepareEvent *se = static_cast<QScrollPrepareEvent *>(e);
                se->setViewportSize(QSizeF(100,100));
                se->setContentPosRange(scrollArea);
                se->setContentPos(scrollPosition);
                se->accept();
                return true;
            }

        case QEvent::Scroll:
            {
                receivedScroll = true;
                QScrollEvent *se = static_cast<QScrollEvent *>(e);
                // qDebug() << "Scroll for"<<this<<"pos"<<se->scrollPos()<<"ov"<<se->overshoot()<<"first"<<se->isFirst()<<"last"<<se->isLast();

                if (se->scrollState() == QScrollEvent::ScrollStarted)
                    receivedFirst = true;
                if (se->scrollState() == QScrollEvent::ScrollFinished)
                    receivedLast = true;

                currentPos = se->contentPos();
                overshoot = se->overshootDistance();
                if (!qFuzzyCompare( overshoot.x() + 1.0, 1.0 ) ||
                    !qFuzzyCompare( overshoot.y() + 1.0, 1.0 ))
                    receivedOvershoot = true;
                return true;
            }

        default:
            return QObject::event(e);
        }
    }


    QRectF scrollArea;
    QPointF scrollPosition;

    bool receivedPrepare;
    bool receivedScroll;
    bool receivedFirst;
    bool receivedLast;
    bool receivedOvershoot;

    QPointF currentPos;
    QPointF overshoot;
};


class tst_QScroller : public QObject
{
    Q_OBJECT
public:
    tst_QScroller() { }
    ~tst_QScroller() { }

private:
    void kineticScroll( tst_QScrollerWidget *sw, QPointF from, QPoint touchStart, QPoint touchUpdate, QPoint touchEnd);
    void kineticScrollNoTest( tst_QScrollerWidget *sw, QPointF from, QPoint touchStart, QPoint touchUpdate, QPoint touchEnd);

private slots:
    void staticScrollers();
    void scrollerProperties();
    void scrollTo();
    void scroll();
    void overshoot();

private:
    QTouchDevice *m_touchScreen = QTest::createTouchDevice();
};

