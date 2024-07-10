#include "channels.h"

channels::channels(QTcpSocket* _socket, QWidget *parent) {

    socket = _socket;
    t = std::thread(&channels::chan,this);
}
channels::~channels()
{
    t.join();
}

QString channels::chan()
{
    while(true)
    {
        while(!socket->waitForReadyRead(-1));
        data=QString(socket->readAll());
        qDebug()<<data;

    }
}
