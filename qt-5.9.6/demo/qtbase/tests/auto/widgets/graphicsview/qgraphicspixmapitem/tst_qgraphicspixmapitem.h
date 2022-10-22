#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <qgraphicsscene.h>
#include <qgraphicsitem.h>

class tst_QGraphicsPixmapItem : public QObject
{
    Q_OBJECT

private slots:
    void qgraphicspixmapitem_data();
    void qgraphicspixmapitem();
    void boundingRect_data();
    void boundingRect();
    void contains_data();
    void contains();
    void isObscuredBy_data();
    void isObscuredBy();
    void offset_data();
    void offset();
    void opaqueArea_data();
    void opaqueArea();
    void pixmap_data();
    void pixmap();
    void setPixmap_data();
    void setPixmap();
    void setShapeMode_data();
    void setShapeMode();
    void setTransformationMode_data();
    void setTransformationMode();
    void shape_data();
    void shape();
    void extension_data();
    void extension();
    void setExtension_data();
    void setExtension();
    void supportsExtension_data();
    void supportsExtension();
};

