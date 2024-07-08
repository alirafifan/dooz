#ifndef LAST_PAGE_H
#define LAST_PAGE_H

#include <QAbstractItemModel>
#include <QLabel>

class last_page : public QDialog
{
    Q_OBJECT

public:
    last_page(QObject *parent = nullptr);
    void winer();
    void loser();

private:
    QLabel *message;

};

#endif // LAST_PAGE_H
