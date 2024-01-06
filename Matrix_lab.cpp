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

    for (int i = 0; i < _row; ++i)
        for (int j = 0; j < _col; ++j)
            fin >> M.data[i][j];

    fin.close();
    return M;
}

void random_creater_Matrix() {

}