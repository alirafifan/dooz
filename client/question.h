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
#include <QTcpSocket>

using namespace std;

class question : public QDialog
{
    Q_OBJECT

public:
    question(QWidget *parent = nullptr);
    void send_answer_to_server();
    void set_check_answer_from_server();
    bool check_my_answer;
    bool check_opposite_answer;
    QPushButton *OK , *Cancel;
    void fun();

protected:
    QVBoxLayout* main_ly;
    QHBoxLayout* header_ly , *question_ly;
    QLabel* text_qus , *title , *type;
    QProgressBar *qpb;
    QGroupBox* question_gb;
    QHBoxLayout *push;

    QString question_id;
    QString question_text;
    QString question_category;
    QString question_type;


};

#endif // QUESTION_H
