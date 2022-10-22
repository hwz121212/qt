#pragma once


#include <QCoreApplication>
#include <QTimer>
#include <QRemoteObjectNode>


#include "rep_timemodel_replica.h"

class tester : public QObject
{
    Q_OBJECT
public:
    tester() : QObject(nullptr)
    {
        QRemoteObjectNode m_client(QUrl(QStringLiteral("local:registry")));
        ptr1.reset(m_client.acquire< MinuteTimerReplica >());
        ptr2.reset(m_client.acquire< MinuteTimerReplica >());
        ptr3.reset(m_client.acquire< MinuteTimerReplica >());
        QTimer::singleShot(0,this,SLOT(clear()));
        QTimer::singleShot(1,this,SLOT(clear()));
        QTimer::singleShot(10000,this,SLOT(clear()));
        QTimer::singleShot(11000,this,SLOT(clear()));
    }
public slots:
    void clear()
    {
        static int i = 0;
        if (i == 0) {
            i++;
            ptr1.reset();
        } else if (i == 1) {
            i++;
            ptr2.reset();
        } else if (i == 2) {
            i++;
            ptr3.reset();
        } else {
            qApp->quit();
        }
    }

private:
    QScopedPointer<MinuteTimerReplica> ptr1, ptr2, ptr3;
};
