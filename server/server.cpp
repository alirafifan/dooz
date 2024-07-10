#include "server.h"

Server::Server(QWidget *parent)
    : QWidget(parent)
{

    myserver = new QTcpServer;
    sendert = std::thread(&Server::sender,this);
    myserver->listen(QHostAddress::Any,9000);
    connect(myserver,SIGNAL(newConnection()),this,SLOT(NewCon()));

}

Server::~Server() {
    sendert.join();
}

void Server::sender()
{
    QChar a;
    while(true)
    {

        for(int i =0 ; i<sock.size() ; i++)
        {

            if(sock[i]->data != sock[i]->datad)
            {
                sock[i]->datad = sock[i]->data;
                a = sock[i]->data[0];

                if(a == 's')
                {
                    get_s(i);
                }
                else if(a == 'b')
                {
                    get_b(i);
                }
                else if(a == 'w')
                {

                }
            }

        }
    }

}

void Server::get_s(int index)
{
    qDebug()<<"we got something get_s";

    QString d = answers[sock[index]->data[1].digitValue()];

    d = (QString)"s"+sock[index]->data[1]+d;
//d == sock[index]->data
    if(1)
    {
        QString m = (QString)"o"+sock[index]->data[1];
        sock[index]->socket->write(m.toUtf8());

        if(index % 2 ==0)
        {
            m = (QString)"h"+sock[index]->data[1];
            sock[index-1]->socket->write(m.toUtf8());
        }
        else
        {
            m = (QString)"h"+sock[index]->data[1];
            sock[index+1]->socket->write(m.toUtf8());
        }
    }
    else
    {
        QString m = (QString)"r"+sock[index]->data[1];
        sock[index]->socket->write(m.toUtf8());

        if(index % 2 ==0)
        {
            m = (QString)"d"+sock[index]->data[1];
            sock[index-1]->socket->write(m.toUtf8());
        }
        else
        {
            m = (QString)"d"+sock[index]->data[1];
            sock[index+1]->socket->write(m.toUtf8());
        }
    }

}

void Server::get_b(int index)
{
    qDebug()<<"we got something get_b";
    if(index % 2 ==0)
    {
      QString  m = (QString)"b"+sock[index]->data[1];
        sock[index-1]->socket->write(m.toUtf8());
    }
    else
    {
        QString  m = (QString)"b"+sock[index]->data[1];
        sock[index+1]->socket->write(m.toUtf8());
    }
}

void Server::NewCon()
{
    channels * newchannel = new channels(myserver->nextPendingConnection(),0);
    sock.push_back(newchannel);
    qDebug()<<"server is conected";
}
