#pragma once


#include <QtTest/QtTest>

#include "qsqlrecord.h"
#include "qsqlfield.h"
#include "qstringlist.h"

#include <qsqlrecord.h>

#define NUM_FIELDS 4

class tst_QSqlRecord : public QObject
{
Q_OBJECT

public:
    tst_QSqlRecord();
    virtual ~tst_QSqlRecord();


public slots:
    void init();
    void cleanup();
private slots:
    void value();
    void setValue_data();
    void setValue();
    void setNull();
    void setGenerated();
    void remove();
    void position();
    void operator_Assign();
    void isNull();
    void isGenerated();
    void isEmpty();
    void insert();
    void fieldName();
    void field();
    void count();
    void contains();
    void clearValues_data();
    void clearValues();
    void clear();
    void append();

private:
    QSqlRecord* rec;
    QSqlField* fields[ NUM_FIELDS ];
    void createTestRecord();
};


