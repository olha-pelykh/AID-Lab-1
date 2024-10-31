#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "countsort.h"

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
    void on_SortButton_clicked();
    void displaySortTime(qint64 ms);
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
