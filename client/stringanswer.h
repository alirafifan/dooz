#ifndef STRINGANSWER_H
#define STRINGANSWER_H

#include <QAbstractItemModel>
#include "question.h"
#include <QTextEdit>
#include <QLineEdit>

class stringanswer : public question
{
    Q_OBJECT

public:
    stringanswer(QWidget *parent = nullptr);

private:
    QLineEdit *answer;
    QHBoxLayout *answer_ly;
};

#endif // STRINGANSWER_H
