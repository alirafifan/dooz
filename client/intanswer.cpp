#include "intanswer.h"

intAnswer::intAnswer(QWidget *parent)
    : question(parent)
{
    answer = new QSpinBox();
    answer_ly = new QHBoxLayout();
    answer->setAlignment(Qt::AlignHCenter);
    answer->setFocus();
    answer->setMaximumWidth(100);
    answer_ly->addWidget(answer);
    main_ly->insertLayout(2,answer_ly);
}
