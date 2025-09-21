#pragma once
#include <QObject>

class ConnectionManager : public QObject
{
  QObject
public:
    explicit ConnectionManager(QObject *parent = nullptr);

    void ConnectToServer(const Qstring &username, const Qstring &password);
    void disconnectFromServer();

signals:
    void connected();
    void disconnected();
    void error(const Qstring &message);
};


