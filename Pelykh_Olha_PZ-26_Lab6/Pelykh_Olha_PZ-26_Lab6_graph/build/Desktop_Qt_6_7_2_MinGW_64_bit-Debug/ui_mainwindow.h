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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *backButton;
    QLineEdit *enterEdit;
    QLabel *dequeInfoLabel;
    QLabel *dequeLabel;
    QPushButton *frontButton;
    QPushButton *showButton;
    QLineEdit *enterEdit_2;
    QPushButton *frontButton_2;
    QPushButton *backButton_2;
    QPushButton *showButton_2;
    QLabel *dequeLabel_2;
    QLabel *dequeInfoLabel_2;
    QLineEdit *findEdit;
    QPushButton *findButton;
    QPushButton *findButton_2;
    QLineEdit *findEdit_2;
    QLabel *findLabel;
    QLabel *findLabel_2;
    QPushButton *mergeButton;
    QLabel *dequeMergeLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(40, 80, 80, 18));
        QFont font;
        font.setFamilies({QString::fromUtf8("Comfortaa")});
        backButton->setFont(font);
        enterEdit = new QLineEdit(centralwidget);
        enterEdit->setObjectName("enterEdit");
        enterEdit->setGeometry(QRect(40, 50, 261, 20));
        enterEdit->setFont(font);
        dequeInfoLabel = new QLabel(centralwidget);
        dequeInfoLabel->setObjectName("dequeInfoLabel");
        dequeInfoLabel->setGeometry(QRect(40, 160, 331, 171));
        dequeInfoLabel->setFont(font);
        dequeInfoLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        dequeLabel = new QLabel(centralwidget);
        dequeLabel->setObjectName("dequeLabel");
        dequeLabel->setGeometry(QRect(40, 120, 259, 29));
        dequeLabel->setFont(font);
        dequeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        frontButton = new QPushButton(centralwidget);
        frontButton->setObjectName("frontButton");
        frontButton->setGeometry(QRect(130, 80, 80, 18));
        frontButton->setFont(font);
        showButton = new QPushButton(centralwidget);
        showButton->setObjectName("showButton");
        showButton->setGeometry(QRect(220, 80, 80, 18));
        showButton->setFont(font);
        enterEdit_2 = new QLineEdit(centralwidget);
        enterEdit_2->setObjectName("enterEdit_2");
        enterEdit_2->setGeometry(QRect(420, 50, 261, 20));
        enterEdit_2->setFont(font);
        frontButton_2 = new QPushButton(centralwidget);
        frontButton_2->setObjectName("frontButton_2");
        frontButton_2->setGeometry(QRect(510, 80, 80, 18));
        frontButton_2->setFont(font);
        backButton_2 = new QPushButton(centralwidget);
        backButton_2->setObjectName("backButton_2");
        backButton_2->setGeometry(QRect(420, 80, 80, 18));
        backButton_2->setFont(font);
        showButton_2 = new QPushButton(centralwidget);
        showButton_2->setObjectName("showButton_2");
        showButton_2->setGeometry(QRect(600, 80, 80, 18));
        showButton_2->setFont(font);
        dequeLabel_2 = new QLabel(centralwidget);
        dequeLabel_2->setObjectName("dequeLabel_2");
        dequeLabel_2->setGeometry(QRect(420, 120, 259, 29));
        dequeLabel_2->setFont(font);
        dequeLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        dequeInfoLabel_2 = new QLabel(centralwidget);
        dequeInfoLabel_2->setObjectName("dequeInfoLabel_2");
        dequeInfoLabel_2->setGeometry(QRect(420, 160, 331, 171));
        dequeInfoLabel_2->setFont(font);
        dequeInfoLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        findEdit = new QLineEdit(centralwidget);
        findEdit->setObjectName("findEdit");
        findEdit->setGeometry(QRect(310, 50, 71, 20));
        findEdit->setFont(font);
        findButton = new QPushButton(centralwidget);
        findButton->setObjectName("findButton");
        findButton->setGeometry(QRect(310, 80, 71, 18));
        findButton->setFont(font);
        findButton_2 = new QPushButton(centralwidget);
        findButton_2->setObjectName("findButton_2");
        findButton_2->setGeometry(QRect(690, 80, 71, 18));
        findButton_2->setFont(font);
        findEdit_2 = new QLineEdit(centralwidget);
        findEdit_2->setObjectName("findEdit_2");
        findEdit_2->setGeometry(QRect(690, 50, 71, 20));
        findEdit_2->setFont(font);
        findLabel = new QLabel(centralwidget);
        findLabel->setObjectName("findLabel");
        findLabel->setGeometry(QRect(310, 120, 61, 21));
        findLabel->setFont(font);
        findLabel_2 = new QLabel(centralwidget);
        findLabel_2->setObjectName("findLabel_2");
        findLabel_2->setGeometry(QRect(690, 110, 61, 21));
        findLabel_2->setFont(font);
        mergeButton = new QPushButton(centralwidget);
        mergeButton->setObjectName("mergeButton");
        mergeButton->setGeometry(QRect(370, 360, 80, 18));
        mergeButton->setFont(font);
        dequeMergeLabel = new QLabel(centralwidget);
        dequeMergeLabel->setObjectName("dequeMergeLabel");
        dequeMergeLabel->setGeometry(QRect(120, 400, 571, 101));
        dequeMergeLabel->setFont(font);
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
        backButton->setText(QCoreApplication::translate("MainWindow", "add back", nullptr));
        dequeInfoLabel->setText(QString());
        dequeLabel->setText(QString());
        frontButton->setText(QCoreApplication::translate("MainWindow", "add front", nullptr));
        showButton->setText(QCoreApplication::translate("MainWindow", "show", nullptr));
        frontButton_2->setText(QCoreApplication::translate("MainWindow", "add front", nullptr));
        backButton_2->setText(QCoreApplication::translate("MainWindow", "add back", nullptr));
        showButton_2->setText(QCoreApplication::translate("MainWindow", "show", nullptr));
        dequeLabel_2->setText(QString());
        dequeInfoLabel_2->setText(QString());
        findButton->setText(QCoreApplication::translate("MainWindow", "find", nullptr));
        findButton_2->setText(QCoreApplication::translate("MainWindow", "find", nullptr));
        findLabel->setText(QString());
        findLabel_2->setText(QString());
        mergeButton->setText(QCoreApplication::translate("MainWindow", "merge", nullptr));
        dequeMergeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
