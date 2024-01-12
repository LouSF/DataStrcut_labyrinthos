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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindows
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton_Input;
    QLineEdit *lineEdit_filepath_Input;
    QLineEdit *lineEdit_filepath_Output;
    QPushButton *pushButton_Output;
    QLabel *label_2;
    QPushButton *pushButton_Input_run;
    QPushButton *pushButton_Output_run;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLineEdit *lineEdit_creator_row;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QLineEdit *lineEdit_creator_col;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_creator;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_RUN;
    QPushButton *pushButton_Restart;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton_BFS;
    QRadioButton *radioButton_DFS;
    QRadioButton *radioButton_AstarM;
    QRadioButton *radioButton_AstarO;
    QRadioButton *radioButton_A;
    QTextBrowser *terminal_message_output;
    QFrame *maze;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindows)
    {
        if (MainWindows->objectName().isEmpty())
            MainWindows->setObjectName("MainWindows");
        MainWindows->resize(800, 800);
        MainWindows->setMaximumSize(QSize(800, 800));
        centralwidget = new QWidget(MainWindows);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 549, 781, 71));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton_Input = new QPushButton(gridLayoutWidget);
        pushButton_Input->setObjectName("pushButton_Input");

        gridLayout->addWidget(pushButton_Input, 0, 2, 1, 1);

        lineEdit_filepath_Input = new QLineEdit(gridLayoutWidget);
        lineEdit_filepath_Input->setObjectName("lineEdit_filepath_Input");

        gridLayout->addWidget(lineEdit_filepath_Input, 0, 1, 1, 1);

        lineEdit_filepath_Output = new QLineEdit(gridLayoutWidget);
        lineEdit_filepath_Output->setObjectName("lineEdit_filepath_Output");

        gridLayout->addWidget(lineEdit_filepath_Output, 1, 1, 1, 1);

        pushButton_Output = new QPushButton(gridLayoutWidget);
        pushButton_Output->setObjectName("pushButton_Output");

        gridLayout->addWidget(pushButton_Output, 1, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pushButton_Input_run = new QPushButton(gridLayoutWidget);
        pushButton_Input_run->setObjectName("pushButton_Input_run");

        gridLayout->addWidget(pushButton_Input_run, 0, 3, 1, 1);

        pushButton_Output_run = new QPushButton(gridLayoutWidget);
        pushButton_Output_run->setObjectName("pushButton_Output_run");

        gridLayout->addWidget(pushButton_Output_run, 1, 3, 1, 1);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 620, 781, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        lineEdit_creator_row = new QLineEdit(horizontalLayoutWidget);
        lineEdit_creator_row->setObjectName("lineEdit_creator_row");

        horizontalLayout->addWidget(lineEdit_creator_row);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        lineEdit_creator_col = new QLineEdit(horizontalLayoutWidget);
        lineEdit_creator_col->setObjectName("lineEdit_creator_col");

        horizontalLayout->addWidget(lineEdit_creator_col);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_creator = new QPushButton(horizontalLayoutWidget);
        pushButton_creator->setObjectName("pushButton_creator");

        horizontalLayout->addWidget(pushButton_creator);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 660, 781, 111));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_RUN = new QPushButton(horizontalLayoutWidget_2);
        pushButton_RUN->setObjectName("pushButton_RUN");

        verticalLayout_2->addWidget(pushButton_RUN);

        pushButton_Restart = new QPushButton(horizontalLayoutWidget_2);
        pushButton_Restart->setObjectName("pushButton_Restart");

        verticalLayout_2->addWidget(pushButton_Restart);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        radioButton_BFS = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_BFS->setObjectName("radioButton_BFS");

        verticalLayout_3->addWidget(radioButton_BFS);

        radioButton_DFS = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_DFS->setObjectName("radioButton_DFS");

        verticalLayout_3->addWidget(radioButton_DFS);

        radioButton_AstarM = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_AstarM->setObjectName("radioButton_AstarM");

        verticalLayout_3->addWidget(radioButton_AstarM);

        radioButton_AstarO = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_AstarO->setObjectName("radioButton_AstarO");

        verticalLayout_3->addWidget(radioButton_AstarO);

        radioButton_A = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_A->setObjectName("radioButton_A");

        verticalLayout_3->addWidget(radioButton_A);


        horizontalLayout_2->addLayout(verticalLayout_3);

        terminal_message_output = new QTextBrowser(horizontalLayoutWidget_2);
        terminal_message_output->setObjectName("terminal_message_output");

        horizontalLayout_2->addWidget(terminal_message_output);

        maze = new QFrame(centralwidget);
        maze->setObjectName("maze");
        maze->setGeometry(QRect(10, 10, 781, 531));
        maze->setAcceptDrops(false);
        maze->setStyleSheet(QString::fromUtf8("#maze{border:1px solid rgb(1,1,1)}"));
        maze->setFrameShape(QFrame::StyledPanel);
        maze->setFrameShadow(QFrame::Raised);
        MainWindows->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindows);
        statusbar->setObjectName("statusbar");
        MainWindows->setStatusBar(statusbar);

        retranslateUi(MainWindows);

        QMetaObject::connectSlotsByName(MainWindows);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindows)
    {
        MainWindows->setWindowTitle(QCoreApplication::translate("MainWindows", "\350\277\267\345\256\253\346\261\202\350\247\243_\346\245\274\350\203\234\345\263\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindows", "\345\257\274\345\205\245\350\277\267\345\256\253", nullptr));
        pushButton_Input->setText(QCoreApplication::translate("MainWindows", "\346\265\217\350\247\210", nullptr));
        pushButton_Output->setText(QCoreApplication::translate("MainWindows", "\346\265\217\350\247\210", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindows", "\345\257\274\345\207\272\350\277\267\345\256\253", nullptr));
        pushButton_Input_run->setText(QCoreApplication::translate("MainWindows", "InPut", nullptr));
        pushButton_Output_run->setText(QCoreApplication::translate("MainWindows", "OutPut", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindows", "\347\224\237\346\210\220\350\277\267\345\256\253", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindows", "row", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindows", "col", nullptr));
        pushButton_creator->setText(QCoreApplication::translate("MainWindows", "\347\224\237\346\210\220", nullptr));
        pushButton_RUN->setText(QCoreApplication::translate("MainWindows", "RUN", nullptr));
        pushButton_Restart->setText(QCoreApplication::translate("MainWindows", "Restart", nullptr));
        radioButton_BFS->setText(QCoreApplication::translate("MainWindows", "BFS", nullptr));
        radioButton_DFS->setText(QCoreApplication::translate("MainWindows", "DFS", nullptr));
        radioButton_AstarM->setText(QCoreApplication::translate("MainWindows", "A*(\346\233\274\345\223\210\351\241\277)", nullptr));
        radioButton_AstarO->setText(QCoreApplication::translate("MainWindows", "A*(\346\254\247\346\260\217)", nullptr));
        radioButton_A->setText(QCoreApplication::translate("MainWindows", "A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindows: public Ui_MainWindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWS_H
