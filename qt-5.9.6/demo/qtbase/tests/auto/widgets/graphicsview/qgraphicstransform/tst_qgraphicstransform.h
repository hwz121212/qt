#pragma once


#include <QtTest/QtTest>
#include <qgraphicsitem.h>
#include <qgraphicstransform.h>

class tst_QGraphicsTransform : public QObject {
    Q_OBJECT

private slots:
    void scale();
    void rotation();
    void rotation3d_data();
    void rotation3d();
    void rotation3dArbitraryAxis_data();
    void rotation3dArbitraryAxis();

private:
    QString toString(QTransform const&);
};


