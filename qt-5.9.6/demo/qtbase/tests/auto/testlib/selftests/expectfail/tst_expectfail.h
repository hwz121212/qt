#pragma once


#include <QtCore/QCoreApplication>
#include <QtTest/QtTest>

Q_DECLARE_METATYPE(QTest::TestFailMode)

class tst_ExpectFail: public QObject
{
    Q_OBJECT

private slots:
    void xfailAndContinue() const;
    void xfailAndAbort() const;
    void xfailTwice() const;
    void xfailWithQString() const;
    void xfailDataDrivenWithQVerify_data() const;
    void xfailDataDrivenWithQVerify() const;
    void xfailDataDrivenWithQCompare_data() const;
    void xfailDataDrivenWithQCompare() const;
    void xfailOnWrongRow_data() const;
    void xfailOnWrongRow() const;
    void xfailOnAnyRow_data() const;
    void xfailOnAnyRow() const;
    void xfailWithoutVerify_data() const;
    void xfailWithoutVerify() const;
    void xpass() const;
    void xpassDataDrivenWithQVerify_data() const;
    void xpassDataDrivenWithQVerify() const;
    void xpassDataDrivenWithQCompare_data() const;
    void xpassDataDrivenWithQCompare() const;
};

