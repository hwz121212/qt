#include "tst_qsqlthread.h"








tst_QSqlThread::tst_QSqlThread()
    : threadFinishedCount(0)
{
}

tst_QSqlThread::~tst_QSqlThread()
{
}

void tst_QSqlThread::generic_data(const QString& engine)
{
    if ( dbs.fillTestTable(engine) == 0 ) {
        if(engine.isEmpty())
           QSKIP( "No database drivers are available in this Qt configuration");
        else
           QSKIP( (QString("No database drivers of type %1 are available in this Qt configuration").arg(engine)).toLocal8Bit());
    }
}

void tst_QSqlThread::dropTestTables()
{
    for (int i = 0; i < dbs.dbNames.count(); ++i) {
        QSqlDatabase db = QSqlDatabase::database(dbs.dbNames.at(i));
        QSqlQuery q(db);

        tst_Databases::safeDropTables(db, QStringList() << qtest << qTableName("qtest2", __FILE__, db) << qTableName("emptytable", __FILE__, db));
    }
}

void tst_QSqlThread::createTestTables()
{
    for (int i = 0; i < dbs.dbNames.count(); ++i) {
        QSqlDatabase db = QSqlDatabase::database(dbs.dbNames.at(i));
        QSqlQuery q(db);

        QVERIFY_SQL(q, exec("create table " + qtest
                       + "(id int NOT NULL primary key, name varchar(20), title int)"));

        QVERIFY_SQL(q, exec("create table " + qTableName("qtest2", __FILE__, db)
                       + "(id int NOT NULL primary key, title varchar(20))"));

        QVERIFY_SQL(q, exec("create table " + qTableName("emptytable", __FILE__, db)
                       + "(id int NOT NULL primary key)"));
    }
}

void tst_QSqlThread::repopulateTestTables()
{
    for (int i = 0; i < dbs.dbNames.count(); ++i) {
        QSqlDatabase db = QSqlDatabase::database(dbs.dbNames.at(i));
        QSqlQuery q(db);

        QVERIFY_SQL(q, exec("delete from " + qtest));
        QVERIFY_SQL(q, exec("insert into " + qtest + " values(1, 'harry', 1)"));
        QVERIFY_SQL(q, exec("insert into " + qtest + " values(2, 'trond', 2)"));
        QVERIFY_SQL(q, exec("insert into " + qtest + " values(3, 'vohi', 3)"));

        QVERIFY_SQL(q, exec("delete from " + qTableName("qtest2", __FILE__, db)));
        QVERIFY_SQL(q, exec("insert into " + qTableName("qtest2", __FILE__, db) + " values(1, 'herr')"));
        QVERIFY_SQL(q, exec("insert into " + qTableName("qtest2", __FILE__, db) + " values(2, 'mister')"));
    }
}

void tst_QSqlThread::recreateTestTables()
{
    dropTestTables();
    createTestTables();
    repopulateTestTables();
}

void tst_QSqlThread::initTestCase()
{
    QVERIFY(dbs.open());
    recreateTestTables();
}

void tst_QSqlThread::cleanupTestCase()
{
    dropTestTables();
    dbs.close();
}

void tst_QSqlThread::init()
{
    threadFinishedCount = 0;
    counter.store(4);
}

void tst_QSqlThread::cleanup()
{
//     repopulateTestTables();
}

// This test creates two threads that clone their db connection and read
// from it
void tst_QSqlThread::simpleThreading()
{
    QFETCH(QString, dbName);
    QSqlDatabase db = QSqlDatabase::database(dbName);
    CHECK_DATABASE(db);

    if (db.databaseName() == ":memory:")
        QSKIP("does not work with in-memory databases");

    QtTestSqlThread t1(db);
    QtTestSqlThread t2(db);

    connect(&t1, SIGNAL(finished()), this, SLOT(threadFinished()), Qt::QueuedConnection);
    connect(&t2, SIGNAL(finished()), this, SLOT(threadFinished()), Qt::QueuedConnection);

    t1.start();
    t2.start();

    QTRY_VERIFY(threadFinishedCount >= 2);
}

