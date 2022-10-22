#pragma once

#include <QtTest/QtTest>
#include <QLocalServer>
#include <QLocalSocket>
#include <QTimer>
#include "../../qbearertestcommon.h"

#ifndef QT_NO_BEARERMANAGEMENT
#include <QtNetwork/qnetworkconfigmanager.h>
#include <QtNetwork/qnetworksession.h>
#include <private/qnetworksession_p.h>
#endif

QT_USE_NAMESPACE

// Can be used to configure tests that require manual attention (such as roaming)
//#define QNETWORKSESSION_MANUAL_TESTS 1

#ifndef QT_NO_BEARERMANAGEMENT
Q_DECLARE_METATYPE(QNetworkConfiguration::Type)
#endif

class tst_QNetworkSession : public QObject
{
    Q_OBJECT

#ifndef QT_NO_BEARERMANAGEMENT
public slots:
    void initTestCase();
    void cleanupTestCase();

private slots:
    void robustnessBombing();

    void sessionClosing_data();
    void sessionClosing();

    void outOfProcessSession();
    void invalidSession();

    void repeatedOpenClose_data();
    void repeatedOpenClose();

    void sessionProperties_data();
    void sessionProperties();

    void userChoiceSession_data();
    void userChoiceSession();

    void sessionOpenCloseStop_data();
    void sessionOpenCloseStop();

    void sessionAutoClose_data();
    void sessionAutoClose();

    void usagePolicies();

private:
    QNetworkConfigurationManager manager;
    int inProcessSessionManagementCount;
    QString lackeyDir;
#endif
};

