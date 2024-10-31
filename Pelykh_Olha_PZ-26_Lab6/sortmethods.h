#ifndef SORTMETHODS_H
#define SORTMETHODS_H

#include "qelapsedtimer.h"
#include <QVector>

class SortMethods
{
public:
    SortMethods();
    void SelectionSort(QVector<int> &arr, QVector<QElapsedTimer> &timers);
    void ShellSort(QVector<int> &arr, QVector<QElapsedTimer> &timers);
    void QuickSort(QVector<int> &arr, int low, int high, QVector<QElapsedTimer> &timers);
    void QuickSort(QVector<int> &arr, int low, int high);
    void MergeSort(QVector<int> &arr, int left, int right, QVector<QElapsedTimer> &timers);
    void MergeSort(QVector<int> &arr, int left, int right);
    QVector<int> CountSort(QVector<int>& arr, QVector<QElapsedTimer> &timers);
private:
    int partition(QVector<int> &arr, int low, int high);
    void merge(QVector<int> &arr, int left, int mid, int right);
};

#endif // SORTMETHODS_H
