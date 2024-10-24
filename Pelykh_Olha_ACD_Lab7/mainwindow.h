#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "deque.h"
#include <QMainWindow>
#include <QMessageBox>

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

private slots:
    void on_backButton_clicked();
    void on_frontButton_clicked();
    void on_showButton_clicked();
    void on_findButton_clicked();

    void on_backButton_2_clicked();
    void on_frontButton_2_clicked();
    void on_showButton_2_clicked();
    void on_findButton_2_clicked();

    void on_mergeButton_clicked();

private:
    Ui::MainWindow *ui;
    Deque deque;
    Deque deque2;
    Deque deque3;
};
#endif // MAINWINDOW_H
