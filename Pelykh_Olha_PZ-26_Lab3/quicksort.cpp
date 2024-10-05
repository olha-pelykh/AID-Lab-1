#include "quicksort.h"
#include "qelapsedtimer.h"

void Swap(QString &a, QString &b) {
    QString temp = a;
    a = b;
    b = temp;
}

int partition(std::vector<QString>& list, int low, int high) {
    QString pivot = list[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (list[j] < pivot) {
            i++;
            swap(list[i], list[j]);
        }
    }
    Swap(list[i + 1], list[high]);
    return (i + 1);
}

void quickSort(std::vector<QString>& list, int low, int high) {
    if (low < high) {
        int pi = partition(list, low, high);
        quickSort(list, low, pi - 1);
        quickSort(list, pi + 1, high);
    }
}
