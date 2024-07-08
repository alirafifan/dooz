#include "question.h"

question::question(QWidget *parent)
    : QDialog(parent)
{
//    std::thread t1(&question::fun , this);
    main_ly = new QVBoxLayout();
    header_ly = new QHBoxLayout();
    title = new QLabel("موضوع : فیزیک");
    type = new QLabel("نوع : بمب");
    OK = new QPushButton("OK");
    Cancel = new QPushButton("Cancel");
    push = new QHBoxLayout();
    push->setAlignment(Qt::AlignRight);
    push->addWidget(OK);
    push->addWidget(Cancel);
    header_ly->addWidget(title , 1 , Qt::AlignRight);
    header_ly->addWidget(type , 1 , Qt::AlignLeft);
    main_ly->addLayout(header_ly);
    text_qus = new QLabel("بهترین دانشگاه ایران کدام است؟ ");
    question_gb = new QGroupBox("سوال");
    question_gb->setAlignment(Qt::AlignRight);
    question_ly = new QHBoxLayout();
    question_ly->addWidget(text_qus);
    question_gb->setLayout(question_ly);
    main_ly->addWidget(question_gb , 1 , Qt::AlignCenter);
    qpb = new QProgressBar();
    qpb->setValue(100);
    qpb->setMinimumSize(400,50);
    main_ly->addWidget(qpb , 1 , Qt::AlignCenter);
    main_ly->addLayout(push);
    setLayout(main_ly);
    setMinimumSize(450, 270);
    setMaximumSize(450, 270);
}

void question::fun()
{
    int x = 100;
    while(x >= 0){
        _sleep(1000);
        qpb->setValue(x);
        x -= 10;
    }
}
