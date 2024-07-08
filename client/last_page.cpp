#include "last_page.h"

last_page::last_page(QObject *parent)
    : QDialog(parent)
{
    message = new QLabel();
}

void last_page::winer()
{
    message->setText("Congratulation! You won the game!");
}

void last_page::loser()
{
    message->setText("You lost the game!");
}
