#include "dooz.h"

#include <QApplication>
#include <optionsanswer.h>
#include <intanswer.h>
#include <stringanswer.h>
#include <iostream>
#include <QTCPSocket>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dooz w;
    std::thread winCheck(&dooz::winLogic , &w);
    w.show();
    return a.exec();
}
