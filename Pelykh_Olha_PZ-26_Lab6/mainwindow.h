#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qelapsedtimer.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void fillRandom(QVector<int>& arr);
    void SelectionSort(QVector<int> &arr);
    void ShellSort(QVector<int> &arr);
    void QuickSort(QVector<int> &arr, int low, int high);
    void MergeSort(QVector<int> &arr, int left, int right);
    void displayTimersInTable(const QVector<int>& elapsedTimes, int numElements, int row);
    QVector<int> CountSort(QVector<int>& arr);
private slots:
    void on_pushButton_clicked();
private:
    Ui::MainWindow *ui;
    int partition(QVector<int> &arr, int low, int high);
    void merge(QVector<int> &arr, int left, int mid, int right);
};
#endif // MAINWINDOW_H
