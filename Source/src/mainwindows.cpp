//
// Created by 楼胜峰 on 2023/12/30.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindows.h" resolved

#include "mainwindows.h"



MainWindows::MainWindows(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::MainWindows) {
    ui->setupUi(this);

    ui -> radioButton_BFS -> setChecked(true); // 模式初始化 solver

    ui -> radioButton_Prim ->setChecked(true); // 模式初始化 creator

}

MainWindows::~MainWindows() {
    delete ui;
}

void MainWindows::on_pushButton_creator_clicked(){

    ui -> lineEdit_filepath_Input ->setText("");

    int button_mode = 1;
    if (ui -> radioButton_Prim -> isChecked()) button_mode = 1;
    else if (ui -> radioButton_RandPrim -> isChecked()) button_mode = 2;

    int _row = (ui -> lineEdit_creator_row -> text()).toInt();
    int _col = (ui -> lineEdit_creator_col -> text()).toInt();

    if (!(_row <= 500 && _row >= 3 && _col <= 500 && _col >= 3)) {
        ui -> terminal_message_output -> append("数据范围违法！ \n");
        return;
    }


    M = random_creater_Matrix(_row, _col, button_mode);

    ui -> lineEdit_point_start_x -> setText("1");
    ui -> lineEdit_point_start_y -> setText("1");
    ui -> lineEdit_point_target_x -> setText(QString::number(M.row - 2));
    ui -> lineEdit_point_target_y -> setText(QString::number(M.col - 2));

    update();

    ui -> terminal_message_output -> append("生成成功！ \n");
}

void MainWindows::on_pushButton_RUN_clicked(){
    on_pushButton_Restart_clicked();

    int radio_mode = 1;
    if (ui -> radioButton_BFS -> isChecked()) radio_mode = 1;
    if (ui -> radioButton_DFS -> isChecked()) radio_mode = 2;
    if (ui -> radioButton_AstarM -> isChecked()) radio_mode = 3;
    if (ui -> radioButton_AstarO -> isChecked()) radio_mode = 4;
    if (ui -> radioButton_A -> isChecked()) radio_mode = 5;

    int start_point_x = (ui -> lineEdit_point_start_x -> text()).toInt();
    int start_point_y = (ui -> lineEdit_point_start_y -> text()).toInt();
    int target_point_x = (ui -> lineEdit_point_target_x -> text()).toInt();
    int target_point_y = (ui -> lineEdit_point_target_y -> text()).toInt();

    if (!(start_point_x > 0 && start_point_x < M.row - 1 && start_point_y > 0 && start_point_y < M.col - 1 &&
    target_point_x > 0 && target_point_x < M.row - 1 && target_point_y > 0 && target_point_y < M.col - 1 )) {
        ui -> terminal_message_output -> append("起点或终点非法！ \n");
        return;
    }

    M.maze_solver({start_point_x, start_point_y, 1}, {target_point_x, target_point_y},  radio_mode);

    ui -> terminal_message_output -> append("完成！ \n");

    update();

}

void MainWindows::on_pushButton_Restart_clicked(){
    M.restart_maze();
    update();
}

void MainWindows::on_pushButton_Input_clicked() {
    // 文件名将存为QString字符串格式
    fileNameInput = QFileDialog::getOpenFileName(this, //getOpenFileName获取文件名
                                                         tr("Input File"),
                                                         "~/",	// 默认位置为~
                                                         tr("Seismic(*.txt *.in *.out);;")); //创建文件名及路径选择对话窗口、支持的格式为segy

    ui -> terminal_message_output -> append("输入文件: " + fileNameInput + '\n');

    if (!fileNameInput.isEmpty()) {
        ui -> lineEdit_filepath_Input -> setText(fileNameInput);//将选择输入数据的文件名路径填入文本框
    }

}

void MainWindows::on_pushButton_Input_run_clicked(){

    fileNameInput = ui -> lineEdit_filepath_Input -> text();

    if (!(fileNameInput.endsWith(".in") || fileNameInput.endsWith(".txt") || fileNameInput.endsWith(".out")) || fileNameInput.isEmpty()) {
        ui -> terminal_message_output -> append("需要指定(*.txt *.in *.out)文件！\n");
        return;
    }

    std::string file_path = fileNameInput.toStdString();
    M = file_input_Matrix(file_path);

    if (!M.data_click) {
        ui -> terminal_message_output -> append("输入数据有误！\n已重置\n");
        M = random_creater_Matrix(5, 5, 1);
    } else {
        ui -> terminal_message_output -> append("输入成功！\n");
    }

    update();

    ui -> lineEdit_point_start_x -> setText("1");
    ui -> lineEdit_point_start_y -> setText("1");
    ui -> lineEdit_point_target_x -> setText(QString::number(M.row - 2));
    ui -> lineEdit_point_target_y -> setText(QString::number(M.col - 2));
}

void MainWindows::on_pushButton_Output_clicked() {
    // 文件名将存为QString字符串格式
    selectDir = QFileDialog::getExistingDirectory();

    ui -> terminal_message_output -> append("输出文件夹: " + selectDir + '\n');

    if (!selectDir.isEmpty()) {
        ui -> lineEdit_filepath_Output -> setText(selectDir);//将选择输入数据的文件名路径填入文本框
    }
}

void MainWindows::on_pushButton_Output_run_clicked() {

    selectDir = ui -> lineEdit_filepath_Output -> text();

    if (selectDir.isEmpty()) {
        ui -> terminal_message_output -> append("需要指定文件夹！\n");
        return;
    }

    std::time_t current_time = std::time(nullptr);
    std::string Path = selectDir.toStdString() + "/maze_" + std::to_string(current_time) + ".in";
    M.file_output_Matrix(Path);

    ui -> terminal_message_output -> append("输出成功！\n" + QString::fromStdString(Path) + "\n");
}





void MainWindows::paintEvent(QPaintEvent *) {
    QPainter painter(this);     //画笔对象
    painter.begin(this);
    int perblock = (std::min(ui -> maze -> width(), ui -> maze -> height()) - 20) / std::max(M.row, M.col);
    int start_x = ui->maze->x() + (ui->maze->width() - (ui->maze->x() + (std::max(M.row, M.col)) * perblock)) / 2;
    int strat_y = ui->maze->y() + (ui->maze->height() - (ui->maze->y() + (std::max(M.row, M.col)) * perblock)) / 2;
    //#
    for (int i = 0; i < M.row; ++i) {
        for (int j = 0; j < M.col; ++j) {
//            std::cout << M.data[i][j] << std::endl;
            if (M.data[i][j] == -1) {
                painter.fillRect(start_x + i * perblock, strat_y + j * perblock, perblock, perblock, QBrush(Qt::black));
            } else if (M.data[i][j] == -2) {
                painter.fillRect(start_x + i * perblock, strat_y + j * perblock, perblock, perblock, QBrush(Qt::blue));
            } else if (M.data[i][j] == 0) {
                painter.fillRect(start_x + i * perblock, strat_y + j * perblock, perblock, perblock, QBrush(Qt::gray));
            } else  {
                painter.fillRect(start_x + i * perblock, strat_y + j * perblock, perblock, perblock, QBrush(Qt::red));
            }
        }
    }

    painter.end();
}


