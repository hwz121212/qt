#pragma once


#include <qtconcurrentthreadengine.h>
#include <qexception.h>
#include <QThread>
#include <QtTest/QtTest>

using namespace QtConcurrent;

class tst_QtConcurrentThreadEngine: public QObject
{
    Q_OBJECT
private slots:
    void runDirectly();
    void result();
    void runThroughStarter();
    void cancel();
    void throttle();
    void threadCount();
    void multipleResults();
    void stresstest();
    void cancelQueuedSlowUser();
#ifndef QT_NO_EXCEPTIONS
    void exceptions();
#endif
};
