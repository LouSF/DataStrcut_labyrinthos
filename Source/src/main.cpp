//
// Created by 楼胜峰 on 2023/12/26.
//

#include <QApplication>
#include "mainwindows.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindows w;
    w.show();
    std::cout << "fg" << std::endl;
    return QApplication::exec();
}
