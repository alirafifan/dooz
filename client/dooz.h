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
#include <the_last_page.h>

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


private:
    QPushButton* questions [9];
    QGridLayout* qgl;
    the_last_page* end_text;



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

};

#endif // GAME_H
