//
// Created by 楼胜峰 on 2023/12/30.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindows.h" resolved

#include "mainwindows.h"



MainWindows::MainWindows(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::MainWindows) {
    ui->setupUi(this);
}

MainWindows::~MainWindows() {
    delete ui;
}


void MainWindows::on_pushButton_Input_clicked() {
    // 文件名将存为QString字符串格式
    QString fileNameInput = QFileDialog::getOpenFileName(this, //getOpenFileName获取文件名
                                                         tr("Input File"),
                                                         "~/",	// 默认位置为~
                                                         tr("Seismic(*.txt *.in *.out);;")); //创建文件名及路径选择对话窗口、支持的格式为segy

    ui -> terminal_message_output -> setText("输入文件\n" + fileNameInput + '\n');


    if (!fileNameInput.isEmpty()) {
        ui -> lineEdit_filepath_Input -> setText(fileNameInput);//将选择输入数据的文件名路径填入文本框
    }
}

void MainWindows::on_pushButton_Output_clicked() {
    // 文件名将存为QString字符串格式
    QString selectDir = QFileDialog::getExistingDirectory();

    if (!selectDir.isEmpty()) {
        ui -> lineEdit_filepath_Output -> setText(selectDir);//将选择输入数据的文件名路径填入文本框
    }
}




void MainWindows::paintEvent(QPaintEvent *) {
    QPainter painter(this);     //画笔对象
    painter.begin(this);
    int perblock = (std::min(ui -> maze -> width(), ui -> maze -> height()) - 20) / std::max(M.row, M.col);
    int start_x = ui->maze->x() + (ui->maze->width() - (ui->maze->x() + (std::max(M.row, M.col)) * perblock)) / 2;
    int strat_y = ui->maze->y() + (ui->maze->height() - (ui->maze->y() + (std::max(M.row, M.col)) * perblock)) / 2;
    M.maze_solver({1,1}, {99,99},  4);

    //#
    for (int i = 0; i < M.row; ++i) {
        for (int j = 0; j < M.col; ++j) {
            std::cout << M.data[i][j] << std::endl;
            if (M.data[i][j] == -1) {
                painter.fillRect(start_x + i * perblock, strat_y + j * perblock, perblock, perblock, QBrush(Qt::black));
            } else if (M.data[i][j] == 0) {
                painter.fillRect(start_x + i * perblock, strat_y + j * perblock, perblock, perblock, QBrush(Qt::gray));
            } else  {
                painter.fillRect(start_x + i * perblock, strat_y + j * perblock, perblock, perblock, QBrush(Qt::red));
            }

        }
    }
    painter.end();

}
