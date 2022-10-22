#pragma once


#include <QtTest/QtTest>

#include <qgraphicsitemanimation.h>
#include <QtCore/qtimeline.h>
#include <QtGui/qmatrix.h>

class tst_QGraphicsItemAnimation : public QObject
{
    Q_OBJECT

private slots:
    void construction();
    void linearMove();
    void linearRotation();
    void checkReturnedLists();
    void overwriteValueForStep();
    void setTimeLine();
};
