#ifndef SSLSERVER_H
#define SSLSERVER_H

#include <QTcpServer>
#include <QSslSocket>
#include <QSslKey>
#include <QList>
#include <QDebug>

class SSLServer : public QTcpServer
{
    Q_OBJECT
public:
    SSLServer(QObject *parent = 0);

    QSslSocket *nextPendingConnection();
    
signals:
    
public slots:

protected:
    void incomingConnection(int socketDescriptor);
private:
    QList<QSslSocket *> m_secureSocketList;
    
};

#endif // SSLSERVER_H