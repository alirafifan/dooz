#ifndef QUESTION_H
#define QUESTION_H

#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGroupBox>
#include <QLabel>
#include <QTextEdit>
#include <QProgressBar>
#include <QPushButton>
#include <QTimer>
#include <QString>
#include <thread>

using namespace std;

class question : public QDialog
{
    Q_OBJECT

public:
    question(QWidget *parent = nullptr);
    void fun();

protected:
    QVBoxLayout* main_ly;
    QHBoxLayout* header_ly , *question_ly;
    QLabel* text_qus , *title , *type;
    QProgressBar *qpb;
    QPushButton *skip , *ok;
    QGroupBox* question_gb;
    QPushButton *OK , *Cancel;
    QHBoxLayout *push;

};

#endif // QUESTION_H
