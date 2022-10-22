#pragma once


#include <QtCore/QDir>
#include <QtCore/QString>
#include <QtTest/QtTest>
#include <QtCore/QProcess>
#include <QtCore/QByteArray>
#include <QtCore/QLibraryInfo>
#include <QtCore/QTemporaryDir>
#include <QtCore/QStandardPaths>

class tst_uic : public QObject
{
    Q_OBJECT

public:
    tst_uic();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();

    void stdOut();

    void run();
    void run_data() const;

    void runTranslation();

    void compare();
    void compare_data() const;

    void runCompare();

private:
    const QString m_command;
    QString m_baseline;
    QTemporaryDir m_generated;
    QRegExp m_versionRegexp;
};

