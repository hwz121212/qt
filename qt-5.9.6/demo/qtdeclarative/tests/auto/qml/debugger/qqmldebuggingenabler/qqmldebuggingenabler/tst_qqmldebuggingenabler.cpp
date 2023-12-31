/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the test suite of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL-EXCEPT$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "../../../../shared/debugutil_p.h"
#include "../../../../shared/util.h"

#include <private/qqmldebugclient_p.h>
#include <private/qqmldebugconnection_p.h>

#include <QtTest/qtest.h>
#include <QtCore/qprocess.h>
#include <QtCore/qtimer.h>
#include <QtCore/qfileinfo.h>
#include <QtCore/qdir.h>
#include <QtCore/qmutex.h>
#include <QtCore/qlibraryinfo.h>

class tst_QQmlDebuggingEnabler : public QQmlDataTest
{
    Q_OBJECT

    bool init(bool blockMode, bool qmlscene, int portFrom, int portTo);

private slots:
    void initTestCase();
    void cleanupTestCase();
    void cleanup();

    void qmlscene_data();
    void qmlscene();
    void custom_data();
    void custom();

private:
    void data();
    QQmlDebugProcess *process;
    QQmlDebugConnection *connection;
    QTime t;
};

void tst_QQmlDebuggingEnabler::initTestCase()
{
    QQmlDataTest::initTestCase();
    t.start();
    process = 0;
    connection = 0;
}

void tst_QQmlDebuggingEnabler::cleanupTestCase()
{
    if (process) {
        process->stop();
        delete process;
    }

    if (connection)
        delete connection;
}

bool tst_QQmlDebuggingEnabler::init(bool blockMode, bool qmlscene, int portFrom, int portTo)
{
    connection = new QQmlDebugConnection();

    if (qmlscene) {
        process = new QQmlDebugProcess(QLibraryInfo::location(QLibraryInfo::BinariesPath) + "/qmlscene", this);
        process->setMaximumBindErrors(1);
    } else {
        process = new QQmlDebugProcess(QCoreApplication::applicationDirPath() + QLatin1String("/qqmldebuggingenablerserver"), this);
        process->setMaximumBindErrors(portTo - portFrom);
    }

    if (qmlscene) {
        process->start(QStringList() << QLatin1String("-qmljsdebugger=port:") +
                       QString::number(portFrom) + QLatin1Char(',') + QString::number(portTo) +
                       QLatin1String(blockMode ? ",block": "") <<
                       testFile(QLatin1String("test.qml")));
    } else {
        QStringList args;
        if (blockMode)
            args << QLatin1String("-block");
        args << QString::number(portFrom) << QString::number(portTo);
        process->start(args);
    }

    if (!process->waitForSessionStart()) {
        return false;
    }

    const int port = process->debugPort();
    connection->connectToHost("127.0.0.1", port);
    if (!connection->waitForConnected()) {
        qDebug() << "could not connect to host!";
        return false;
    }
    return true;
}

void tst_QQmlDebuggingEnabler::cleanup()
{
    if (QTest::currentTestFailed()) {
        qDebug() << "Process State:" << process->state();
        qDebug() << "Application Output:" << process->output();
    }

    if (process) {
        process->stop();
        delete process;
    }


    if (connection)
        delete connection;

    process = 0;
    connection = 0;
}

void tst_QQmlDebuggingEnabler::data()
{
    QTest::addColumn<QString>("connector");
    QTest::addColumn<bool>("blockMode");
    QTest::addColumn<QStringList>("services");

    QStringList connectors({
        QLatin1String("QQmlDebugServer"),
        QLatin1String("QQmlNativeDebugConnector")
    });

    QList<bool> blockModes({ true, false });

    QList<QStringList> serviceLists({
        QStringList(),
        QQmlDebuggingEnabler::nativeDebuggerServices(),
        QQmlDebuggingEnabler::debuggerServices(),
        QQmlDebuggingEnabler::inspectorServices(),
        QQmlDebuggingEnabler::profilerServices(),
        QQmlDebuggingEnabler::debuggerServices() + QQmlDebuggingEnabler::inspectorServices()
    });

    foreach (const QString &connector, connectors) {
        foreach (bool blockMode, blockModes) {
            foreach (const QStringList &serviceList, serviceLists) {
                QString name = connector + QLatin1Char(',')
                        + QLatin1String(blockMode ? "block" : "noblock") + QLatin1Char(',')
                        + serviceList.join(QLatin1Char('-'));
                QTest::newRow(name.toUtf8().constData()) << connector << blockMode << serviceList;
            }
        }
    }
}

