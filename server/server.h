#ifndef SERVER_H
#define SERVER_H

#include <QWidget>
#include "channels.h"
#include <vector>
#include <QString>
#include <QTcpServer>
#include <QDebug>

class Server : public QWidget
{
    Q_OBJECT

public:
    Server(QWidget *parent = nullptr);
    ~Server();


    void sender();
    void get_s(int index);
    void get_b(int index);
    void request_questios_from_website();
public slots:
    void NewCon();


private:
    QString answers[9];
    QTcpServer* myserver;
    std::vector<channels*> sock;
    std::thread sendert;

};
#endif // SERVER_H

