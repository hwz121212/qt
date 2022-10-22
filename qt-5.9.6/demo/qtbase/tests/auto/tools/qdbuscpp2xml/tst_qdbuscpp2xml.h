#pragma once

#include <QtTest/QtTest>

#include "test1.h"

#include <QtDBus/QDBusConnection>



class tst_qdbuscpp2xml : public QObject
{
    Q_OBJECT

private slots:
    void qdbuscpp2xml_data();
    void qdbuscpp2xml();

    void initTestCase();
    void cleanupTestCase();

private:
    QHash<QString, QObject*> m_tests;
};

