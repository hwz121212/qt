#pragma once

#include <QtCore>
#include <QtTest>
#include <QtNetwork>

#include <QtNetworkAuth/qabstractoauth.h>

#include <private/qabstractoauth_p.h>

class tst_AbstractOAuth : public QObject
{
    Q_OBJECT

private:
    struct AbstractOAuth : QAbstractOAuth {
        AbstractOAuth() : QAbstractOAuth(*new QAbstractOAuthPrivate(QUrl(), nullptr), nullptr) {}

        virtual QString clientIdentifier() const override { return QString(); }
        virtual void setClientIdentifier(const QString &) override {}
        virtual QString token() const override { return QString(); }
        virtual void setToken(const QString &) override {}
        virtual QNetworkReply *head(const QUrl &, const QVariantMap &) override { return nullptr; }
        virtual QNetworkReply *get(const QUrl &, const QVariantMap &) override { return nullptr; }
        virtual QNetworkReply *post(const QUrl &, const QVariantMap &) override { return nullptr; }
        virtual QNetworkReply *deleteResource(const QUrl &, const QVariantMap &) override
        {
            return nullptr;
        }
        virtual void grant() override {}
    };

private Q_SLOTS:
    void authorizationUrlSignal();
};
