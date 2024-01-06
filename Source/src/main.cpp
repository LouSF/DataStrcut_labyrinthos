
#include <QApplication>
#include "mainwindows.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindows w;
    w.show();
    return QApplication::exec();
}
