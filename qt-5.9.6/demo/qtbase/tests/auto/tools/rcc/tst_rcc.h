#pragma once

#include <QtTest/QtTest>
#include <QtCore/QString>
#include <QtCore/QCoreApplication>
#include <QtCore/QByteArray>
#include <QtCore/QDir>
#include <QtCore/QFile>
#include <QtCore/QProcess>
#include <QtCore/QDirIterator>
#include <QtCore/QMap>
#include <QtCore/QList>
#include <QtCore/QResource>
#include <QtCore/QLocale>
#include <QtCore/QtGlobal>

#include <algorithm>

typedef QMap<QString, QString> QStringMap;
Q_DECLARE_METATYPE(QStringMap)

class tst_rcc : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();

    void rcc_data();
    void rcc();
    void binary_data();
    void binary();

    void cleanupTestCase();

private:
    QString m_rcc;
};

