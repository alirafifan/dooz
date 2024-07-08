#ifndef THE_LAST_PAGE_H
#define THE_LAST_PAGE_H

#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>

namespace Ui {
class the_last_page;
}

class the_last_page : public QWidget
{
    Q_OBJECT

public:
    the_last_page(QWidget *parent = nullptr);
    void winner();
    void loser();

private:
    QLabel* message;
    QHBoxLayout* main_ly;

};

#endif // THE_LAST_PAGE_H
