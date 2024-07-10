#include "channels.h"

channels::channels(QWidget *parent) {
    socket = new QTcpSocket();
    socket->connectToHost("192.168.1.102",9000);
    t = std::thread(&channels::chan,this);

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
