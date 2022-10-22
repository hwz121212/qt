#include "tst_warnings.h"



void tst_Warnings::testWarnings()
{
    qWarning("Warning");

    QTest::ignoreMessage(QtWarningMsg, "Warning");
    qWarning("Warning");

    qWarning("Warning");

    qDebug("Debug");

    QTest::ignoreMessage(QtDebugMsg, "Debug");
    qDebug("Debug");

    qDebug("Debug");

    qInfo("Info");

    QTest::ignoreMessage(QtInfoMsg, "Info");
    qInfo("Info");

    qInfo("Info");

    QTest::ignoreMessage(QtDebugMsg, "Bubu");
    qDebug("Baba");
    qDebug("Bubu");
    qDebug("Baba");

    QTest::ignoreMessage(QtDebugMsg, QRegularExpression("^Bubu.*"));
    QTest::ignoreMessage(QtWarningMsg, QRegularExpression("^Baba.*"));
    qDebug("Bubublabla");
    qWarning("Babablabla");
    qDebug("Bubublabla");
    qWarning("Babablabla");

    // accept redundant space at end to keep compatibility with Qt < 5.2
    QTest::ignoreMessage(QtDebugMsg, "Bubu ");
    qDebug() << "Bubu";
}

void tst_Warnings::testMissingWarnings()
{
    QTest::ignoreMessage(QtWarningMsg, "Warning0");
    QTest::ignoreMessage(QtWarningMsg, "Warning1");
    QTest::ignoreMessage(QtWarningMsg, "Warning2");

    qWarning("Warning2");
}

void tst_Warnings::testMissingWarningsRegularExpression()
{
    QTest::ignoreMessage(QtWarningMsg, QRegularExpression("Warning\\d\\d"));
    QTest::ignoreMessage(QtWarningMsg, QRegularExpression("Warning\\s\\d"));

    qWarning("Warning11");
}

void tst_Warnings::testMissingWarningsWithData_data()
{
    QTest::addColumn<int>("dummy");

    QTest::newRow("first row") << 0;
    QTest::newRow("second row") << 1;
}

void tst_Warnings::testMissingWarningsWithData()
{
    QTest::ignoreMessage(QtWarningMsg, "Warning0");
    QTest::ignoreMessage(QtWarningMsg, "Warning1");
    QTest::ignoreMessage(QtWarningMsg, "Warning2");

    qWarning("Warning2");
}

QTEST_MAIN(tst_Warnings)
