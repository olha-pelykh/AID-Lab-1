#ifndef MATRIX_H
#define MATRIX_H

#include "qelapsedtimer.h"
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <QString>

class Matrix {
public:
    Matrix(int rows, int cols);
    void fillRandom();
    void replaceMinElements(QElapsedTimer &timer);
    void shellSortColumns(QElapsedTimer &timer);
    QString toString() const;

private:
    int rows;
    int cols;
    std::vector<std::vector<double>> matrix;
};

#endif // MATRIX_H
