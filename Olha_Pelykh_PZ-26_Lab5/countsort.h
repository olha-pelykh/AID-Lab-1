#ifndef COUNTSORT_H // Check if COUNTSORT_H is not defined
#define COUNTSORT_H // Define COUNTSORT_H

#include "qelapsedtimer.h"
#include <QVector>
#include <QRandomGenerator>
#include <algorithm>

class CountSort {
public:
    CountSort(int evenCount, int oddCount);
    void fillRandom();
    void addEvenNumbers(const QVector<int>& evens);
    void addOddNumbers(const QVector<int>& odds);
    QVector<int> sort(QElapsedTimer &timer);
    QString getTwoDimensionalVectorsAsString() const;

private:
    QVector<QVector<int>> twoDimensionalVector;
    QVector<int> result;
    void countingSort(QVector<int>& arr);
};

#endif
