#pragma once


#include <QtTest/QtTest>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicsview.h>
#include <qstyleoption.h>
#include <private/qobject_p.h>

class tst_QGraphicsObject : public QObject {
    Q_OBJECT

private slots:
    void pos();
    void x();
    void y();
    void z();
    void opacity();
    void enabled();
    void visible();
    void deleted();
};

