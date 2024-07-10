#ifndef MY_CLIENT_H
#define MY_CLIENT_H

#include <QtNetwork/QTcpSocket>

class MyClient : public QObject
{
    Q_OBJECT
public:
    explicit MyClient(QObject* parent = nullptr) : QObject(parent)
    {
        QTcpSocket* socket = new QTcpSocket(this);
        socket->connectToHost("127.0.0.1", 12345); // Change the IP and port as needed

        // Handle client communication here (e.g., read/write data)
        // You can connect signals/slots to handle incoming data.
    }
};


#endif // MY_CLIENT_H
