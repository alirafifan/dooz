#include "stringanswer.h"

stringanswer::stringanswer(QWidget *parent)
    : question(parent)
{
    answer = new QLineEdit();
    answer_ly = new QHBoxLayout();
    answer->setAlignment(Qt::AlignHCenter);
    answer->setFocus();
    answer->setMaximumWidth(200);
    answer->setMaximumHeight(30);
    answer_ly->addWidget(answer);
    main_ly->insertLayout(2,answer_ly);
}
