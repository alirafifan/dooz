#include "optionsanswer.h"

optionsanswer::optionsanswer(QObject *parent)
{
    answer[0] = new QRadioButton("دانشگاه صنعتی اصفهان");
    answer[1] = new QRadioButton("دانشگاه اصفهان");
    answer[2] = new QRadioButton("دانشگاه تهران");
    answer[3] = new QRadioButton("دانشگاه فردوسی");

    answer_ly = new QHBoxLayout();

    answer_ly->addWidget(answer[0]);
    answer_ly->addWidget(answer[1]);
    answer_ly->addWidget(answer[2]);
    answer_ly->addWidget(answer[3]);

    main_ly->insertLayout(2,answer_ly);
}

