#pragma once


#include <qtconcurrentmap.h>
#include <qexception.h>

#include <qdebug.h>
#include <QThread>
#include <QMutex>

#include <QtTest/QtTest>



class tst_QtConcurrentMap: public QObject
{
    Q_OBJECT
private slots:
    void map();
    void blocking_map();
    void mapped();
    void blocking_mapped();
    void mappedReduced();
    void blocking_mappedReduced();
    void assignResult();
    void functionOverloads();
    void noExceptFunctionOverloads();
#ifndef QT_NO_EXCEPTIONS
    void exceptions();
#endif
    void incrementalResults();
    void noDetach();
    void stlContainers();
    void qFutureAssignmentLeak();
    void stressTest();
    void persistentResultTest();
public slots:
    void throttling();
};
