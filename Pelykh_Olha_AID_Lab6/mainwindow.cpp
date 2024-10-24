#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sortmethods.h"
#include <random>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    ui->tableWidget->setColumnCount(6); // 5 sorting algorithms + 1 for original elements
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Elements" /*<< "Selection Sort"*/ << "Shell Sort" << "Quick Sort" << "Merge Sort" << "Count Sort");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fillRandom(QVector<int>& arr) {
    const int min = 0;
    const int max = 10000;
    std::random_device rd;
    std::default_random_engine generator(rd());
    std::uniform_int_distribution<int> distribution(min, max);

    for (int& element : arr) {
        element = distribution(generator);
    }
}

void MainWindow::SelectionSort(QVector<int> &arr) {
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
}

void MainWindow::ShellSort(QVector<int> &arr){
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
}

int MainWindow::partition(QVector<int> &arr, int low, int high){
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

void MainWindow::QuickSort(QVector<int> &arr, int low, int high){
    if (low < high) {
        int pi = partition(arr, low, high);
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}

void MainWindow::merge(QVector<int> &arr, int left, int mid, int right){
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

void MainWindow::MergeSort(QVector<int> &arr, int left, int right){
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    MergeSort(arr, left, mid);
    MergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

QVector<int> MainWindow::CountSort(QVector<int>& arr) {
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
    return outputArray;
}

void MainWindow::on_pushButton_clicked()
{
    int arrElements[7] = {1024, 4096, 16384, 65536, 262144, 1048576, 4194304}; // Adjusted to 3 elements
    for (int i = 0; i < 7; i++) {
        QVector<int> elapsedTimes;
        QVector<int> arr(arrElements[i], 0);
        fillRandom(arr);

        // Selection Sort
        // QVector<int> arrSelectionSort = arr;
        // QElapsedTimer timerSelectionSort;
        // timerSelectionSort.start();
        // SelectionSort(arrSelectionSort);
        // elapsedTimes.append(timerSelectionSort.elapsed());
        // qDebug() << "Selection sort time:" << elapsedTimes.last() << "ms";

        // Shell Sort
        QVector<int> arrShellSort = arr;
        QElapsedTimer timerShellSort;
        timerShellSort.start();
        ShellSort(arrShellSort);
        elapsedTimes.append(timerShellSort.elapsed());
        qDebug() << "Shell sort time:" << elapsedTimes.last() << "ms";

        // Quick Sort
        QVector<int> arrQuickSort = arr;
        QElapsedTimer timerQuickSort;
        timerQuickSort.start();
        QuickSort(arrQuickSort, 0, arrQuickSort.size() - 1);
        elapsedTimes.append(timerQuickSort.elapsed());
        qDebug() << "Quick sort time:" << elapsedTimes.last() << "ms";

        // Merge Sort
        QVector<int> arrMergeSort = arr;
        QElapsedTimer timerMergeSort;
        timerMergeSort.start();
        MergeSort(arrMergeSort, 0, arrMergeSort.size() - 1);
        elapsedTimes.append(timerMergeSort.elapsed());
        qDebug() << "Merge sort time:" << elapsedTimes.last() << "ms";

        // Count Sort
        QVector<int> arrCountSort = arr;
        QElapsedTimer timerCountSort;
        timerCountSort.start();
        CountSort(arrCountSort);
        elapsedTimes.append(timerCountSort.elapsed());
        qDebug() << "Count sort time:" << elapsedTimes.last() << "ms";

        displayTimersInTable(elapsedTimes, arrElements[i], i);
    }
}

void MainWindow::displayTimersInTable(const QVector<int>& elapsedTimes, int numElements, int row) {
    ui->tableWidget->setRowCount(row + 1);
    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(numElements)));

    for (int i = 0; i < elapsedTimes.size(); ++i) {
        ui->tableWidget->setItem(row, i + 1, new QTableWidgetItem(QString::number(elapsedTimes[i]) + " ms"));
    }
}


