#ifndef MASSIVE_H
#define MASSIVE_H
#include "mainwindow.h"

#include <QMainWindow>

class MainWindow;

class massive {
private:
    float* arr;
    int size;
public:
    massive(int size = 0);
    ~massive();
    void fillRandom();
    QString getArrayAsString() const;
    void sortMerge(QElapsedTimer &timer);
    void mainMergeSort(float *arr, int left, int right, QElapsedTimer &timer);
    void merge(float* arr, int left, int middle, int right);
};


#endif // MASSIVE_H
