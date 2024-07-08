#ifndef OPTIONSANSWER_H
#define OPTIONSANSWER_H

#include <QAbstractItemModel>
#include <QRadioButton>
#include <QHBoxLayout>
#include <question.h>

class optionsanswer : public question
{
    Q_OBJECT

public:
    optionsanswer(QObject *parent = nullptr);

private:
    QHBoxLayout *answer_ly;
    QRadioButton *answer [4];

};

#endif // OPTIONSANSWER_H
