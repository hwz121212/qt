#pragma once


#include <QtTest/QtTest>
#include <QtSql/QtSql>

#include <numeric>

#include "../qsqldatabase/tst_databases.h"

class tst_QSqlQuery : public QObject
{
    Q_OBJECT

public:
    tst_QSqlQuery();
    virtual ~tst_QSqlQuery();

public slots:
    void initTestCase();
    void cleanupTestCase();
    void init();
    void cleanup();

private slots:
    void value_data() { generic_data(); }
    void value();
    void isValid_data() { generic_data(); }
    void isValid();
    void isActive_data() { generic_data(); }
    void isActive();
    void isSelect_data() { generic_data(); }
    void isSelect();
    void numRowsAffected_data() { generic_data(); }
    void numRowsAffected();
    void size_data() { generic_data(); }
    void size();
    void isNull_data() { generic_data(); }
    void isNull();
    void query_exec_data() { generic_data(); }
    void query_exec();
    void execErrorRecovery_data() { generic_data(); }
    void execErrorRecovery();
    void first_data() { generic_data(); }
    void first();
    void next_data() { generic_data(); }
    void next();
    void prev_data() { generic_data(); }
    void prev();
    void last_data() { generic_data(); }
    void last();
    void seek_data() { generic_data(); }
    void seek();
    void transaction_data() { generic_data(); }
    void transaction();
    void record_data() { generic_data(); }
    void record();
    void record_sqlite_data() { generic_data("QSQLITE"); }
    void record_sqlite();
    void finish_data() { generic_data(); }
    void finish();
    void sqlite_finish_data() { generic_data("QSQLITE"); }
    void sqlite_finish();
    void nextResult_data() { generic_data(); }
    void nextResult();

    // forwardOnly mode need special treatment
    void forwardOnly_data() { generic_data(); }
    void forwardOnly();

    // bug specific tests
    void tds_bitField_data() { generic_data("QTDS"); }
    void tds_bitField();
    void oci_nullBlob_data() { generic_data("QOCI"); }
    void oci_nullBlob();
    void blob_data() { generic_data(); }
    void blob();
    void oci_rawField_data() { generic_data("QOCI"); }
    void oci_rawField();
    void precision_data() { generic_data(); }
    void precision();
    void nullResult_data() { generic_data(); }
    void nullResult();
    void joins_data() { generic_data(); }
    void joins();
    void outValues_data() { generic_data(); }
    void outValues();
    void char1Select_data() { generic_data(); }
    void char1Select();
    void char1SelectUnicode_data() { generic_data(); }
    void char1SelectUnicode();
    void synonyms_data() { generic_data(); }
    void synonyms();
    void oraOutValues_data() { generic_data("QOCI"); }
    void oraOutValues();
    void mysql_outValues_data() { generic_data("QMYSQL"); }
    void mysql_outValues();
    void oraClob_data() { generic_data("QOCI"); }
    void oraClob();
    void oraLong_data() { generic_data("QOCI"); }
    void oraLong();
    void oraOCINumber_data() { generic_data("QOCI"); }
    void oraOCINumber();
    void outValuesDB2_data() { generic_data("QDB2"); }
    void outValuesDB2();
    void storedProceduresIBase_data() {generic_data("QIBASE"); }
    void storedProceduresIBase();
    void oraRowId_data() { generic_data("QOCI"); }
    void oraRowId();
    void prepare_bind_exec_data() { generic_data(); }
    void prepare_bind_exec();
    void prepared_select_data() { generic_data(); }
    void prepared_select();
    void sqlServerLongStrings_data() { generic_data(); }
    void sqlServerLongStrings();
    void invalidQuery_data() { generic_data(); }
    void invalidQuery();
    void batchExec_data() { generic_data(); }
    void batchExec();
    void QTBUG_43874_data() { generic_data(); }
    void QTBUG_43874();
    void oraArrayBind_data() { generic_data("QOCI"); }
    void oraArrayBind();
    void lastInsertId_data() { generic_data(); }
    void lastInsertId();
    void lastQuery_data() { generic_data(); }
    void lastQuery();
    void bindBool_data() { generic_data(); }
    void bindBool();
    void psql_bindWithDoubleColonCastOperator_data() { generic_data("QPSQL"); }
    void psql_bindWithDoubleColonCastOperator();
    void psql_specialFloatValues_data() { generic_data("QPSQL"); }
    void psql_specialFloatValues();
    void queryOnInvalidDatabase_data() { generic_data(); }
    void queryOnInvalidDatabase();
    void createQueryOnClosedDatabase_data() { generic_data(); }
    void createQueryOnClosedDatabase();
    void seekForwardOnlyQuery_data() { generic_data(); }
    void seekForwardOnlyQuery();
    void reExecutePreparedForwardOnlyQuery_data() { generic_data(); }
    void reExecutePreparedForwardOnlyQuery();
    void blobsPreparedQuery_data() { generic_data(); }
    void blobsPreparedQuery();
    void emptyTableNavigate_data() { generic_data(); }
    void emptyTableNavigate();

#ifdef NOT_READY_YET
    void task_229811();
    void task_229811_data() { generic_data(); }
    void task_234422_data() {  generic_data(); }
    void task_234422();
#endif
    void task_217003_data() { generic_data(); }
    void task_217003();

