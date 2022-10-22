#pragma once


#include <QtTest/QtTest>
#include <qsqldatabase.h>
#include <qsqlquery.h>
#include <qsqldriver.h>
#include <qsqlrecord.h>
#include <qsqlfield.h>
#include <qsqlindex.h>
#include <qregexp.h>
#include <qvariant.h>
#include <qdatetime.h>
#include <qdebug.h>

#include "tst_databases.h"

Q_DECLARE_METATYPE(QSqlDriver::NotificationSource)

QT_FORWARD_DECLARE_CLASS(QSqlDatabase)
struct FieldDef;

class tst_QSqlDatabase : public QObject
{
    Q_OBJECT

public:
    tst_QSqlDatabase();
    virtual ~tst_QSqlDatabase();

public slots:
    void initTestCase();
    void cleanupTestCase();
    void init();
    void cleanup();
private slots:
    void record_data() { generic_data(); }
    //void record();
    void open_data() { generic_data(); }
    void open();
    void tables_data() { generic_data(); }
    void tables();
    void oci_tables_data() { generic_data("QOCI"); }
    void oci_tables();
    void transaction_data() { generic_data(); }
    void transaction();
    void eventNotification_data() { generic_data(); }
    void eventNotification();
    void addDatabase();
    void errorReporting_data();
    void errorReporting();

    //database specific tests
    void recordMySQL_data() { generic_data("QMYSQL"); }
    void recordMySQL();
    void recordPSQL_data() { generic_data("QPSQL"); }
    void recordPSQL();
    void recordOCI_data() { generic_data("QOCI"); }
    void recordOCI();
    void recordTDS_data() { generic_data("QTDS"); }
    void recordTDS();
    void recordDB2_data() { generic_data("QDB2"); }
    void recordDB2();
    void recordSQLite_data() { generic_data("QSQLITE"); }
    void recordSQLite();
    void recordAccess_data() { generic_data("QODBC"); }
    void recordAccess();
    void recordSQLServer_data() { generic_data("QODBC"); }
    void recordSQLServer();
    void recordIBase_data() {generic_data("QIBASE"); }
    void recordIBase();

    void eventNotificationIBase_data() { generic_data("QIBASE"); }
    void eventNotificationIBase();
    void eventNotificationPSQL_data() { generic_data("QPSQL"); }
    void eventNotificationPSQL();
    void eventNotificationSQLite_data() { generic_data("QSQLITE"); }
    void eventNotificationSQLite();

    //database specific 64 bit integer test
    void bigIntField_data() { generic_data(); }
    void bigIntField();

    // general tests
    void getConnectionName_data() { generic_data(); }
    void getConnectionName(); // For task 129992

    //problem specific tests
    void alterTable_data() { generic_data(); }
    void alterTable();
    void caseSensivity_data() { generic_data(); }
    void caseSensivity();
    void noEscapedFieldNamesInRecord_data() { generic_data(); }
    void noEscapedFieldNamesInRecord();
    void whitespaceInIdentifiers_data() { generic_data(); }
    void whitespaceInIdentifiers();
    void formatValueTrimStrings_data() { generic_data(); }
    void formatValueTrimStrings();
    void precisionPolicy_data() { generic_data(); }
    void precisionPolicy();

    void db2_valueCacheUpdate_data() { generic_data("QDB2"); }
    void db2_valueCacheUpdate();

    void psql_schemas_data() { generic_data("QPSQL"); }
    void psql_schemas();
    void psql_escapedIdentifiers_data() { generic_data("QPSQL"); }
    void psql_escapedIdentifiers();
    void psql_escapeBytea_data() { generic_data("QPSQL"); }
    void psql_escapeBytea();
    void psql_bug249059_data() { generic_data("QPSQL"); }
    void psql_bug249059();

    void mysqlOdbc_unsignedIntegers_data() { generic_data(); }
    void mysqlOdbc_unsignedIntegers();
    void mysql_multiselect_data() { generic_data("QMYSQL"); }
    void mysql_multiselect();  // For task 144331
    void mysql_savepointtest_data() { generic_data("QMYSQL"); }
    void mysql_savepointtest();
    void mysql_connectWithInvalidAddress();

    void accessOdbc_strings_data() { generic_data(); }
    void accessOdbc_strings();

    void ibase_numericFields_data() { generic_data("QIBASE"); }
    void ibase_numericFields(); // For task 125053
    void ibase_fetchBlobs_data() { generic_data("QIBASE"); }
    void ibase_fetchBlobs(); // For task 143471
    void ibase_useCustomCharset_data() { generic_data("QIBASE"); }
    void ibase_useCustomCharset(); // For task 134608
    void ibase_procWithoutReturnValues_data() { generic_data("QIBASE"); } // For task 165423
    void ibase_procWithoutReturnValues();
    void ibase_procWithReturnValues_data() { generic_data("QIBASE"); } // For task 177530
    void ibase_procWithReturnValues();

    void odbc_reopenDatabase_data() { generic_data("QODBC"); }
    void odbc_reopenDatabase();
    void odbc_uniqueidentifier_data() { generic_data("QODBC"); }
    void odbc_uniqueidentifier(); // For task 141822
    void odbc_uintfield_data() { generic_data("QODBC"); }
    void odbc_uintfield();
    void odbc_bindBoolean_data() { generic_data("QODBC"); }
    void odbc_bindBoolean();
    void odbc_testqGetString_data() { generic_data("QODBC"); }
    void odbc_testqGetString();

    void oci_serverDetach_data() { generic_data("QOCI"); }
    void oci_serverDetach(); // For task 154518
    void oci_xmltypeSupport_data() { generic_data("QOCI"); }
    void oci_xmltypeSupport();
    void oci_fieldLength_data() { generic_data("QOCI"); }
    void oci_fieldLength();
    void oci_synonymstest_data() { generic_data("QOCI"); }
    void oci_synonymstest();

    void sqlite_bindAndFetchUInt_data() { generic_data("QSQLITE"); }
    void sqlite_bindAndFetchUInt();

    void sqlStatementUseIsNull_189093_data() { generic_data(); }
    void sqlStatementUseIsNull_189093();

    void sqlite_enable_cache_mode_data() { generic_data("QSQLITE"); }
    void sqlite_enable_cache_mode();

private:
    void createTestTables(QSqlDatabase db);
    void dropTestTables(QSqlDatabase db);
    void populateTestTables(QSqlDatabase db);
    void generic_data(const QString &engine=QString());

    void testRecord(const FieldDef fieldDefs[], const QSqlRecord& inf, QSqlDatabase db);
    void commonFieldTest(const FieldDef fieldDefs[], QSqlDatabase, const int);

    tst_Databases dbs;
};

