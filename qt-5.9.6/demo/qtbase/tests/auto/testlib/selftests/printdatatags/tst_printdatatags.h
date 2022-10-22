#pragma once


#include <QtTest/QtTest>

class tst_PrintDataTags: public QObject
{
    Q_OBJECT
private slots:
    void a_data() const;
    void a() const;

    void b() const;

    void c_data() const;
    void c() const;
};

