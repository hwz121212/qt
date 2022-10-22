#pragma once


#include <QtTest/QtTest>
#include <QtGui>
#include <QtWidgets>

#include <qsqldriver.h>
#include <qsqldatabase.h>
#include <qsqlerror.h>
#include <qsqlfield.h>
#include <qsqlquery.h>
#include <qsqlrecord.h>

#include <qsqlquerymodel.h>
#include <qsortfilterproxymodel.h>

#include "../../kernel/qsqldatabase/tst_databases.h"

Q_DECLARE_METATYPE(Qt::Orientation)

class tst_QSqlQueryModel : public QObject
{
    Q_OBJECT

public:
    tst_QSqlQueryModel();
    virtual ~tst_QSqlQueryModel();

public slots:
    void initTestCase();
    void cleanupTestCase();
    void init();
    void cleanup();

private slots:
    void insertColumn_data() { generic_data(); }
    void insertColumn();
    void removeColumn_data() { generic_data(); }
    void removeColumn();
    void record_data() { generic_data(); }
    void record();
    void setHeaderData_data() { generic_data(); }
    void setHeaderData();
    void fetchMore_data() { generic_data(); }
    void fetchMore();

    //problem specific tests
    void withSortFilterProxyModel_data() { generic_data(); }
    void withSortFilterProxyModel();
    void setQuerySignalEmission_data() { generic_data(); }
    void setQuerySignalEmission();
    void setQueryWithNoRowsInResultSet_data() { generic_data(); }
    void setQueryWithNoRowsInResultSet();
    void nestedResets_data() { generic_data(); }
    void nestedResets();

    void task_180617();
    void task_180617_data() { generic_data(); }
    void task_QTBUG_4963_setHeaderDataWithProxyModel();

private:
    void generic_data(const QString &engine=QString());
    void dropTestTables(QSqlDatabase db);
    void createTestTables(QSqlDatabase db);
    void populateTestTables(QSqlDatabase db);
    tst_Databases dbs;
};



class NestedResetsTest : public QSqlQueryModel
{
	Q_OBJECT

public:
	NestedResetsTest(QObject* parent = 0) : QSqlQueryModel(parent), gotAboutToBeReset(false), gotReset(false)
	{
		connect(this, SIGNAL(modelAboutToBeReset()), this, SLOT(modelAboutToBeResetSlot()));
		connect(this, SIGNAL(modelReset()), this, SLOT(modelResetSlot()));
	}

	void testNested()
	{
		// Only the outermost beginResetModel/endResetModel should
		// emit signals.
		gotAboutToBeReset = gotReset = false;
		beginResetModel();
		QCOMPARE(gotAboutToBeReset, true);
		QCOMPARE(gotReset, false);

		gotAboutToBeReset = gotReset = false;
		beginResetModel();
		QCOMPARE(gotAboutToBeReset, false);
		QCOMPARE(gotReset, false);

		gotAboutToBeReset = gotReset = false;
		endResetModel();
		QCOMPARE(gotAboutToBeReset, false);
		QCOMPARE(gotReset, false);

		gotAboutToBeReset = gotReset = false;
		endResetModel();
		QCOMPARE(gotAboutToBeReset, false);
		QCOMPARE(gotReset, true);
	}

	void testClear() // QTBUG-49404: Basic test whether clear() emits signals.
	{
		gotAboutToBeReset = gotReset = false;
		clear();
		QVERIFY(gotAboutToBeReset);
		QVERIFY(gotReset);
	}

private slots:
	void modelAboutToBeResetSlot() { gotAboutToBeReset = true; }
	void modelResetSlot() { gotReset = true; }

private:
	bool gotAboutToBeReset;
	bool gotReset;
};
