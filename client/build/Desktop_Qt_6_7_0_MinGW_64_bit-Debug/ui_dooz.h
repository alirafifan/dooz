/********************************************************************************
** Form generated from reading UI file 'dooz.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOOZ_H
#define UI_DOOZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dooz
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dooz)
    {
        if (dooz->objectName().isEmpty())
            dooz->setObjectName("dooz");
        dooz->resize(800, 600);
        centralwidget = new QWidget(dooz);
        centralwidget->setObjectName("centralwidget");
        dooz->setCentralWidget(centralwidget);
        menubar = new QMenuBar(dooz);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        dooz->setMenuBar(menubar);
        statusbar = new QStatusBar(dooz);
        statusbar->setObjectName("statusbar");
        dooz->setStatusBar(statusbar);

        retranslateUi(dooz);

        QMetaObject::connectSlotsByName(dooz);
    } // setupUi

    void retranslateUi(QMainWindow *dooz)
    {
        dooz->setWindowTitle(QCoreApplication::translate("dooz", "dooz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dooz: public Ui_dooz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOOZ_H
