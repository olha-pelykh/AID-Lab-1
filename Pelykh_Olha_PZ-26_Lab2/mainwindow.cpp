#include "mainwindow.h"
#include "matrix.h"
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

void MainWindow::displaySortTime(qint64 ms)
{
    ui->sortTimeLabel->setText(QString::number(ms) + " ms");
}

void MainWindow::on_sortButton_clicked()
{
    QElapsedTimer timer;
    int rows = ui->rowsField->text().toInt();
    int cols = ui->colsField->text().toInt();

    Matrix matrix(rows, cols);
    matrix.fillRandom();

    ui->matrixLabel->setText(matrix.toString());

    matrix.replaceMinElements(timer);
    matrix.shellSortColumns(timer);

    ui->sortedMatrixLAbel->setText(matrix.toString());
    displaySortTime(timer.elapsed());
}
