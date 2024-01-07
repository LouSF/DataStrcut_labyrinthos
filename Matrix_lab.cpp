//
// Created by 楼胜峰 on 2023/12/26.
//


#include "Matrix_lab.h"


void Matrix_lab::file_output_Matrix(const std::string &file_PATH) {

    std::ofstream fout;
    fout.open(file_PATH);

    if(fout.fail()) {
        std::cerr << "open file error! can't write file!" << std::endl;
        fout.close();
        return;
    }

    fout << row << ' ' << col << std::endl;

    for (const std::vector<int> &temp_out : data) {
        for (const int &out_number : temp_out)
            fout << out_number << ' ';
        fout << std::endl;
    }

    fout.close();

}
Matrix_lab file_input_Matrix(const std::string &file_PATH) {

    std::ifstream fin;
    fin.open(file_PATH);
    if(fin.fail()) {
        std::cerr << "open file error! can't find file!" << std::endl;
        fin.close();
        return {0, 0};
    }

    int _row, _col;
    fin >> _row  >> _col;

    Matrix_lab M(_row, _col);

    if (_row > Matrix_lab::Matrix_MAX_row || _col > Matrix_lab::Matrix_MAX_col ) {
        std::cerr << "out of max range!" << std::endl;
        return {0, 0};
    }

    if (_row < Matrix_lab::Matrix_MIN_row || _col < Matrix_lab::Matrix_MIN_col ) {
        std::cerr << "matrix too mini!" << std::endl;
        return {0, 0};
    }

    for (int i = 0; i < _row; ++i)
        for (int j = 0; j < _col; ++j)
            fin >> M.data[i][j];

    fin.close();
    return M;
}

std::vector<std::vector<int>> Prim_Creator(const int _row, const int _col) {

    std::vector<std::vector<int>> map = std::vector<std::vector<int>>(_row,std::vector<int>(_col,-1));
    //[_row][_col]
    // wall = -1
    // road = 1
    // 迷宫init

    for (int i = 0; i < _row; ++i)
        for (int j = 0; j < _col; ++j)
            if (i & 1 && j & 1)
                map[i][j] = 1;
    // 迷宫init
    // 未初始化 road = 1
    // after init road = 1

    const int dir_p_x[] = {-1, 0, 1, 0};
    const int dir_p_y[] = {0, 1, 0, -1};
    // left, up, right, down


    std::srand((unsigned)time(nullptr));

    std::vector<Matrix_Point> Prim_stack;

    // 左上 与 右下 Now_point = start
    Matrix_Point Now_point = {1, 1, 0};
    map[1][1] = 0;

    do {

        for (int i = 0; i < 4; ++i) {
            int prex = Now_point.x + dir_p_x[i] * 2;
            int prey = Now_point.y + dir_p_y[i] * 2;

            if (prex > 0 && prey > 0 && prex < _row && prey < _col)
                if (map[prex][prey] == 1)
                    Prim_stack.emplace_back(prex ,prey, 1, i);
        }

        int randnum = rand() % (int)Prim_stack.size();

        Matrix_Point NextRoad = Prim_stack[randnum];
        if (map[NextRoad.x][NextRoad.y] == 1) {
            map[NextRoad.x][NextRoad.y] = 0;
            map[NextRoad.x - dir_p_x[NextRoad.dir]][NextRoad.y - dir_p_y[NextRoad.dir]] = 0;
//            map[(NextRoad.x + Now_point.x) / 2][(NextRoad.y + Now_point.y) / 2] = 0;
        }

        Now_point = NextRoad;

        Prim_stack.erase(Prim_stack.begin() + randnum);

    } while(!Prim_stack.empty());

    return map;
}


Matrix_lab random_creater_Matrix(int _row, int _col, int MODE) {
    if (_row > Matrix_lab::Matrix_MAX_row || _col > Matrix_lab::Matrix_MAX_col) {
        std::cerr << "out of max range!" << std::endl;
        return {0, 0};
    }

    if (_row < Matrix_lab::Matrix_MIN_row || _col < Matrix_lab::Matrix_MIN_col) {
        std::cerr << "matrix too mini!" << std::endl;
        return {0, 0};
    }

    ((_row /= 2) *= 2) += 1;
    ((_col /= 2) *= 2) += 1;

    Matrix_lab M(_row, _col);

    if (MODE == 1)
        M.data = Prim_Creator(_row, _col);

    if (MODE == 2)
        ;

    if (MODE == 3)
        ;

    return M;
}



