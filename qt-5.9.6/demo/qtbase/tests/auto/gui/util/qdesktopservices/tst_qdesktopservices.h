#pragma once


#include <QtTest/QtTest>
#include <qdebug.h>
#include <qdesktopservices.h>
#include <qregularexpression.h>

class tst_qdesktopservices : public QObject
{
    Q_OBJECT

private slots:
    void openUrl();
    void handlers();
    void testDataLocation();
};


class MyUrlHandler : public QObject
{
    Q_OBJECT
public:
    QUrl lastHandledUrl;

public slots:
    inline void handle(const QUrl &url) {
        lastHandledUrl = url;
    }
};

