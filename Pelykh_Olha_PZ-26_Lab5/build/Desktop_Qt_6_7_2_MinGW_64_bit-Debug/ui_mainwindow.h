/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *SortedArrayLabel;
    QLabel *label;
    QLineEdit *firstArrayEdit;
    QLineEdit *SecondArrayEdit;
    QPushButton *SortButton;
    QLabel *SortTimeLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(39, 159, 721, 401));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        SortedArrayLabel = new QLabel(groupBox);
        SortedArrayLabel->setObjectName("SortedArrayLabel");
        SortedArrayLabel->setGeometry(QRect(10, 20, 701, 371));
        QFont font;
        font.setFamilies({QString::fromUtf8("Comfortaa")});
        SortedArrayLabel->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 631, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comfortaa")});
        font1.setPointSize(14);
        label->setFont(font1);
        firstArrayEdit = new QLineEdit(centralwidget);
        firstArrayEdit->setObjectName("firstArrayEdit");
        firstArrayEdit->setGeometry(QRect(100, 70, 61, 20));
        SecondArrayEdit = new QLineEdit(centralwidget);
        SecondArrayEdit->setObjectName("SecondArrayEdit");
        SecondArrayEdit->setGeometry(QRect(220, 70, 61, 20));
        SortButton = new QPushButton(centralwidget);
        SortButton->setObjectName("SortButton");
        SortButton->setGeometry(QRect(160, 100, 61, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Comfortaa")});
        font2.setPointSize(12);
        SortButton->setFont(font2);
        SortTimeLabel = new QLabel(centralwidget);
        SortTimeLabel->setObjectName("SortTimeLabel");
        SortTimeLabel->setGeometry(QRect(370, 130, 37, 12));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Sorted Array", nullptr));
        SortedArrayLabel->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Enter the numbers of first and second arrays:", nullptr));
        SortButton->setText(QCoreApplication::translate("MainWindow", "sort", nullptr));
        SortTimeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
