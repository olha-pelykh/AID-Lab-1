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
    QLineEdit *NumOfNumField;
    QPushButton *pushButton;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *MasLabel;
    QGroupBox *groupBox_2;
    QLabel *SortedMasLabel;
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
        NumOfNumField = new QLineEdit(centralwidget);
        NumOfNumField->setObjectName("NumOfNumField");
        NumOfNumField->setGeometry(QRect(110, 80, 81, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 80, 41, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Comfortaa")});
        font.setPointSize(12);
        pushButton->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 351, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comfortaa")});
        font1.setPointSize(14);
        label->setFont(font1);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(380, 30, 391, 161));
        MasLabel = new QLabel(groupBox);
        MasLabel->setObjectName("MasLabel");
        MasLabel->setGeometry(QRect(10, 20, 361, 121));
        MasLabel->setFont(font);
        MasLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(40, 210, 731, 331));
        SortedMasLabel = new QLabel(groupBox_2);
        SortedMasLabel->setObjectName("SortedMasLabel");
        SortedMasLabel->setGeometry(QRect(10, 30, 701, 281));
        SortedMasLabel->setFont(font);
        SortedMasLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        SortTimeLabel = new QLabel(centralwidget);
        SortTimeLabel->setObjectName("SortTimeLabel");
        SortTimeLabel->setGeometry(QRect(290, 170, 71, 21));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "ok", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Enter the number of numbers:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Primal matrix", nullptr));
        MasLabel->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Sorted matrix", nullptr));
        SortedMasLabel->setText(QString());
        SortTimeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
