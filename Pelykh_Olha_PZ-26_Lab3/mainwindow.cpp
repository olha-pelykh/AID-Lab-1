#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <ctime>
#include <QString>
#include <QElapsedTimer>
#include <random>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displaySortTime(qint64 ms)
{
    ui->SortTimeLabel->setText(QString::number(ms) + " ms");
}

void MainWindow::on_addButton_clicked()
{
    QString studentName = ui->nameLine->text();
    int studentAssessmen = ui->assessmenLine->text().toInt();
    QString studentInfo;
    studentList.AddStudent(studentName, studentAssessmen);
    const std::vector<student>& students = studentList.GetStudents();

    for (const student& student : students) {
        studentInfo += student.getName() + " - " + QString::number(student.getAssessmen()) + "\n";
    }
    ui->ShowLabel->setText(studentInfo);
}

void MainWindow::on_sortButton_clicked()
{
    QElapsedTimer timer;
    QString studentInfo;
    const std::vector<student>& students = studentList.GetStudents();

    studentList.sortStudentsByName(timer);

    for (const student& student : students) {
        if(student.getAssessmen()>=4){
            studentInfo += student.getName() + " - " + QString::number(student.getAssessmen()) + "\n";
        }
    }

    ui->SortLabel->setText(studentInfo);
}

