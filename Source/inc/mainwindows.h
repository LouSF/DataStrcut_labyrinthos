//
// Created by 楼胜峰 on 2023/12/30.
//

#ifndef DATASTRCUT_LABYRINTHOS_MAINWINDOWS_H
#define DATASTRCUT_LABYRINTHOS_MAINWINDOWS_H

#include <QMainWindow>
#include <QFileDialog>
#include <QProcess>

#include "Matrix_lab.h"

#include "../UI/ui_MainWindows.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindows; }
QT_END_NAMESPACE

class MainWindows : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindows(QWidget *parent = nullptr);

    ~MainWindows() override;

private:
    Ui::MainWindows *ui;

private slots:

    void on_pushButton_Input_clicked();  //输入文件
    void on_pushButton_Output_clicked(); //输出文件


};


#endif //DATASTRCUT_LABYRINTHOS_MAINWINDOWS_H
