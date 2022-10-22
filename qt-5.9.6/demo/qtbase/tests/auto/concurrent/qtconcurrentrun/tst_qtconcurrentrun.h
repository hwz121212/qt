#pragma once


#include <qtconcurrentrun.h>
#include <qfuture.h>
#include <QString>
#include <QtTest/QtTest>

using namespace QtConcurrent;

class tst_QtConcurrentRun: public QObject
{
    Q_OBJECT
private slots:
    void runLightFunction();
    void runHeavyFunction();
    void returnValue();
    void functionObject();
    void memberFunctions();
    void implicitConvertibleTypes();
    void runWaitLoop();
    void pollForIsFinished();
    void recursive();
#ifndef QT_NO_EXCEPTIONS
    void exceptions();
#endif
#ifdef Q_COMPILER_DECLTYPE
    void functor();
#endif
#ifdef Q_COMPILER_LAMBDA
    void lambda();
#endif
};

