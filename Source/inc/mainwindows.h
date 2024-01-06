//
// Created by 楼胜峰 on 2023/12/30.
//

#ifndef UNTITLED142_MAINWINDOWS_H
#define UNTITLED142_MAINWINDOWS_H

#include <QMainWindow>


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
};


#endif //UNTITLED142_MAINWINDOWS_H
