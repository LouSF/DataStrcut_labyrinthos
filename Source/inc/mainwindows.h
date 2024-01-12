//
// Created by 楼胜峰 on 2023/12/30.
//

#ifndef DATASTRCUT_LABYRINTHOS_MAINWINDOWS_H
#define DATASTRCUT_LABYRINTHOS_MAINWINDOWS_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QProcess>
#include <QPainter>

#include "Matrix_lab.h"

#include "../UI/ui_MainWindows.h"


static Matrix_lab M = random_creater_Matrix(5, 5, 1);

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindows; }
QT_END_NAMESPACE

class MainWindows : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindows(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *) override;

    ~MainWindows() override;

private:
    Ui::MainWindows *ui;

    QString fileNameInput;
    QString selectDir;


private slots:

    void on_pushButton_Input_clicked();  //输入文件
    void on_pushButton_Output_clicked(); //输出文件
    void on_pushButton_creator_clicked(); //生成迷宫
    void on_pushButton_RUN_clicked(); //求解
    void on_pushButton_Restart_clicked(); //重新开始
    void on_pushButton_Input_run_clicked();
    void on_pushButton_Output_run_clicked();
};

#endif //DATASTRCUT_LABYRINTHOS_MAINWINDOWS_H
