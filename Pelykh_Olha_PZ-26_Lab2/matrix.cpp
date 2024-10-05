#include "matrix.h"
#include <cstdlib>

Matrix::Matrix(int rows, int cols) : rows(rows), cols(cols) {
    matrix.resize(rows, std::vector<double>(cols));
    std::srand(static_cast<unsigned>(std::time(nullptr)));
}

void Matrix::fillRandom() {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = static_cast<double>(rand() % 200 - 100);
        }
    }
}

void Matrix::replaceMinElements(QElapsedTimer &timer) {
    timer.start();
    for (auto& row : matrix) {
        auto min_it = std::min_element(row.begin(), row.end());
        *min_it = std::log(std::abs(*min_it));
    }
    qint64 elapsed = timer.elapsed();
}

void Matrix::shellSortColumns(QElapsedTimer &timer) {
    timer.start();
    for (int gap = cols / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < cols; ++i) {
            for (int j = i - gap; j >= 0 && matrix[0][j] > matrix[0][j + gap]; j -= gap) {
                for (int k = 0; k < rows; ++k) {
                    std::swap(matrix[k][j], matrix[k][j + gap]);
                }
            }
        }
    }
    qint64 elapsed = timer.elapsed();
}

QString Matrix::toString() const {
    QString matrixStr;
    for (const auto& row : matrix) {
        for (double val : row) {
            matrixStr += QString::number(val, 'f', 3) + " ";
        }
        matrixStr += "\n";
    }
    return matrixStr;
}
