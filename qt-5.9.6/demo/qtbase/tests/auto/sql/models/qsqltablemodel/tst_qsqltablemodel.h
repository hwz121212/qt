#pragma once


#include <QtTest/QtTest>
#include "../../kernel/qsqldatabase/tst_databases.h"
#include <QtSql>
#include <QtSql/private/qsqltablemodel_p.h>


class tst_QSqlTableModel : public QObject
{
    Q_OBJECT

public:
    tst_QSqlTableModel();
    virtual ~tst_QSqlTableModel();


    void dropTestTables();
    void createTestTables();
    void recreateTestTables();
    void repopulateTestTables();

    tst_Databases dbs;

public slots:
    void initTestCase();
    void cleanupTestCase();
    void init();
    void cleanup();
private slots:

    void select_data() { generic_data(); }
    void select();
    void selectRow_data() { generic_data(); }
    void selectRow();
    void selectRowOverride_data() { generic_data(); }
    void selectRowOverride();
    void insertColumns_data() { generic_data_with_strategies(); }
    void insertColumns();
    void submitAll_data() { generic_data(); }
    void submitAll();
    void setData_data()  { generic_data(); }
    void setData();
    void setRecord_data()  { generic_data(); }
    void setRecord();
    void setRecordReimpl_data()  { generic_data(); }
    void setRecordReimpl();
    void recordReimpl_data()  { generic_data(); }
    void recordReimpl();
    void insertRow_data() { generic_data_with_strategies(); }
    void insertRow();
    void insertRowFailure_data() { generic_data_with_strategies(); }
    void insertRowFailure();
    void insertRecord_data() { generic_data(); }
    void insertRecord();
    void insertMultiRecords_data() { generic_data(); }
    void insertMultiRecords();
    void insertWithAutoColumn_data() { generic_data_with_strategies("QSQLITE"); }
    void insertWithAutoColumn();
    void removeRow_data() { generic_data(); }
    void removeRow();
    void removeRows_data() { generic_data(); }
    void removeRows();
    void removeInsertedRow_data() { generic_data_with_strategies(); }
    void removeInsertedRow();
    void removeInsertedRows_data() { generic_data(); }
    void removeInsertedRows();
    void revert_data() { generic_data_with_strategies("QSQLITE"); }
    void revert();
    void isDirty_data() { generic_data_with_strategies(); }
    void isDirty();
    void setFilter_data() { generic_data(); }
    void setFilter();
    void setInvalidFilter_data() { generic_data(); }
    void setInvalidFilter();

    void emptyTable_data() { generic_data(); }
    void emptyTable();
    void tablesAndSchemas_data() { generic_data("QPSQL"); }
    void tablesAndSchemas();
    void whitespaceInIdentifiers_data() { generic_data(); }
    void whitespaceInIdentifiers();
    void primaryKeyOrder_data() { generic_data("QSQLITE"); }
    void primaryKeyOrder();

    void sqlite_bigTable_data() { generic_data("QSQLITE"); }
    void sqlite_bigTable();

    // bug specific tests
    void insertRecordBeforeSelect_data() { generic_data(); }
    void insertRecordBeforeSelect();
    void submitAllOnInvalidTable_data() { generic_data(); }
    void submitAllOnInvalidTable();
    void insertRecordsInLoop_data() { generic_data(); }
    void insertRecordsInLoop();
    void sqlite_attachedDatabase_data() { generic_data("QSQLITE"); }
    void sqlite_attachedDatabase(); // For task 130799
    void tableModifyWithBlank_data() { generic_data(); }
    void tableModifyWithBlank(); // For mail task

    void removeColumnAndRow_data() { generic_data(); }
    void removeColumnAndRow(); // task 256032

    void insertBeforeDelete_data() { generic_data(); }
    void insertBeforeDelete();

    void invalidFilterAndHeaderData_data() { generic_data(); }
    void invalidFilterAndHeaderData(); //QTBUG-23879
private:
    void generic_data(const QString& engine=QString());
    void generic_data_with_strategies(const QString& engine=QString());
};



class SelectRowModel : public QSqlTableModel
{
	Q_OBJECT
		Q_DECLARE_PRIVATE(QSqlTableModel)
public:
	SelectRowModel(QObject *parent, QSqlDatabase db) : QSqlTableModel(parent, db) {}
	bool cacheEmpty() const
	{
		Q_D(const QSqlTableModel);
		return d->cache.isEmpty();
	}
};


class SelectRowOverrideTestModel : public QSqlTableModel
{
	Q_OBJECT
public:
	SelectRowOverrideTestModel(QObject *parent, QSqlDatabase db) :QSqlTableModel(parent, db) { }
	bool selectRow(int row)
	{
		Q_UNUSED(row)
			return select();
	}
};


class SetRecordReimplModel : public QSqlTableModel
{
	Q_OBJECT
public:
	SetRecordReimplModel(QObject *parent, QSqlDatabase db) :QSqlTableModel(parent, db) {}
	bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole)
	{
		Q_UNUSED(value);
		return QSqlTableModel::setData(index, QString("Qt"), role);
	}
};


class RecordReimplModel : public QSqlTableModel
{
	Q_OBJECT
public:
	RecordReimplModel(QObject *parent, QSqlDatabase db) :QSqlTableModel(parent, db) {}
	QVariant data(const QModelIndex &index, int role = Qt::EditRole) const
	{
		if (role == Qt::EditRole)
			return QString("Qt");
		else
			return QSqlTableModel::data(index, role);
	}
};
