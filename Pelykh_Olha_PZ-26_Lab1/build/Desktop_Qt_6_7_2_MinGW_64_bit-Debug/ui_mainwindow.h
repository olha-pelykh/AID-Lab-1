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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *NumOfNumField;
    QPushButton *OkButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *MasLabel;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *SortedMasLabel;
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
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 60, 471, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Comfortaa")});
        font.setPointSize(16);
        label->setFont(font);
        NumOfNumField = new QLineEdit(centralwidget);
        NumOfNumField->setObjectName("NumOfNumField");
        NumOfNumField->setGeometry(QRect(70, 120, 241, 31));
        OkButton = new QPushButton(centralwidget);
        OkButton->setObjectName("OkButton");
        OkButton->setGeometry(QRect(330, 120, 51, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comfortaa")});
        font1.setPointSize(12);
        OkButton->setFont(font1);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(430, 70, 321, 131));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 319, 129));
        MasLabel = new QLabel(scrollAreaWidgetContents);
        MasLabel->setObjectName("MasLabel");
        MasLabel->setGeometry(QRect(10, 10, 301, 111));
        MasLabel->setFont(font1);
        MasLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(centralwidget);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(60, 250, 691, 251));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 689, 249));
        SortedMasLabel = new QLabel(scrollAreaWidgetContents_2);
        SortedMasLabel->setObjectName("SortedMasLabel");
        SortedMasLabel->setGeometry(QRect(10, 10, 691, 231));
        SortedMasLabel->setFont(font1);
        SortedMasLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        SortButton = new QPushButton(centralwidget);
        SortButton->setObjectName("SortButton");
        SortButton->setGeometry(QRect(190, 180, 90, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Comfortaa")});
        font2.setPointSize(14);
        SortButton->setFont(font2);
        SortTimeLabel = new QLabel(centralwidget);
        SortTimeLabel->setObjectName("SortTimeLabel");
        SortTimeLabel->setGeometry(QRect(670, 210, 81, 21));
        SortTimeLabel->setFont(font1);
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
        label->setText(QCoreApplication::translate("MainWindow", "Eneter the number of numbers:", nullptr));
        OkButton->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        MasLabel->setText(QString());
        SortedMasLabel->setText(QString());
        SortButton->setText(QCoreApplication::translate("MainWindow", "Sort", nullptr));
        SortTimeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
