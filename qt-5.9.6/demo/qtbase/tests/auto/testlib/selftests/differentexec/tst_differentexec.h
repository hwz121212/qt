#pragma once


#include <QtTest/QtTest>

class tst_TestA : public QObject
{
    Q_OBJECT

private slots:
    void slotName() const
    {
        QVERIFY(true);
    }

    void aDifferentSlot() const
    {
        QVERIFY(false);
    }
};

class tst_TestB : public QObject
{
    Q_OBJECT

private slots:
    void slotName() const
    {
        QVERIFY(true);
    }

    void aSecondDifferentSlot() const
    {
        QVERIFY(false);
    }
};

