#pragma once


#include <QtTest/QtTest>
#include <qgraphicsitem.h>
#include <qpen.h>


class tst_QGraphicsPolygonItem : public QObject
{
    Q_OBJECT

private slots:
    void qgraphicspolygonitem_data();
    void qgraphicspolygonitem();
    void boundingRect_data();
    void boundingRect();
    void contains_data();
    void contains();
    void fillRule_data();
    void fillRule();
    void isObscuredBy_data();
    void isObscuredBy();
    void opaqueArea_data();
    void opaqueArea();
    void polygon_data();
    void polygon();
    void shape_data();
    void shape();
    void extension_data();
    void extension();
    void setExtension_data();
    void setExtension();
    void supportsExtension_data();
    void supportsExtension();
};

