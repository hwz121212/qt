#pragma once


#include <QtTest/QtTest>
#include <qcoreapplication.h>
#include <qsqldatabase.h>
#include <qsqlerror.h>
#include <qsqlquery.h>
#include <qsqlrecord.h>
#include <qsqlresult.h>
#include <qsqldriver.h>
#include <qdebug.h>
#include <private/qsqlnulldriver_p.h>

#include "../qsqldatabase/tst_databases.h"

class tst_QSql : public QObject
{
    Q_OBJECT

public:
    tst_QSql();
    virtual ~tst_QSql();


public slots:
    void initTestCase();
    void cleanupTestCase();
    void init();
    void cleanup();
private slots:
    void open();
    void openInvalid();
    void registerSqlDriver();

    // problem specific tests
    void openErrorRecovery();
    void concurrentAccess();
    void basicDriverTest();
};

