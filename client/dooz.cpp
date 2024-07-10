#include "dooz.h"

dooz::dooz(QWidget *parent): QWidget(parent)
{
    for(int i = 0 ; i < 9 ; i++) {
        questions[i] = new question();
    }


    for(int i = 0 ; i < 9 ; i++){
        questions[i]->fun();
    }

    for (int i = 0 ; i < 9 ; i++)
    {
        question_button[i] = new QPushButton ( "QUESTION " + QString::number(i+1));
        question_button[i]->setMinimumHeight(200);  question_button[i]->setMinimumWidth(200);
        question_button[i]->setCursor(Qt::PointingHandCursor);
    }

    qgl = new QGridLayout();

    int index = 0;
    for (int a = 0 ; a < 3 ; a++)
    {
        for (int b = 0 ; b < 3 ; b++)
        {
            qgl->addWidget(question_button[index] , a , b);
            index++;
        }
    }

    this->setLayout(qgl);

    connect(question_button[0] , SIGNAL(clicked(bool)) , this , SLOT(choose_home0()));
    connect(question_button[1] , SIGNAL(clicked(bool)) , this , SLOT(choose_home1()));
    connect(question_button[2] , SIGNAL(clicked(bool)) , this , SLOT(choose_home2()));
    connect(question_button[3] , SIGNAL(clicked(bool)) , this , SLOT(choose_home3()));
    connect(question_button[4] , SIGNAL(clicked(bool)) , this , SLOT(choose_home4()));
    connect(question_button[5] , SIGNAL(clicked(bool)) , this , SLOT(choose_home5()));
    connect(question_button[6] , SIGNAL(clicked(bool)) , this , SLOT(choose_home6()));
    connect(question_button[7] , SIGNAL(clicked(bool)) , this , SLOT(choose_home7()));
    connect(question_button[8] , SIGNAL(clicked(bool)) , this , SLOT(choose_home8()));

    connect(questions[0]->OK , SIGNAL(clicked(bool)) , this , SLOT(update_table_0()));
    connect(questions[1]->OK , SIGNAL(clicked(bool)) , this , SLOT(update_table_1()));
    connect(questions[2]->OK , SIGNAL(clicked(bool)) , this , SLOT(update_table_2()));
    connect(questions[3]->OK , SIGNAL(clicked(bool)) , this , SLOT(update_table_3()));
    connect(questions[4]->OK , SIGNAL(clicked(bool)) , this , SLOT(update_table_4()));
    connect(questions[5]->OK , SIGNAL(clicked(bool)) , this , SLOT(update_table_5()));
    connect(questions[6]->OK , SIGNAL(clicked(bool)) , this , SLOT(update_table_6()));
    connect(questions[7]->OK , SIGNAL(clicked(bool)) , this , SLOT(update_table_7()));
    connect(questions[8]->OK , SIGNAL(clicked(bool)) , this , SLOT(update_table_8()));

}

void dooz::winLogic()
{
    while(true)
    {
        if ((question_button[0]->text() == "TRUE" &&
             question_button[1]->text() == "TRUE" &&
             question_button[2]->text() == "TRUE") ||
            (question_button[3]->text() == "TRUE" &&
             question_button[4]->text() == "TRUE" &&
             question_button[5]->text() == "TRUE") ||
            (question_button[6]->text() == "TRUE" &&
             question_button[7]->text() == "TRUE" &&
             question_button[8]->text() == "TRUE") ||
            (question_button[0]->text() == "TRUE" &&
             question_button[3]->text() == "TRUE" &&
             question_button[6]->text() == "TRUE") ||
            (question_button[1]->text() == "TRUE" &&
             question_button[4]->text() == "TRUE" &&
             question_button[7]->text() == "TRUE") ||
            (question_button[2]->text() == "TRUE" &&
             question_button[5]->text() == "TRUE" &&
             question_button[8]->text() == "TRUE") ||
            (question_button[0]->text() == "TRUE" &&
             question_button[4]->text() == "TRUE" &&
             question_button[8]->text() == "TRUE") ||
            (question_button[2]->text() == "TRUE" &&
             question_button[4]->text() == "TRUE" &&
             question_button[6]->text() == "TRUE"))
            {
            exit(1);
            }
    }
}

void dooz::correct_answer(int button_number)
{
    QPalette p(question_button[button_number]->palette());
    p.setColor(QPalette::Button, QColor("green"));
    question_button[button_number]->setPalette(p);
    question_button[button_number]->setText("TRUE");
    question_button[button_number]->setEnabled(false);
}

void dooz::wronge_answer(int button_number)
{
    QPalette p(question_button[button_number]->palette());
    p.setColor(QPalette::Button, QColor("orange"));
    question_button[button_number]->setPalette(p);
    question_button[button_number]->setText("LOCKED");
    question_button[button_number]->setEnabled(false);
}

void dooz::answered_by_oppisite(int button_number)
{
    QPalette p(question_button[button_number]->palette());
    p.setColor(QPalette::Button, QColor("red"));
    question_button[button_number]->setPalette(p);
    question_button[button_number]->setText("OPPOSITE");
    question_button[button_number]->setEnabled(false);
}

void dooz::connect_to_server()
{
    socket.connectToHost("127.0.0.1", 8000);

    if (socket.waitForConnected())
        std::cout << "Connected to server." << std::endl;
}

void dooz::request_question_from_server_and_set_them_in_attributes()
{
        if(socket.waitForReadyRead()){
            QByteArray data = socket.readAll();
            QJsonDocument doc = QJsonDocument::fromJson(data);
            QJsonObject json = doc.object();
        }
}

void dooz::update_table_0()
{
    chan.socket->write("s0");
    questions[0]->close();
}

void dooz::update_table_1()
{
    chan.socket->write("s1");
    questions[1]->close();
}

void dooz::update_table_2()
{
    chan.socket->write("s2");
    questions[2]->close();
}

void dooz::update_table_3()
{
    chan.socket->write("s3");
    questions[3]->close();
}

void dooz::update_table_4()
{
    chan.socket->write("s4");
    questions[4]->close();
}

void dooz::update_table_5()
{
    chan.socket->write("s5");
    questions[5]->close();
}

void dooz::update_table_6()
{
    chan.socket->write("s6");
    questions[6]->close();
}

void dooz::update_table_7()
{
    chan.socket->write("s7");
    questions[7]->close();
}

void dooz::update_table_8()
{
    chan.socket->write("s8");
    questions[8]->close();
}

void dooz::choose_home0()
{
    questions[0]->show();
    chan.socket->write("b0");
}

void dooz::choose_home1()
{
    questions[1]->show();
    chan.socket->write("b1");
}

void dooz::choose_home2()
{
    questions[2]->show();
    chan.socket->write("b2");
}

void dooz::choose_home3()
{
    questions[3]->show();
    chan.socket->write("b3");
}

void dooz::choose_home4()
{
    questions[4]->show();
    chan.socket->write("b4");
}

void dooz::choose_home5()
{
    questions[5]->show();
    chan.socket->write("b5");
}

void dooz::choose_home6()
{
    questions[6]->show();
    chan.socket->write("b6");
}

void dooz::choose_home7()
{
    questions[7]->show();
    chan.socket->write("b7");
}

void dooz::choose_home8()
{
    questions[8]->show();
    chan.socket->write("b8");
}



void dooz::getter()
{
    QChar a;
if(chan.data != chan.datad)
{
    chan.datad = chan.data;
    a = chan.data[0];

    if(a == 's')
    {

    }
    else if(a == 'b')
    {

    }
    else if(a == 'w')
    {

    }
}

}

