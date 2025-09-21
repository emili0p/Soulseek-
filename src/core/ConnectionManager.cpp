#include "ConnectionManager.h"
#include <QDebug>

ConnectionManager:: ConnectionManager(QObject *parent)
  :QObject(parent)
{
}

void ConnectionManager::connectToServer(const QString &username, const QString &password)
{
  qDebug() << "Trying to connect with user" << username;
  emit coonected();
}

void ConnectionManager::DisconnectFromServer()
{
  qDebug() << "Disconnected from server";
  emit Disconnected();
}
