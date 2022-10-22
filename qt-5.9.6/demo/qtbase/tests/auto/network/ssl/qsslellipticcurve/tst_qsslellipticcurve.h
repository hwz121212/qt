#pragma once


#include <QtTest/QtTest>
#include <QSslEllipticCurve>
#include <QSslConfiguration>

class tst_QSslEllipticCurve : public QObject
{
    Q_OBJECT

#ifndef QT_NO_SSL
private Q_SLOTS:
    void constExpr();
    void construction();
    void fromShortName_data();
    void fromShortName();
    void fromLongName_data();
    void fromLongName();
#endif
};

