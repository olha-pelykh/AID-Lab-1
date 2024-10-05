#include "massive.h"
#include <iostream>
#include <ostream>

massive::massive(int size)
    : arr(size == 0 ? nullptr : new float[size]), size(size) {}

massive::~massive()
{
    delete[] arr;
}

void massive::fillRandom(){
    if (arr) {
        const float min = -100.0;
        const float max = 100.0;
        std::random_device rd;
        std::default_random_engine generator(rd());
        std::uniform_real_distribution<float> distribution(min, max);
        for (int i = 0; i < size; ++i) {
            arr[i] = distribution(generator);
        }
    }
}

QString massive::getArrayAsString() const
{
    QString result;
    if (arr) {
        for (int i = 0; i < size; ++i) {
            result += QString::number(arr[i], 'f', 3) + "  ";
        }
    }
    return result;
}



void massive::sortMerge(QElapsedTimer &timer) {
    timer.start();
    if (!arr || size <= 0) return;

    int firstNegativeIdx = -1;
    int lastNegativeIdx = -1;

    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            if (firstNegativeIdx == -1) {
                firstNegativeIdx = i;
            }
            lastNegativeIdx = i;
        }
    }

    if (firstNegativeIdx == -1 || lastNegativeIdx == -1 || firstNegativeIdx == lastNegativeIdx) {
        std::cerr << "Not enough negative elements to sort!" << std::endl;
        return;
    }

    mainMergeSort(arr, firstNegativeIdx+1, lastNegativeIdx-1, timer);

    qint64 elapsed = timer.elapsed();
    std::cout << "Elapsed time in milliseconds: " << elapsed << std::endl;
}

void massive::mainMergeSort(float* arr, int left, int right, QElapsedTimer &timer) {
    timer.start();
    if (left < right) {
        int middle = left + (right - left) / 2;

        mainMergeSort(arr, left, middle, timer);
        mainMergeSort(arr, middle + 1, right, timer);

        merge(arr, left, middle, right);
    }
    qint64 elapsed = timer.elapsed();
}

void massive::merge(float* arr, int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    float* L = new float[n1];
    float* R = new float[n2];

    for (int i = 0; i < n1; ++i)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; ++i)
        R[i] = arr[middle + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
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

    delete[] L;
    delete[] R;
}

