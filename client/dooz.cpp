#include "dooz.h"

dooz::dooz(QWidget *parent)
    : QWidget(parent)
{
    for (int i = 0 ; i < 9 ; i++)
    {
        questions[i] = new QPushButton ( "QUESTION " + QString::number(i+1));
        questions[i]->setMinimumHeight(200);  questions[i]->setMinimumWidth(200);
        questions[i]->setCursor(Qt::PointingHandCursor);
    }

    qgl = new QGridLayout();

    int index = 0;
    for (int a = 0 ; a < 3 ; a++)
    {
        for (int b = 0 ; b < 3 ; b++)
        {
            qgl->addWidget(questions[index] , a , b);
            index++;
        }
    }

    this->setLayout(qgl);

    connect(questions[0] , SIGNAL(clicked(bool)) , this , SLOT(choose_home0()));
    connect(questions[1] , SIGNAL(clicked(bool)) , this , SLOT(choose_home1()));
    connect(questions[2] , SIGNAL(clicked(bool)) , this , SLOT(choose_home2()));
    connect(questions[3] , SIGNAL(clicked(bool)) , this , SLOT(choose_home3()));
    connect(questions[4] , SIGNAL(clicked(bool)) , this , SLOT(choose_home4()));
    connect(questions[5] , SIGNAL(clicked(bool)) , this , SLOT(choose_home5()));
    connect(questions[6] , SIGNAL(clicked(bool)) , this , SLOT(choose_home6()));
    connect(questions[7] , SIGNAL(clicked(bool)) , this , SLOT(choose_home7()));
    connect(questions[8] , SIGNAL(clicked(bool)) , this , SLOT(choose_home8()));
}

void dooz::winLogic()
{
    while(true)
    {
        if ((questions[0]->text() == "TRUE" &&
             questions[1]->text() == "TRUE" &&
             questions[2]->text() == "TRUE") ||
            (questions[3]->text() == "TRUE" &&
             questions[4]->text() == "TRUE" &&
             questions[5]->text() == "TRUE") ||
            (questions[6]->text() == "TRUE" &&
             questions[7]->text() == "TRUE" &&
             questions[8]->text() == "TRUE") ||
            (questions[0]->text() == "TRUE" &&
             questions[3]->text() == "TRUE" &&
             questions[6]->text() == "TRUE") ||
            (questions[1]->text() == "TRUE" &&
             questions[4]->text() == "TRUE" &&
             questions[7]->text() == "TRUE") ||
            (questions[2]->text() == "TRUE" &&
             questions[5]->text() == "TRUE" &&
             questions[8]->text() == "TRUE") ||
            (questions[0]->text() == "TRUE" &&
             questions[4]->text() == "TRUE" &&
             questions[8]->text() == "TRUE") ||
            (questions[2]->text() == "TRUE" &&
             questions[4]->text() == "TRUE" &&
             questions[6]->text() == "TRUE"))
            {
            exit(1);
            }
    }
}

void dooz::create_random_question()
{
    srand(time(NULL));
    int random_number = rand() % 3;

    question* q;

    if (random_number == 0){
        q = new intAnswer(this);
        q->show();
    }

    if (random_number == 1){
        q = new optionsanswer(this);
        q->show();
    }

    if (random_number == 2){
        q = new stringanswer(this);
        q->show();
    }

}

void dooz::correct_answer(int button_number)
{
    QPalette p(questions[button_number]->palette());
    p.setColor(QPalette::Button, QColor("green"));
    questions[button_number]->setPalette(p);
    questions[button_number]->setText("TRUE");
    questions[button_number]->setEnabled(false);
}

void dooz::wronge_answer(int button_number)
{
    QPalette p(questions[button_number]->palette());
    p.setColor(QPalette::Button, QColor("orange"));
    questions[button_number]->setPalette(p);
    questions[button_number]->setText("LOCKED");
    questions[button_number]->setEnabled(false);
}

void dooz::answered_by_oppisite(int button_number)
{
    QPalette p(questions[button_number]->palette());
    p.setColor(QPalette::Button, QColor("red"));
    questions[button_number]->setPalette(p);
    questions[button_number]->setText("OPPOSITE");
    questions[button_number]->setEnabled(false);
}



void dooz::choose_home0()
{
    create_random_question();
    correct_answer(0);
}

void dooz::choose_home1()
{
    correct_answer(1);
    create_random_question();
}

void dooz::choose_home2()
{
    correct_answer(2);
    create_random_question();
}

void dooz::choose_home3()
{
    correct_answer(3);
    create_random_question();
}

void dooz::choose_home4()
{
    correct_answer(4);
    create_random_question();
}

void dooz::choose_home5()
{
    correct_answer(5);
    create_random_question();
}

void dooz::choose_home6()
{
    correct_answer(6);
    create_random_question();
}

void dooz::choose_home7()
{
    correct_answer(7);
    create_random_question();
}

void dooz::choose_home8()
{
    correct_answer(8);
    create_random_question();
}
