#pragma once

#include <QtCore>
#include <QtTest>

#include <QtNetworkAuth/qoauth1signature.h>

class tst_OAuth1Signature : public QObject
{
    Q_OBJECT

public:
    QOAuth1Signature createTwitterSignature();

private Q_SLOTS:
    void signature();
    void copyAndModify();
};
