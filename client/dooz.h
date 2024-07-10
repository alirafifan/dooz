#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QFormLayout>
#include <QGridLayout>
#include <QString>
#include <question.h>
#include <thread>
#include <intanswer.h>
#include <optionsanswer.h>
#include <stringanswer.h>
#include <QPalette>
#include <QColor>
#include <QCursor>
#include <QTCPSocket>
#include <iostream>
#include <the_last_page.h>
#include <QJsonDocument>
#include <QJsonObject>
#include "channels.h"
#include <thread>

class dooz : public QWidget
{
    Q_OBJECT

public:
    dooz(QWidget *parent = nullptr);

    void winLogic();

    void create_random_question();

    void correct_answer(int button_number);
    void wronge_answer(int button_number);
    void answered_by_oppisite(int button_number);

    void connect_to_server();
    void request_question_from_server_and_set_them_in_attributes();
    void convert_json_to_attributes();
    void getter();
private:
    QPushButton* question_button [9];
    question* questions [9];
    QGridLayout* qgl;
    the_last_page* end_text;
    QTcpSocket socket;
    channels chan;
    std::thread gettert;






public slots:
    void choose_home0();
    void choose_home1();
    void choose_home2();
    void choose_home3();
    void choose_home4();
    void choose_home5();
    void choose_home6();
    void choose_home7();
    void choose_home8();
    void update_table_0();
    void update_table_1();
    void update_table_2();
    void update_table_3();
    void update_table_4();
    void update_table_5();
    void update_table_6();
    void update_table_7();
    void update_table_8();
};

#endif // GAME_H
