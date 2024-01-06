/********************************************************************************
** Form generated from reading UI file 'MainWindows.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWS_H
#define UI_MAINWINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindows
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *RUN_windows;
    QLabel *label;
    QLineEdit *Start_Loc;
    QLabel *label_2;
    QLineEdit *End_Loc;
    QListView *listView;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindows)
    {
        if (MainWindows->objectName().isEmpty())
            MainWindows->setObjectName("MainWindows");
        MainWindows->resize(800, 600);
        MainWindows->setMaximumSize(QSize(800, 800));
        centralwidget = new QWidget(MainWindows);
        centralwidget->setObjectName("centralwidget");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 10, 701, 461));
        RUN_windows = new QPushButton(centralwidget);
        RUN_windows->setObjectName("RUN_windows");
        RUN_windows->setGeometry(QRect(710, 440, 81, 30));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(720, 90, 58, 16));
        label->setAlignment(Qt::AlignCenter);
        Start_Loc = new QLineEdit(centralwidget);
        Start_Loc->setObjectName("Start_Loc");
        Start_Loc->setGeometry(QRect(710, 110, 81, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(720, 150, 58, 16));
        label_2->setAlignment(Qt::AlignCenter);
        End_Loc = new QLineEdit(centralwidget);
        End_Loc->setObjectName("End_Loc");
        End_Loc->setGeometry(QRect(710, 170, 81, 21));
        listView = new QListView(centralwidget);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(10, 480, 781, 81));
        MainWindows->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindows);
        statusbar->setObjectName("statusbar");
        MainWindows->setStatusBar(statusbar);

        retranslateUi(MainWindows);

        QMetaObject::connectSlotsByName(MainWindows);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindows)
    {
        MainWindows->setWindowTitle(QCoreApplication::translate("MainWindows", "\350\277\267\345\256\253\346\261\202\350\247\243_LouShengfeng", nullptr));
        RUN_windows->setText(QCoreApplication::translate("MainWindows", "\350\277\220\350\241\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindows", "\350\265\267\347\202\271", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindows", "\347\273\210\347\202\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindows: public Ui_MainWindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWS_H
