#pragma once

#include <QtGui/QGuiApplication>
#include <QtTest/QtTest>
#include <QtCore/QProcess>

class tst_QProcess_and_GuiEventLoop : public QObject
{
    Q_OBJECT
private slots:
    void waitForAndEventLoop();
};

