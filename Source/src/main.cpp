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

    w.repaint();

    return QApplication::exec();
}
