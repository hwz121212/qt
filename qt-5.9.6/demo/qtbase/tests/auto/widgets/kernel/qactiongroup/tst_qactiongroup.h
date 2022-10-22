#pragma once

#include <QtTest/QtTest>

#include <qmainwindow.h>
#include <qmenu.h>
#include <qaction.h>
#include <QApplication>



class tst_QActionGroup : public QObject
{
    Q_OBJECT

private slots:
    void cleanup() { QVERIFY(QApplication::topLevelWidgets().isEmpty()); }
    void enabledPropagation();
    void visiblePropagation();
    void exclusive();
    void separators();
    void testActionInTwoQActionGroup();
    void unCheckCurrentAction();
};