    void task_250026_data() { generic_data("QODBC"); }
    void task_250026();
    void task_205701_data() { generic_data("QMYSQL"); }
    void task_205701();

    void task_233829_data() { generic_data("QPSQL"); }
    void task_233829();

    void QTBUG_12477_data() { generic_data("QPSQL"); }
    void QTBUG_12477();

    void sqlServerReturn0_data() { generic_data(); }
    void sqlServerReturn0();

    void QTBUG_551_data() { generic_data("QOCI"); }
    void QTBUG_551();

    void QTBUG_5251_data() { generic_data("QPSQL"); }
    void QTBUG_5251();
    void QTBUG_6421_data() { generic_data("QOCI"); }
    void QTBUG_6421();
    void QTBUG_6618_data() { generic_data("QODBC"); }
    void QTBUG_6618();
    void QTBUG_6852_data() { generic_data("QMYSQL"); }
    void QTBUG_6852();
    void QTBUG_5765_data() { generic_data("QMYSQL"); }
    void QTBUG_5765();
    void QTBUG_12186_data() { generic_data("QSQLITE"); }
    void QTBUG_12186();
    void QTBUG_14132_data() { generic_data("QOCI"); }
    void QTBUG_14132();
    void QTBUG_18435_data() { generic_data("QODBC"); }
    void QTBUG_18435();
    void QTBUG_21884_data() { generic_data("QSQLITE"); }
    void QTBUG_21884();
    void QTBUG_16967_data() { generic_data("QSQLITE"); }
    void QTBUG_16967(); //clean close
    void QTBUG_23895_data() { generic_data("QSQLITE"); }
    void QTBUG_23895(); //sqlite boolean type
    void QTBUG_14904_data() { generic_data("QSQLITE"); }
    void QTBUG_14904();

    void QTBUG_2192_data() { generic_data(); }
    void QTBUG_2192();

    void QTBUG_36211_data() { generic_data("QPSQL"); }
    void QTBUG_36211();

    void QTBUG_53969_data() { generic_data("QMYSQL"); }
    void QTBUG_53969();

    void sqlite_constraint_data() { generic_data("QSQLITE"); }
    void sqlite_constraint();

    void sqlite_real_data() { generic_data("QSQLITE"); }
    void sqlite_real();

    void aggregateFunctionTypes_data() { generic_data(); }
    void aggregateFunctionTypes();

    void integralTypesMysql_data() { generic_data("QMYSQL"); }
    void integralTypesMysql();

    void QTBUG_57138_data() { generic_data("QSQLITE"); }
    void QTBUG_57138();

private:
    // returns all database connections
    void generic_data(const QString &engine=QString());
    void dropTestTables( QSqlDatabase db );
    void createTestTables( QSqlDatabase db );
    void populateTestTables( QSqlDatabase db );

    tst_Databases dbs;
};

