#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <ctime>
#include <QElapsedTimer>
#include <random>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), A(nullptr)
{
    ui->setupUi(this);
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete A;
}

void MainWindow::on_OkButton_clicked()
{
    delete A;
    int NumOfNum = ui->NumOfNumField->text().toInt();
    A = new massive(NumOfNum);
    A->fillRandom();
    ui->MasLabel->setText(A->getArrayAsString());
}

void MainWindow::on_SortButton_clicked()
{
    if (A) {
        QElapsedTimer timer;
        A->setSin();
        A->sortSelection(timer);
        ui->SortedMasLabel->setText(A->getArrayAsString());
        displaySortTime(timer.elapsed());
    }
}

void MainWindow::displaySortTime(qint64 ms)
{
    ui->SortTimeLabel->setText(QString::number(ms) + " ms");
}

massive::massive(int size)
    : arr(size == 0 ? nullptr : new float[size]), size(size) {}

massive::~massive()
{
    delete[] arr;
}


void massive::fillRandom()
{
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

void massive::setSin()
{
    for(int i = 0; i < size; ++i){
        if(arr[i] < 0){
            arr[i] = qSin(arr[i]);
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

void massive::sortSelection(QElapsedTimer &timer)
{
    timer.start();
    if (!arr) return;
    for (int i = 0; i < size - 1; ++i) {
        int max_index = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }
        if (max_index != i) {
            std::swap(arr[i], arr[max_index]);
        }
    }
    qint64 elapsed = timer.elapsed();
}
