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
    QLabel *ShowLabel;
    QGroupBox *groupBox_2;
    QLabel *SortLabel;
    QLabel *label;
    QLineEdit *nameLine;
    QLineEdit *assessmenLine;
    QPushButton *sortButton;
    QPushButton *addButton;
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
        groupBox->setGeometry(QRect(370, 50, 401, 181));
        ShowLabel = new QLabel(groupBox);
        ShowLabel->setObjectName("ShowLabel");
        ShowLabel->setGeometry(QRect(10, 10, 381, 161));
        QFont font;
        font.setFamilies({QString::fromUtf8("Comfortaa")});
        font.setPointSize(12);
        ShowLabel->setFont(font);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(60, 250, 711, 281));
        SortLabel = new QLabel(groupBox_2);
        SortLabel->setObjectName("SortLabel");
        SortLabel->setGeometry(QRect(30, 20, 671, 141));
        SortLabel->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 60, 321, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comfortaa")});
        font1.setPointSize(14);
        label->setFont(font1);
        nameLine = new QLineEdit(centralwidget);
        nameLine->setObjectName("nameLine");
        nameLine->setGeometry(QRect(60, 120, 131, 20));
        assessmenLine = new QLineEdit(centralwidget);
        assessmenLine->setObjectName("assessmenLine");
        assessmenLine->setGeometry(QRect(200, 120, 121, 20));
        sortButton = new QPushButton(centralwidget);
        sortButton->setObjectName("sortButton");
        sortButton->setGeometry(QRect(110, 160, 80, 18));
        sortButton->setFont(font);
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(200, 160, 80, 18));
        addButton->setFont(font);
        SortTimeLabel = new QLabel(centralwidget);
        SortTimeLabel->setObjectName("SortTimeLabel");
        SortTimeLabel->setGeometry(QRect(256, 210, 91, 20));
        SortTimeLabel->setFont(font);
        SortTimeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        ShowLabel->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        SortLabel->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Enter the name and the mark\n"
" of student:", nullptr));
        sortButton->setText(QCoreApplication::translate("MainWindow", "sort", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "add", nullptr));
        SortTimeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
