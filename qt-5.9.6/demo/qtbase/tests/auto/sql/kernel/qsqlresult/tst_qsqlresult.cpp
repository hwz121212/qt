#include "tst_qsqlresult.h"



tst_QSqlResult::tst_QSqlResult()
{
}

void tst_QSqlResult::positionalToNamedBinding()
{
    TestSqlDriver testDriver;
    TestSqlDriverResult result(&testDriver);
    QString query("INSERT INTO MYTABLE (ID, NAME, BIRTH) VALUES(?, ?, ?)");
    QVERIFY(result.savePrepare(query));
    QCOMPARE(result.boundValues().count(), 3);
}

void tst_QSqlResult::parseOfBoundValues()
{
    TestSqlDriver testDriver;
    TestSqlDriverResult result(&testDriver);
    QVERIFY(result.savePrepare("SELECT :1 AS \":2\""));
    QCOMPARE(result.boundValues().count(), 1);
    QVERIFY(result.savePrepare("SELECT :1 AS ':2'"));
    QCOMPARE(result.boundValues().count(), 1);
    QVERIFY(result.savePrepare("SELECT :1 AS [:2]"));
    if (testDriver.dbmsType() == QSqlDriver::PostgreSQL)
        QCOMPARE(result.boundValues().count(), 2);
    else
        QCOMPARE(result.boundValues().count(), 1);
    QVERIFY(result.savePrepare("SELECT :1 AS [:2]]]"));
    if (testDriver.dbmsType() == QSqlDriver::PostgreSQL)
        QCOMPARE(result.boundValues().count(), 2);
    else
        QCOMPARE(result.boundValues().count(), 1);
    QVERIFY(result.savePrepare("SELECT :1 AS [:2]]]]]"));
    if (testDriver.dbmsType() == QSqlDriver::PostgreSQL)
        QCOMPARE(result.boundValues().count(), 2);
    else
        QCOMPARE(result.boundValues().count(), 1);

    QVERIFY(result.savePrepare("SELECT ? AS \"?\""));
    QCOMPARE(result.boundValues().count(), 1);
    QVERIFY(result.savePrepare("SELECT ? AS '?'"));
    QCOMPARE(result.boundValues().count(), 1);
    QVERIFY(result.savePrepare("SELECT ? AS [?]"));
    if (testDriver.dbmsType() == QSqlDriver::PostgreSQL)
        QCOMPARE(result.boundValues().count(), 2);
    else
        QCOMPARE(result.boundValues().count(), 1);

    QVERIFY(result.savePrepare("SELECT ? AS \"'?\""));
    QCOMPARE(result.boundValues().count(), 1);
    QVERIFY(result.savePrepare("SELECT ? AS '?\"'"));
    QCOMPARE(result.boundValues().count(), 1);
    QVERIFY(result.savePrepare("SELECT ? AS '?''?'"));
    QCOMPARE(result.boundValues().count(), 1);
    QVERIFY(result.savePrepare("SELECT ? AS [\"?']"));
    QCOMPARE(result.boundValues().count(), 1);
}

QTEST_MAIN( tst_QSqlResult )
