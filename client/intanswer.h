#ifndef INTANSWER_H
#define INTANSWER_H

#include <QWidget>
#include "question.h"
#include "QSpinBox"

class intAnswer;

class intAnswer : public question
{
    Q_OBJECT

public:
    intAnswer(QWidget *parent = nullptr);

private:
    QHBoxLayout *answer_ly;
    QSpinBox *answer;
};

#endif // INTANSWER_H
