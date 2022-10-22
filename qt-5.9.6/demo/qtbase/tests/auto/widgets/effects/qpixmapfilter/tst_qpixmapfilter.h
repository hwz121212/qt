#pragma once


#include <QtTest/QtTest>
#include <qpixmap.h>
#include <private/qpixmapfilter_p.h>
#include <qpainter.h>

class tst_QPixmapFilter : public QObject
{
    Q_OBJECT

private slots:
    void colorizeSetColor();
    void colorizeSetStrength();
    void colorizeProcess();
    void colorizeDraw();
    void colorizeDrawStrength();
    void colorizeDrawSubRect();
    void colorizeProcessSubRect();
    void convolutionBoundingRectFor();
    void convolutionDrawSubRect();
    void dropShadowBoundingRectFor();
    void blurIndexed8();

    void testDefaultImplementations();
};
