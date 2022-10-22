#pragma once


#include <QtTest/QtTest>

#include <qtoolbox.h>

QT_FORWARD_DECLARE_CLASS(QToolBox)

class tst_QToolBoxPrivate;

class tst_QToolBox : public QObject
{
    Q_OBJECT

protected slots:
    void currentChanged(int);

private slots:
    void init();
    void cleanup();

    void getSetCheck();
    void populate();
    void change();
    void clear();

private:
    QToolBox *testWidget;
    int currentIndex;

    tst_QToolBoxPrivate *d;
};

