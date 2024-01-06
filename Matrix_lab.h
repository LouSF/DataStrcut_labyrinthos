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


class Matrix_lab {
    static const int Matrix_MAX_row = 10000;
    static const int Matrix_MAX_col = 10000;
    std::vector<std::vector<int>> data;
    int row = 0, col = 0;
    // data[row][col]

public:
    Matrix_lab(int _row, int _col) : row(_row), col(_col){}
    void file_output_Matrix(const std::string &file_PATH);
    friend Matrix_lab file_input_Matrix(const std::string &file_PATH);
    void random_creater_Matrix(int _row, int _col);
    // open table
    // close table
};


#endif //DATASTRCUT_LABYRINTHOS_MATRIX_LAB_H
