#include "clientserver.h"

#include <QtNetwork>


int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);
    ClientServer::Type type;
    if (app.arguments().size() < 4)  {
        qDebug("usage: %s [ConnectedClient <server> <port>|UnconnectedClient <server> <port>|Server]", argv[0]);
        return 1;
    }

    QString arg = app.arguments().at(1).trimmed().toLower();
    if (arg == "connectedclient") {
        type = ClientServer::ConnectedClient;
    } else if (arg == "unconnectedclient") {
        type = ClientServer::UnconnectedClient;
    } else if (arg == "server") {
        type = ClientServer::Server;
    } else {
        qDebug("usage: %s [ConnectedClient <server> <port>|UnconnectedClient <server> <port>|Server]", argv[0]);
        return 1;
    }

    ClientServer clientServer(type, app.arguments().at(2),
                              app.arguments().at(3).toInt());

    return app.exec();
}


