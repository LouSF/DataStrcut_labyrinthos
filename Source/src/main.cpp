//
// Created by 楼胜峰 on 2023/12/26.
//

#include <QApplication>
#include "mainwindows.h"
#include <chrono>
#include <thread>
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindows w;
    w.show();
    M.maze_solver({1,1}, {99,99},  4);

    w.repaint();

    return QApplication::exec();
}
