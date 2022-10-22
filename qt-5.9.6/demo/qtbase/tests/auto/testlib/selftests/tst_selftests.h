#pragma once

#include <QtCore/QCoreApplication>
#include <QtCore/QXmlStreamReader>
#include <QtCore/QFileInfo>
#include <QtCore/QDir>
#include <QtCore/QTemporaryDir>
#include <QtTest/QtTest>

#include <private/cycle_p.h>

#include "emulationdetector.h"

struct LoggerSet;

class tst_Selftests: public QObject
{
    Q_OBJECT
public:
    tst_Selftests();

private slots:
    void initTestCase();
    void runSubTest_data();
    void runSubTest();
    void cleanup();

private:
    void doRunSubTest(QString const& subdir, QStringList const& loggers, QStringList const& arguments, bool crashes);
    QString logName(const QString &logger) const;
    QList<LoggerSet> allLoggerSets() const;

    QTemporaryDir tempDir;
    QRegularExpression durationRegExp;
};

