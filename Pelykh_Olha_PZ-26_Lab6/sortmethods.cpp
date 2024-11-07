#include "sortmethods.h"
#include "qdebug.h"
#include <random>

SortMethods::SortMethods() {}

void SortMethods::SelectionSort(QVector<int> &arr, QVector<QElapsedTimer> &timers) {
    QElapsedTimer timer;
    timer.start();
    timers.append(timer);
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        std::swap(arr[i], arr[min_idx]);
    }
    qint64 elapsed = timer.elapsed();
    qDebug() << "Selection sort time:" << elapsed << "ms";
}

void SortMethods::ShellSort(QVector<int> &arr, QVector<QElapsedTimer> &timers){
    QElapsedTimer timer;
    timer.start();
    timers.append(timer);
    int n = arr.size();
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
    qint64 elapsed = timer.elapsed();
    qDebug() << "Selection sort time:" << elapsed << "ms";
}

int SortMethods::partition(QVector<int> &arr, int low, int high){
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void SortMethods::QuickSort(QVector<int> &arr, int low, int high, QVector<QElapsedTimer> &timers){
    QElapsedTimer timer;
    timer.start();
    timers.append(timer);
    if (low < high) {
        int pi = partition(arr, low, high);
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
    qint64 elapsed = timer.elapsed();
    qDebug() << "Selection sort time:" << elapsed << "ms";
}

void SortMethods::QuickSort(QVector<int> &arr, int low, int high){
    if (low < high) {
        int pi = partition(arr, low, high);
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}

void SortMethods::merge(QVector<int> &arr, int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    QVector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void SortMethods::MergeSort(QVector<int> &arr, int left, int right, QVector<QElapsedTimer> &timers){
    QElapsedTimer timer;
    timer.start();
    timers.append(timer);
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    MergeSort(arr, left, mid);
    MergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
    qint64 elapsed = timer.elapsed();
    qDebug() << "Selection sort time:" << elapsed << "ms";
}
void SortMethods::MergeSort(QVector<int> &arr, int left, int right){

    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    MergeSort(arr, left, mid);
    MergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

QVector<int> SortMethods::CountSort(QVector<int>& arr, QVector<QElapsedTimer> &timers) {
    QElapsedTimer timer;
    timer.start();
    int N = arr.size();
    int M = 0;
    for (int i = 0; i < N; i++)
        M = std::max(M, arr[i]);

    QVector<int> countArray(M + 1, 0);

    for (int i = 0; i < N; i++)
        countArray[arr[i]]++;

    for (int i = 1; i <= M; i++)
        countArray[i] += countArray[i - 1];

    QVector<int> outputArray(N);
    for (int i = N - 1; i >= 0; i--) {
        outputArray[countArray[arr[i]] - 1] = arr[i];
        countArray[arr[i]]--;
    }
    qint64 elapsed = timer.elapsed();
    qDebug() << "Selection sort time:" << elapsed << "ms";
    return outputArray;
}
