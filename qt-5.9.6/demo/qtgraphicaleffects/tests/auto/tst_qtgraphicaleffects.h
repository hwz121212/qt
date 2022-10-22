#pragma once


#include <qtest.h>
#include <QObject>
#include <QtQml>



class tst_qtgraphicaleffects : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();

    void blend();
    void brightnessContrast();
    void colorize();
    void colorOverlay();
    void conicalGradient();
    void desaturate();
    void directionalBlur();
    void displace();
    void dropShadow();
    void fastBlur();
    void gammaAdjust();
    void gaussianBlur();
    void glow();
    void hueSaturation();
    void innerShadow();
    void levelAdjust();
    void linearGradient();
    void maskedBlur();
    void opacityMask();
    void radialBlur();
    void radialGradient();
    void recursiveBlur();
    void rectangularGlow();
    void thresholdMask();
    void zoomBlur();

private:
    QString componentErrors(const QQmlComponent*) const;

    QString importSelf;
    QQmlEngine engine;
};
