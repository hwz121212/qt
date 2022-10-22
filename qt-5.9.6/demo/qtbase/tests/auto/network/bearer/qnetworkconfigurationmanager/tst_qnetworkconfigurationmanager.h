#pragma once


#include <QtTest/QtTest>
#include "../qbearertestcommon.h"

#ifndef QT_NO_BEARERMANAGEMENT
#include <QtNetwork/qnetworkconfiguration.h>
#include <QtNetwork/qnetworkconfigmanager.h>
#endif

QT_USE_NAMESPACE
class tst_QNetworkConfigurationManager : public QObject
{
    Q_OBJECT

private slots:
#ifndef QT_NO_BEARERMANAGEMENT
    void usedInThread(); // this test must be first, or it will falsely pass
    void allConfigurations();
    void defaultConfiguration();
    void configurationFromIdentifier();
#endif
};

