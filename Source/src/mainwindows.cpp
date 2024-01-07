//
// Created by 楼胜峰 on 2023/12/30.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindows.h" resolved

#include "mainwindows.h"
#include "../UI/ui_MainWindows.h"


MainWindows::MainWindows(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::MainWindows) {
    ui->setupUi(this);
}

MainWindows::~MainWindows() {
    delete ui;
}
