#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow),A(nullptr)
{
    ui->setupUi(this);
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete A;
}

void MainWindow::displaySortTime(qint64 ms)
{
    ui->SortTimeLabel->setText(QString::number(ms) + " ms");
}

void MainWindow::on_pushButton_clicked()
{
    delete A;
    int NumOfNum = ui->NumOfNumField->text().toInt();
    A = new massive(NumOfNum);
    A->fillRandom();
    ui->MasLabel->setText(A->getArrayAsString());

    if (A) {
        QElapsedTimer timer;
        A->sortMerge(timer);
        ui->SortedMasLabel->setText(A->getArrayAsString());
        displaySortTime(timer.elapsed());
    }
}

