#pragma once


#include <QtTest/QtTest>

#include <qsqlfield.h>
#include <qvariant.h>
#include <qsqlfield.h>

class tst_QSqlField : public QObject
{
Q_OBJECT

public:
    tst_QSqlField();
    virtual ~tst_QSqlField();


public slots:
    void init();
    void cleanup();
private slots:
    void getSetCheck();
    void type();
    void setValue_data();
    void setValue();
    void setReadOnly();
    void setNull();
    void setName_data();
    void setName();
    void operator_Equal();
    void operator_Assign();
    void name_data();
    void name();
    void isReadOnly();
    void isNull();
    void clear_data();
    void clear();
};

