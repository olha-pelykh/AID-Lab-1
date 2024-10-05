#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "massive.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addButton_clicked();

    void on_sortButton_clicked();

    void displaySortTime(qint64 ms);
private:
    Ui::MainWindow *ui;
    massive studentList;
};

#endif // MAINWINDOW_H