void tst_QQmlDebuggingEnabler::qmlscene_data()
{
    data();
}

void tst_QQmlDebuggingEnabler::qmlscene()
{
    QFETCH(QString, connector);
    QFETCH(bool, blockMode);
    QFETCH(QStringList, services);

    process = new QQmlDebugProcess(QLibraryInfo::location(QLibraryInfo::BinariesPath) + "/qmlscene",
                                   this);
    process->setMaximumBindErrors(1);
    process->start(QStringList()
                   << QString::fromLatin1("-qmljsdebugger=connector:%1%2%3%4")
                      .arg(connector + (connector == QLatin1String("QQmlDebugServer") ?
                                            QLatin1String(",port:5555,5565") : QString()))
                      .arg(blockMode ? QLatin1String(",block") : QString())
                      .arg(services.isEmpty() ? QString() : QString::fromLatin1(",services:"))
                      .arg(services.isEmpty() ? QString() : services.join(","))
                   << testFile(QLatin1String("test.qml")));

    if (connector == QLatin1String("QQmlDebugServer")) {
        QVERIFY(process->waitForSessionStart());
        connection = new QQmlDebugConnection();
        QList<QQmlDebugClient *> clients = QQmlDebugTest::createOtherClients(connection);
        connection->connectToHost("127.0.0.1", process->debugPort());
        QVERIFY(connection->waitForConnected());
        foreach (QQmlDebugClient *client, clients)
            QCOMPARE(client->state(), (services.isEmpty() || services.contains(client->name())) ?
                         QQmlDebugClient::Enabled : QQmlDebugClient::Unavailable);
    }

    QCOMPARE(process->state(), QLatin1String("running"));
    if (!blockMode)
        QTRY_VERIFY(process->output().contains(QLatin1String("qml: Component.onCompleted")));
}

void tst_QQmlDebuggingEnabler::custom_data()
{
    data();
}

void tst_QQmlDebuggingEnabler::custom()
{
    QFETCH(QString, connector);
    QFETCH(bool, blockMode);
    QFETCH(QStringList, services);
    const int portFrom = 5555;
    const int portTo = 5565;

    process = new QQmlDebugProcess(QCoreApplication::applicationDirPath() +
                                   QLatin1String("/qqmldebuggingenablerserver"), this);
    process->setMaximumBindErrors(portTo - portFrom);

    QStringList args;
    if (blockMode)
        args << QLatin1String("-block");

    args << QLatin1String("-connector") << connector
         << QString::number(portFrom) << QString::number(portTo);

    if (!services.isEmpty())
        args << QLatin1String("-services") << services;

    process->start(args);

    if (connector == QLatin1String("QQmlDebugServer")) {
        QVERIFY(process->waitForSessionStart());
        connection = new QQmlDebugConnection();
        QList<QQmlDebugClient *> clients = QQmlDebugTest::createOtherClients(connection);
        connection->connectToHost("127.0.0.1", process->debugPort());
        QVERIFY(connection->waitForConnected());
        foreach (QQmlDebugClient *client, clients)
            QCOMPARE(client->state(), (services.isEmpty() || services.contains(client->name())) ?
                         QQmlDebugClient::Enabled : QQmlDebugClient::Unavailable);
    }

    QCOMPARE(process->state(), QLatin1String("running"));
    if (!blockMode)
        QTRY_VERIFY(process->output().contains(QLatin1String("QQmlEngine created")));
}

QTEST_MAIN(tst_QQmlDebuggingEnabler)

#include "tst_qqmldebuggingenabler.moc"

