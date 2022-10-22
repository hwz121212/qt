#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <QtWidgets/qgraphicseffect.h>
#include <QtWidgets/qgraphicsview.h>
#include <QtWidgets/qgraphicsscene.h>
#include <QtWidgets/qgraphicsitem.h>
#include <QtWidgets/qstyleoption.h>

#include <private/qgraphicseffect_p.h>

class CustomItem : public QGraphicsRectItem
{
public:
    CustomItem(qreal x, qreal y, qreal width, qreal height)
        : QGraphicsRectItem(x, y, width, height), numRepaints(0),
          m_painter(0)
    {}

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
    {
        m_painter = painter;
        ++numRepaints;
        QGraphicsRectItem::paint(painter, option, widget);
    }

    void reset()
    {
        numRepaints = 0;
        m_painter = 0;
    }

    int numRepaints;
    QPainter *m_painter;
};

class CustomEffect : public QGraphicsEffect
{
public:
    CustomEffect()
        : QGraphicsEffect(), numRepaints(0), m_margin(10), m_sourceChanged(false),
          m_sourceBoundingRectChanged(false), doNothingInDraw(false),
          storeDeviceDependentStuff(false),
          m_painter(0), m_source(0)
    {}

    QRectF boundingRectFor(const QRectF &rect) const
    { return rect.adjusted(-m_margin, -m_margin, m_margin, m_margin); }

    void reset()
    {
        numRepaints = 0;
        m_sourceChanged = false;
        m_sourceBoundingRectChanged = false;
        m_painter = 0;
        m_source = 0;
        deviceCoordinatesPixmap = QPixmap();
        deviceRect = QRect();
        sourceDeviceBoundingRect = QRectF();
    }

    void setMargin(int margin)
    {
        m_margin = margin;
        updateBoundingRect();
    }

    int margin() const
    { return m_margin; }

    void draw(QPainter *painter)
    {
        ++numRepaints;
        if (storeDeviceDependentStuff) {
            deviceCoordinatesPixmap = source()->pixmap(Qt::DeviceCoordinates);
            deviceRect = QRect(0, 0, painter->device()->width(), painter->device()->height());
            sourceDeviceBoundingRect = source()->boundingRect(Qt::DeviceCoordinates);
        }
        if (doNothingInDraw)
            return;
        m_source = source();
        m_painter = painter;
        source()->draw(painter);
    }

    void sourceChanged(ChangeFlags)
    { m_sourceChanged = true; }

    void sourceBoundingRectChanged()
    { m_sourceBoundingRectChanged = true; }

    int numRepaints;
    int m_margin;
    bool m_sourceChanged;
    bool m_sourceBoundingRectChanged;
    bool doNothingInDraw;
    bool storeDeviceDependentStuff;
    QPainter *m_painter;
    QGraphicsEffectSource *m_source;
    QPixmap deviceCoordinatesPixmap;
    QRect deviceRect;
    QRectF sourceDeviceBoundingRect;
};

class tst_QGraphicsEffectSource : public QObject
{
    Q_OBJECT
public slots:
    void initTestCase();
    void cleanupTestCase();
    void init();

private slots:
    void graphicsItem();
    void styleOption();
    void isPixmap();
    void draw();
    void update();
    void boundingRect();
    void clippedBoundingRect();
    void deviceRect();
    void pixmap();

    void pixmapPadding_data();
    void pixmapPadding();

private:
    QGraphicsView *view;
    QGraphicsScene *scene;
    CustomItem *item;
    CustomEffect *effect;
};
