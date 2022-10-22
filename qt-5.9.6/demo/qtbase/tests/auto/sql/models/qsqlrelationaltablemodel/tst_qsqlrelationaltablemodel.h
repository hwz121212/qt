#pragma once


#include <QtTest/QtTest>
#include <QtSql/QtSql>

#include "../../kernel/qsqldatabase/tst_databases.h"



class tst_QSqlRelationalTableModel : public QObject
{
    Q_OBJECT

public:
    void recreateTestTables(QSqlDatabase);

    tst_Databases dbs;

public slots:
    void initTestCase_data();
    void initTestCase();
    void cleanupTestCase();
    void init();
    void cleanup();

private slots:
    void data();
    void setData();
    void multipleRelation();
    void insertRecord();
    void setRecord();
    void insertWithStrategies();
    void removeColumn();
    void filter();
    void sort();
    void revert();

    void clearDisplayValuesCache();
    void insertRecordDuplicateFieldNames();
    void invalidData();
    void relationModel();
    void casing();
    void escapedRelations();
    void escapedTableName();
    void whiteSpaceInIdentifiers();
    void psqlSchemaTest();
    void selectAfterUpdate();
    void relationOnFirstColumn();

private:
    void dropTestTables( QSqlDatabase db );
};


