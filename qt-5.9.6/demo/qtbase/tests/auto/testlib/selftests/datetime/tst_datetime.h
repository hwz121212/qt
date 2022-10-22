#pragma once


#include <QtCore/QCoreApplication>
#include <QtCore/QDateTime>
#include <QtTest/QtTest>

/*!
  \internal
 */
class tst_DateTime: public QObject
{
    Q_OBJECT

private slots:
    void dateTime() const;
    void qurl() const;
    void qurl_data() const;
};

