#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QElapsedTimer>
#include <QtMath>


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
    void on_OkButton_clicked();

    void on_SortButton_clicked();

    void displaySortTime(qint64 ms);

private:
    Ui::MainWindow *ui;
    class massive* A;
};

class massive {
private:
    float* arr;
    int size;
public:
    massive(int size = 0);
    ~massive();
    void fillRandom();
    void setSin();
    QString getArrayAsString() const;
    void sortSelection(QElapsedTimer &timer);
};

#endif // MAINWINDOW_H