// This test creates two threads that clone their db connection and read
// or write
void tst_QSqlThread::readWriteThreading()
{
    QFETCH(QString, dbName);
    QSqlDatabase db = QSqlDatabase::database(dbName);
    CHECK_DATABASE(db);

    if (db.databaseName() == ":memory:")
        QSKIP("does not work with in-memory databases");
    else if (tst_Databases::isMSAccess(db))
        QSKIP("does not work with MS Access databases");

    SqlProducer producer(db);
    SqlConsumer consumer(db);

    connect(&producer, SIGNAL(finished()), this, SLOT(threadFinished()), Qt::QueuedConnection);
    connect(&consumer, SIGNAL(finished()), this, SLOT(threadFinished()), Qt::QueuedConnection);

    producer.start();
    consumer.start();

    QTRY_VERIFY_WITH_TIMEOUT(threadFinishedCount >= 2, 10000);
}

// run with n threads in parallel. Change this constant to hammer the poor DB server even more
static const int maxThreadCount = 4;

void tst_QSqlThread::readFromSingleConnection()
{
#ifdef QOCI_THREADED
    QFETCH(QString, dbName);
    QSqlDatabase db = QSqlDatabase::database(dbName);
    CHECK_DATABASE(db);

    if (db.databaseName() == ":memory:")
        QSKIP("does not work with in-memory databases");

    QObject cleanupHelper; // make sure the threads die when we exit the scope
    for (int i = 0; i < maxThreadCount; ++i) {
        SqlThread *reader = new SqlThread(SqlThread::SimpleReading, db, &cleanupHelper);
        connect(reader, SIGNAL(finished()), this, SLOT(threadFinished()), Qt::QueuedConnection);
        reader->start();
    }

    QTRY_VERIFY(threadFinishedCount >= maxThreadCount);
#endif
}

void tst_QSqlThread::readWriteFromSingleConnection()
{
#ifdef QOCI_THREADED
    QFETCH(QString, dbName);
    QSqlDatabase db = QSqlDatabase::database(dbName);
    CHECK_DATABASE(db);

    if (db.databaseName() == ":memory:")
        QSKIP("does not work with in-memory databases");

    QObject cleanupHelper;
    for (int i = 0; i < maxThreadCount; ++i) {
        SqlThread *reader = new SqlThread(SqlThread::SimpleReading, db, &cleanupHelper);
        connect(reader, SIGNAL(finished()), this, SLOT(threadFinished()), Qt::QueuedConnection);
        reader->start();

        SqlThread *writer = new SqlThread(SqlThread::SimpleWriting, db, &cleanupHelper);
        connect(writer, SIGNAL(finished()), this, SLOT(threadFinished()), Qt::QueuedConnection);
        writer->start();
    }

    QTRY_VERIFY(threadFinishedCount >= maxThreadCount * 2);
#endif
}

void tst_QSqlThread::preparedReadWriteFromSingleConnection()
{
#ifdef QOCI_THREADED
    QFETCH(QString, dbName);
    QSqlDatabase db = QSqlDatabase::database(dbName);
    CHECK_DATABASE(db);

    if (db.databaseName() == ":memory:")
        QSKIP("does not work with in-memory databases");

    QObject cleanupHelper;
    for (int i = 0; i < maxThreadCount; ++i) {
        SqlThread *reader = new SqlThread(SqlThread::PreparedReading, db, &cleanupHelper);
        connect(reader, SIGNAL(finished()), this, SLOT(threadFinished()), Qt::QueuedConnection);
        reader->start();

        SqlThread *writer = new SqlThread(SqlThread::PreparedWriting, db, &cleanupHelper);
        connect(writer, SIGNAL(finished()), this, SLOT(threadFinished()), Qt::QueuedConnection);
        writer->start();
    }

    QTRY_VERIFY(threadFinishedCount >= maxThreadCount * 2);
#endif
}

void tst_QSqlThread::transactionsFromSingleConnection()
{
#ifdef QOCI_THREADED
    QFETCH(QString, dbName);
    QSqlDatabase db = QSqlDatabase::database(dbName);
    CHECK_DATABASE(db);

    if (db.databaseName() == ":memory:")
        QSKIP("does not work with in-memory databases");

    // start and commit a transaction
    QVERIFY_SQL(db, db.transaction());
    preparedReadWriteFromSingleConnection(); // read and write from multiple threads
    if (QTest::currentTestFailed())
        return;
    QVERIFY_SQL(db, db.commit());

    // reset test environment
    threadFinishedCount = 0;

    // start and roll back a transaction
    QVERIFY_SQL(db, db.transaction());
    preparedReadWriteFromSingleConnection(); // read and write from multiple threads
    if (QTest::currentTestFailed())
        return;
    QVERIFY_SQL(db, db.rollback());
#endif
}

QTEST_MAIN(tst_QSqlThread)
