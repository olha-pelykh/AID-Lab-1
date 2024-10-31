#include "mainwindow.h"
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

void MainWindow::on_backButton_clicked()
{
    bool ok;
    int value = ui->enterEdit->text().toInt(&ok);

    if (ok) {
        if (deque.findElement(value) == -1) {
            deque.push_back(value);
            ui->dequeLabel->setText("Deque: " + deque.getContents());
            ui->enterEdit->clear();
        } else {
            QMessageBox::warning(this, "Duplicate Element", "The element already exists in the deque.");
        }
    } else {
        QMessageBox::warning(this, "Invalid input", "Please enter a valid integer.");
    }
}

void MainWindow::on_frontButton_clicked()
{
    bool ok;
    int value = ui->enterEdit->text().toInt(&ok);

    if (ok) {
        if (deque.findElement(value) == -1) {
            deque.push_front(value);
            ui->dequeLabel->setText("Deque: " + deque.getContents());
            ui->enterEdit->clear();
        } else {
            QMessageBox::warning(this, "Duplicate Element", "The element already exists in the deque.");
        }
    } else {
        QMessageBox::warning(this, "Invalid input", "Please enter a valid integer.");
    }
}

void MainWindow::on_showButton_clicked()
{
    int size = deque.getSize();
    ui->dequeInfoLabel->setText("");
    ui->dequeInfoLabel->setText("Size: " + QString::number(size));

    if (deque.getSize() > 0) {
        int min = deque.getMin();
        int max = deque.getMax();
        QString currentText = ui->dequeInfoLabel->text();
        QString newText = currentText + "\nMin: " + QString::number(min) + ", Max: " + QString::number(max);
        ui->dequeInfoLabel->setText(newText);
    } else {
        QMessageBox::information(this, "Empty Deque", "The deque is empty.");
    }

    if (deque.getSize() >= 3) {
        int thirdElement = deque.getElement(2);
        int secondLastElement = deque.getElement(deque.getSize() - 2);

        QString currentText = ui->dequeInfoLabel->text();

        QString newText = currentText + "\nThird element: " + QString::number(thirdElement) +
                          "\nSecond last element: " + QString::number(secondLastElement);

        ui->dequeInfoLabel->setText(newText);
    } else {
        QMessageBox::information(this, "Insufficient Elements", "The deque must have at least 3 elements.");
    }

    if (deque.getSize() > 0) {
        int minIndex = deque.findElement(deque.getMin());
        int maxIndex = deque.findElement(deque.getMax());

        QString currentText = ui->dequeInfoLabel->text();

        if (minIndex > 0) {
            int beforeMin = deque.getElement(minIndex - 1);
            QString newText = currentText + "\nElement before min: " + QString::number(beforeMin);
            ui->dequeInfoLabel->setText(newText);
        }

        if (maxIndex != -1 && maxIndex < deque.getSize() - 1) {
            int afterMax = deque.getElement(maxIndex + 1);
            QString newText = ui->dequeInfoLabel->text();
            newText += "\nElement after max: " + QString::number(afterMax);
            ui->dequeInfoLabel->setText(newText);
        }
    } else {
        QMessageBox::information(this, "Empty Deque", "The deque is empty.");
    }
}

void MainWindow::on_findButton_clicked()
{
    int value = ui->findEdit->text().toInt();
    int index = deque.findElement(value);
    if (index != -1) {
        QString message = QString::number(index+1);
        ui->findLabel->setText(message);
    } else {
        QMessageBox::warning(this, "Element Not Found", "Element " + QString::number(value) + " not found in the deque.");
    }
}



void MainWindow::on_backButton_2_clicked()
{
    bool ok;
    int value = ui->enterEdit_2->text().toInt(&ok);

    if (ok) {
        if (deque2.findElement(value) == -1) {
            deque2.push_back(value);
            ui->dequeLabel_2->setText("Deque: " + deque2.getContents());
            ui->enterEdit_2->clear();
        } else {
            QMessageBox::warning(this, "Duplicate Element", "The element already exists in the deque.");
        }
    } else {
        QMessageBox::warning(this, "Invalid input", "Please enter a valid integer.");
    }
}

