#pragma once


#include <QtTest/QtTest>


#include "../qsqldatabase/tst_databases.h"

#include <QtCore>
#include <QtSql>
#include "qdebug.h"


static QAtomicInt counter;
enum { ProdConIterations = 10 };


const QString qtest(qTableName("qtest", __FILE__, QSqlDatabase()));
// set this define if Oracle is built with threading support
//#define QOCI_THREADED

class tst_QSqlThread : public QObject
{
    Q_OBJECT

public:
    tst_QSqlThread();
    virtual ~tst_QSqlThread();


    void dropTestTables();
    void createTestTables();
    void recreateTestTables();
    void repopulateTestTables();

    void generic_data(const QString &engine=QString());
    tst_Databases dbs;

public slots:
    void initTestCase();
    void cleanupTestCase();
    void init();
    void cleanup();

protected slots:
    void threadFinished() {
        ++threadFinishedCount;
        qDebug("Thread finished, total finished: %d", threadFinishedCount);
    }

private slots:
    void simpleThreading_data() { generic_data(); }
    void simpleThreading();
    void readWriteThreading_data() { generic_data(); }
    void readWriteThreading();
    void readFromSingleConnection_data() { generic_data(); }
    void readFromSingleConnection();
    void readWriteFromSingleConnection_data() { generic_data(); }
    void readWriteFromSingleConnection();
    void preparedReadWriteFromSingleConnection_data() { generic_data(); }
    void preparedReadWriteFromSingleConnection();
    void transactionsFromSingleConnection_data() { generic_data(); }
    void transactionsFromSingleConnection();

private:
    int threadFinishedCount;
};


class QtTestSqlThread : public QThread
{
	Q_OBJECT
public:
	QtTestSqlThread(const QSqlDatabase &aDb, QObject *parent = 0)
		: QThread(parent), sourceDb(aDb) {}

	void runHelper(const QString &dbName)
	{
		QSqlDatabase db = QSqlDatabase::cloneDatabase(sourceDb, dbName);
		QVERIFY_SQL(db, open());

		int sum = 0;
		QSqlQuery q("select id from " + qtest, db);
		QVERIFY_SQL(q, isActive());
		while (q.next())
			sum += q.value(0).toInt();
		QCOMPARE(sum, 6);
		q.clear();
	}

	void run()
	{
		QString dbName = QString("QThreadDb%1").arg((size_t)currentThreadId());
		runHelper(dbName);

		QSqlDatabase::database(dbName).close();
		QSqlDatabase::removeDatabase(dbName);
	}

private:
	QSqlDatabase sourceDb;
};



class SqlProducer : public QThread
{
	Q_OBJECT
public:
	SqlProducer(const QSqlDatabase &aDb, QObject *parent = 0)
		: QThread(parent), sourceDb(aDb) {}

	void runHelper(const QString &dbName)
	{
		QSqlDatabase db = QSqlDatabase::cloneDatabase(sourceDb, dbName);
		QVERIFY_SQL(db, open());
		QSqlQuery q(db);
		QVERIFY_SQL(q, prepare("insert into " + qtest + " values (?, ?, ?)"));
		int id = 10;
		for (int i = 0; i < ProdConIterations; ++i) {
			q.bindValue(0, ++id);
			q.bindValue(1, "threaddy");
			q.bindValue(2, 10);
			QVERIFY_SQL(q, exec());
			QThread::yieldCurrentThread();
		}
	}

	void run()
	{
		QString dbName = QString("Producer%1").arg((size_t)currentThreadId());
		runHelper(dbName);
		QSqlDatabase::database(dbName).close();
		QSqlDatabase::removeDatabase(dbName);
	}
private:
	QSqlDatabase sourceDb;
};

class SqlConsumer : public QThread
{
	Q_OBJECT

public:
	SqlConsumer(const QSqlDatabase &aDb, QObject *parent = 0)
		: QThread(parent), sourceDb(aDb) {}

	void runHelper(const QString &dbName)
	{
		QSqlDatabase db = QSqlDatabase::cloneDatabase(sourceDb, dbName);
		QVERIFY_SQL(db, open());
		QSqlQuery q1(db), q2(db);
		QVERIFY_SQL(q2, prepare("delete from " + qtest + " where id = :id"));

		for (int i = 0; i < ProdConIterations; ++i) {
			QVERIFY_SQL(q1, exec("select max(id) from " + qtest));
			q1.first();
			q2.bindValue(":id", q1.value(0));
			q1.clear();
			QVERIFY_SQL(q2, exec());
			QThread::yieldCurrentThread();
		}
	}

	void run()
	{
		QString dbName = QString("Consumer%1").arg((size_t)currentThreadId());
		runHelper(dbName);
		QSqlDatabase::database(dbName).close();
		QSqlDatabase::removeDatabase(dbName);
	}

private:
	QSqlDatabase sourceDb;
};

class SqlThread : public QThread
{
	Q_OBJECT

public:
	enum Mode { SimpleReading, PreparedReading, SimpleWriting, PreparedWriting };

	SqlThread(Mode m, const QSqlDatabase &db, QObject *parent = 0)
		: QThread(parent), sourceDb(db), mode(m) {}

	void run()
	{
		QSqlDatabase &db = sourceDb;
		switch (mode) {
		case SimpleReading: {
			// Executes a Query for reading, iterates over the first 4 results
			QSqlQuery q(sourceDb);
			for (int j = 0; j < ProdConIterations; ++j) {
				QVERIFY_SQL(q, exec("select id,name from " + qtest + " order by id"));
				for (int i = 1; i < 4; ++i) {
					QVERIFY_SQL(q, next());
					QCOMPARE(q.value(0).toInt(), i);
				}
			}
			break; }
		case SimpleWriting: {
			// Executes a query for writing (appends a new row)
			QSqlQuery q(sourceDb);
			for (int j = 0; j < ProdConIterations; ++j) {
				QVERIFY_SQL(q, exec(QString("insert into " + qtest
					+ " (id, name) values(%1, '%2')")
					.arg(counter.fetchAndAddRelaxed(1)).arg("Robert")));
			}
			break; }
		case PreparedReading: {
			// Prepares a query for reading and iterates over the results
			QSqlQuery q(sourceDb);
			QVERIFY_SQL(q, prepare("select id, name from " + qtest + " where id = ?"));
			for (int j = 0; j < ProdConIterations; ++j) {
				q.addBindValue(j % 3 + 1);
				QVERIFY_SQL(q, exec());
				QVERIFY_SQL(q, next());
				QCOMPARE(q.value(0).toInt(), j % 3 + 1);
			}
			break; }
		case PreparedWriting: {
			QSqlQuery q(sourceDb);
			QVERIFY_SQL(q, prepare("insert into " + qtest + " (id, name) "
				"values(?, ?)"));
			for (int i = 0; i < ProdConIterations; ++i) {
				q.addBindValue(counter.fetchAndAddRelaxed(1));
				q.addBindValue("Robert");
				QVERIFY_SQL(q, exec());
			}
			break; }
		}
	}

private:
	QSqlDatabase sourceDb;
	Mode mode;
};
