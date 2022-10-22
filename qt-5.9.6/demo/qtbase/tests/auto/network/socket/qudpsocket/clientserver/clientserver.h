#pragma once


#include <QtNetwork>

class ClientServer : public QUdpSocket
{
    Q_OBJECT
public:
    enum Type {
        ConnectedClient,
        UnconnectedClient,
        Server
    };

    ClientServer(Type type, const QString &host, quint16 port)
        : type(type)
    {
        switch (type) {
        case Server:
            if (bind(0, ShareAddress | ReuseAddressHint)) {
                printf("%d\n", localPort());
            } else {
                printf("XXX\n");
            }
            break;
        case ConnectedClient:
            connectToHost(host, port);
            startTimer(250);
            printf("ok\n");
            break;
        case UnconnectedClient:
            peerAddress = host;
            peerPort = port;
            if (bind(QHostAddress::Any, port + 1, ShareAddress | ReuseAddressHint)) {
                startTimer(250);
                printf("ok\n");
            } else {
                printf("XXX\n");
            }
            break;
        }
        fflush(stdout);

        connect(this, SIGNAL(readyRead()), this, SLOT(readTestData()));
    }

protected:
    void timerEvent(QTimerEvent *event)
    {
        static int n = 0;
        switch (type) {
        case ConnectedClient:
            write(QByteArray::number(n++));
            break;
        case UnconnectedClient:
            writeDatagram(QByteArray::number(n++), peerAddress, peerPort);
            break;
        default:
            break;
        }

        QUdpSocket::timerEvent(event);
    }

private slots:
    void readTestData()
    {
        printf("readData()\n");
        switch (type) {
        case ConnectedClient: {
            while (bytesAvailable() || hasPendingDatagrams()) {
                QByteArray data = readAll();
                printf("got %d\n", data.toInt());
            }
            break;
        }
        case UnconnectedClient: {
            while (hasPendingDatagrams()) {
                QByteArray data;
                data.resize(pendingDatagramSize());
                readDatagram(data.data(), data.size());
                printf("got %d\n", data.toInt());
            }
            break;
        }
        case Server: {
            while (hasPendingDatagrams()) {
                QHostAddress sender;
                quint16 senderPort;
                QByteArray data;
                data.resize(pendingDatagramSize());
                readDatagram(data.data(), data.size(), &sender, &senderPort);
                printf("got %d\n", data.toInt());
                printf("sending %d\n", data.toInt() * 2);
                writeDatagram(QByteArray::number(data.toInt() * 2), sender, senderPort);
            }
            break;
        }
        }
        fflush(stdout);
    }

private:
    Type type;
    QHostAddress peerAddress;
    quint16 peerPort;
};

