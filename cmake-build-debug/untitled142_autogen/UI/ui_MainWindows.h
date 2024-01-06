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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindows
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QRadioButton *radioButton_A;
    QRadioButton *radioButton_DFS;
    QRadioButton *radioButton_BFS;
    QPushButton *pushButton_RUN;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindows)
    {
        if (MainWindows->objectName().isEmpty())
            MainWindows->setObjectName("MainWindows");
        MainWindows->resize(800, 594);
        MainWindows->setMaximumSize(QSize(800, 800));
        centralwidget = new QWidget(MainWindows);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(0, 0, 661, 481));
        groupBox->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(670, 310, 121, 179));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        radioButton_A = new QRadioButton(verticalLayoutWidget);
        radioButton_A->setObjectName("radioButton_A");

        verticalLayout->addWidget(radioButton_A);

        radioButton_DFS = new QRadioButton(verticalLayoutWidget);
        radioButton_DFS->setObjectName("radioButton_DFS");

        verticalLayout->addWidget(radioButton_DFS);

        radioButton_BFS = new QRadioButton(verticalLayoutWidget);
        radioButton_BFS->setObjectName("radioButton_BFS");

        verticalLayout->addWidget(radioButton_BFS);

        pushButton_RUN = new QPushButton(verticalLayoutWidget);
        pushButton_RUN->setObjectName("pushButton_RUN");

        verticalLayout->addWidget(pushButton_RUN);

        MainWindows->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindows);
        statusbar->setObjectName("statusbar");
        MainWindows->setStatusBar(statusbar);

        retranslateUi(MainWindows);
        QObject::connect(radioButton_A, &QRadioButton::clicked, radioButton_A, &QRadioButton::setChecked);
        QObject::connect(radioButton_DFS, &QRadioButton::clicked, radioButton_DFS, &QRadioButton::setChecked);
        QObject::connect(radioButton_BFS, &QRadioButton::clicked, radioButton_BFS, &QRadioButton::setChecked);
        QObject::connect(pushButton_RUN, &QPushButton::clicked, pushButton_RUN, &QPushButton::setChecked);

        QMetaObject::connectSlotsByName(MainWindows);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindows)
    {
        MainWindows->setWindowTitle(QCoreApplication::translate("MainWindows", "\350\277\267\345\256\253\346\261\202\350\247\243_LouShengfeng", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindows", "--------------\350\277\267\345\256\253\345\233\276--------------", nullptr));
        label->setText(QCoreApplication::translate("MainWindows", "\350\257\267\351\200\211\346\213\251\346\237\245\346\211\276\347\256\227\346\263\225", nullptr));
        radioButton_A->setText(QCoreApplication::translate("MainWindows", "A*", nullptr));
        radioButton_DFS->setText(QCoreApplication::translate("MainWindows", "DFS", nullptr));
        radioButton_BFS->setText(QCoreApplication::translate("MainWindows", "BFS", nullptr));
        pushButton_RUN->setText(QCoreApplication::translate("MainWindows", "RUN!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindows: public Ui_MainWindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWS_H
