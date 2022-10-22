#pragma once


#include <QtTest/QtTestWidgets>
#include <QtWidgets/qdesktopwidget.h>
#include <QtWidgets/qgraphicseffect.h>
#include <QtWidgets/qgraphicsview.h>
#include <QtWidgets/qgraphicsscene.h>
#include <QtWidgets/qgraphicsitem.h>
#include <QtWidgets/qgraphicswidget.h>
#include <QtWidgets/qstyleoption.h>

#include <private/qgraphicseffect_p.h>

class tst_QGraphicsEffect : public QObject
{
    Q_OBJECT
public slots:
    void initTestCase();

private slots:
    void setEnabled();
    void source();
    void boundingRectFor();
    void boundingRect();
    void boundingRect2();
    void draw();
    void opacity();
    void grayscale();
    void colorize();
    void drawPixmapItem();
    void deviceCoordinateTranslateCaching();
    void inheritOpacity();
    void dropShadowClipping();
    void childrenVisibilityShouldInvalidateCache();
    void prepareGeometryChangeInvalidateCache();
    void itemHasNoContents();
};
