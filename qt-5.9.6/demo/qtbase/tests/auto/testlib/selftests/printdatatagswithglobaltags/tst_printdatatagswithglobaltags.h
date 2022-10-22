#pragma once


#include <QtTest/QtTest>

class tst_PrintDataTagsWithGlobalTags: public QObject
{
    Q_OBJECT
private slots:
    void initTestCase_data() const;
    void initTestCase() const;

    void a_data() const;
    void a() const;

    void b() const;

    void c_data() const;
    void c() const;
};

