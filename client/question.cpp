#include "question.h"
#include <iostream>

question::question(QWidget *parent)
    : QDialog(parent)
{
}

void question::fun()
{
    main_ly = new QVBoxLayout();
    header_ly = new QHBoxLayout();
    title = new QLabel(" موضوع : " + question_category);
    type = new QLabel(" نوع : " + question_type);
    OK = new QPushButton("OK");
    Cancel = new QPushButton("Cancel");
    push = new QHBoxLayout();
    push->setAlignment(Qt::AlignRight);
    push->addWidget(OK);
    push->addWidget(Cancel);
    header_ly->addWidget(title , 1 , Qt::AlignRight);
    header_ly->addWidget(type , 1 , Qt::AlignLeft);
    main_ly->addLayout(header_ly);
    text_qus = new QLabel(question_text);
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

