#include "mainwindow.h"
#include "countsort.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_SortButton_clicked()
{
    QElapsedTimer timer;
    int evenInput = ui->firstArrayEdit->text().toInt();
    int oddInput = ui->SecondArrayEdit->text().toInt();
    \
    CountSort Array(evenInput, oddInput);
    Array.fillRandom();
    Array.sort(timer);
    QString result = Array.getTwoDimensionalVectorsAsString();
    ui->SortedArrayLabel->setText(result);
    displaySortTime(timer.elapsed());
}

void MainWindow::displaySortTime(qint64 ms)
{
    ui->SortTimeLabel->setText(QString::number(ms) + " ms");
}