void MainWindow::on_frontButton_2_clicked()
{
    bool ok;
    int value = ui->enterEdit_2->text().toInt(&ok);

    if (ok) {
        if (deque2.findElement(value) == -1) {
            deque2.push_front(value);
            ui->dequeLabel_2->setText("Deque: " + deque2.getContents());
            ui->enterEdit_2->clear();
        } else {
            QMessageBox::warning(this, "Duplicate Element", "The element already exists in the deque.");
        }
    } else {
        QMessageBox::warning(this, "Invalid input", "Please enter a valid integer.");
    }
}

void MainWindow::on_showButton_2_clicked()
{
    int size = deque2.getSize();
    ui->dequeInfoLabel_2->setText("");
    ui->dequeInfoLabel_2->setText("Size: " + QString::number(size));

    if (deque2.getSize() > 0) {
        int min = deque2.getMin();
        int max = deque2.getMax();
        ui->dequeInfoLabel_2->setText("");
        QString currentText = ui->dequeInfoLabel_2->text();
        QString newText = currentText + "\nMin: " + QString::number(min) + ", Max: " + QString::number(max);
        ui->dequeInfoLabel_2->setText(newText);
    } else {
        QMessageBox::information(this, "Empty Deque", "The deque is empty.");
    }

    if (deque2.getSize() >= 3) {
        int thirdElement = deque2.getElement(2);
        int secondLastElement = deque2.getElement(deque2.getSize() - 2);

        QString currentText = ui->dequeInfoLabel_2->text();

        QString newText = currentText + "\nThird element: " + QString::number(thirdElement) +
                          "\nSecond last element: " + QString::number(secondLastElement);

        ui->dequeInfoLabel_2->setText(newText);
    } else {
        QMessageBox::information(this, "Insufficient Elements", "The deque must have at least 3 elements.");
    }

    if (deque2.getSize() > 0) {
        int minIndex = deque2.findElement(deque2.getMin());
        int maxIndex = deque2.findElement(deque2.getMax());

        QString currentText = ui->dequeInfoLabel_2->text();

        if (minIndex > 0) {
            int beforeMin = deque2.getElement(minIndex - 1);
            QString newText = currentText + "\nElement before min: " + QString::number(beforeMin);
            ui->dequeInfoLabel_2->setText(newText);
        }

        if (maxIndex != -1 && maxIndex < deque.getSize() - 1) {
            int afterMax = deque2.getElement(maxIndex + 1);
            QString newText = ui->dequeInfoLabel_2->text();
            newText += "\nElement after max: " + QString::number(afterMax);
            ui->dequeInfoLabel_2->setText(newText);
        }
    } else {
        QMessageBox::information(this, "Empty Deque", "The deque is empty.");
    }
}



void MainWindow::on_findButton_2_clicked()
{
    int value = ui->findEdit_2->text().toInt();
    int index = deque2.findElement(value);
    if (index != -1) {
        QString message = QString::number(index+1);
        ui->findLabel_2->setText(message);
    } else {
        QMessageBox::warning(this, "Element Not Found", "Element " + QString::number(value) + " not found in the deque.");
    }
}

void MainWindow::on_mergeButton_clicked() {

    for (int i = 0; i < deque.getSize(); i++) {
        deque3.push_back(deque.getElement(i));
    }
    for (int i = 0; i < deque2.getSize(); i++) {
        deque3.push_back(deque2.getElement(i));
    }

    QString mergedInfo;
    for (int i = 0; i < deque3.getSize(); i++) {
        mergedInfo += QString::number(deque3.getElement(i)) + " ";
    }

    ui->dequeMergeLabel->setText("Merged Deque: " + mergedInfo);
}

