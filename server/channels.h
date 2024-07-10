#ifndef CHANNELS_H
#define CHANNELS_H

#include <QWidget>
#include <QTcpSocket>
#include <thread>


    class channels:public QWidget
{
    Q_OBJECT
public:
    channels( QTcpSocket* ,QWidget *parent =0);
    ~channels();
    QString chan();
    QString data;
    QString datad;
    QTcpSocket* socket;

private:

    std::thread t;

};

#endif // CHANNELS_H
