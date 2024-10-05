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
    QPushButton *sortButton;
    QLineEdit *rowsField;
    QLineEdit *colsField;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *sortedMatrixLAbel;
    QGroupBox *groupBox_2;
    QLabel *matrixLabel;
    QLabel *sortTimeLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sortButton = new QPushButton(centralwidget);
        sortButton->setObjectName("sortButton");
        sortButton->setGeometry(QRect(160, 150, 80, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Comfortaa")});
        font.setPointSize(12);
        sortButton->setFont(font);
        rowsField = new QLineEdit(centralwidget);
        rowsField->setObjectName("rowsField");
        rowsField->setGeometry(QRect(102, 100, 101, 20));
        colsField = new QLineEdit(centralwidget);
        colsField->setObjectName("colsField");
        colsField->setGeometry(QRect(220, 100, 101, 20));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 361, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comfortaa")});
        font1.setPointSize(14);
        label->setFont(font1);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 210, 741, 351));
        sortedMatrixLAbel = new QLabel(groupBox);
        sortedMatrixLAbel->setObjectName("sortedMatrixLAbel");
        sortedMatrixLAbel->setGeometry(QRect(20, 40, 701, 301));
        sortedMatrixLAbel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(400, 20, 371, 181));
        matrixLabel = new QLabel(groupBox_2);
        matrixLabel->setObjectName("matrixLabel");
        matrixLabel->setGeometry(QRect(20, 10, 371, 151));
        sortTimeLabel = new QLabel(centralwidget);
        sortTimeLabel->setObjectName("sortTimeLabel");
        sortTimeLabel->setGeometry(QRect(300, 175, 51, 21));
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
        sortButton->setText(QCoreApplication::translate("MainWindow", "sort", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Enter number of rows and columns: ", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        sortedMatrixLAbel->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        matrixLabel->setText(QString());
        sortTimeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
