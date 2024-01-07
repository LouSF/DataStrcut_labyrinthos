//
// Created by 楼胜峰 on 2023/12/26.
//

#ifndef DATASTRCUT_LABYRINTHOS_MATRIX_LAB_H
#define DATASTRCUT_LABYRINTHOS_MATRIX_LAB_H

#include <vector>
#include <iostream>
#include <istream>
#include <ostream>
#include <fstream>
#include <queue>
#include <random>
#include <ctime>


struct Matrix_Point {
    int x;
    int y;
    int block_type; // 在solver中解释为father(in vector)
    int dir; // in solver as visit //4 is not visit //0 is visited
    Matrix_Point(int _x, int _y, int type = 0, int _dir = 4) : x(_x), y(_y), block_type(type), dir(_dir) {}
};

struct cmp_openTable {
    bool operator()(const Matrix_Point &a, const Matrix_Point &b) {
        return a.block_type < b.block_type;
    }
};




class Matrix_lab {
    static const int Matrix_MAX_row = 10000;
    static const int Matrix_MAX_col = 10000;
    static const int Matrix_MIN_row = 2;
    static const int Matrix_MIN_col = 2;
    std::vector<std::vector<int>> data;
    int row = 0, col = 0;
    // data[row][col]
    // row and col 无法取到！ x - 1
    Matrix_lab(int _row, int _col) : row(_row), col(_col){}

public:
    void file_output_Matrix(const std::string &file_PATH);
    friend Matrix_lab file_input_Matrix(const std::string &file_PATH);
    friend Matrix_lab random_creater_Matrix(int _row, int _col, int MODE);
    std::vector<int> maze_solver(Matrix_Point start_point, Matrix_Point target_Point);
};

Matrix_lab random_creater_Matrix(int _row, int _col, int MODE);
Matrix_lab file_input_Matrix(const std::string &file_PATH);

#endif //DATASTRCUT_LABYRINTHOS_MATRIX_LAB_H
