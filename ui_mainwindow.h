/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
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
    QLabel *label_pic;
    QPushButton *pushButton;
    QPushButton *cudaButton;
    QPushButton *dockerComposeButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *dockerButton;
    QPushButton *containerToolkitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 800);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(0, -10, 641, 781));
        label_pic->setStyleSheet(QString::fromUtf8("background-image: url(:/images/Requirements.png);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 520, 271, 25));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        cudaButton = new QPushButton(centralwidget);
        cudaButton->setObjectName(QString::fromUtf8("cudaButton"));
        cudaButton->setGeometry(QRect(160, 340, 271, 25));
        cudaButton->setAutoFillBackground(false);
        cudaButton->setStyleSheet(QString::fromUtf8("background-color: #FA6D60;"));
        dockerComposeButton = new QPushButton(centralwidget);
        dockerComposeButton->setObjectName(QString::fromUtf8("dockerComposeButton"));
        dockerComposeButton->setGeometry(QRect(160, 460, 271, 25));
        dockerComposeButton->setStyleSheet(QString::fromUtf8("background-color: #FA6D60"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 270, 371, 22));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 140, 67, 17));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);
        dockerButton = new QPushButton(centralwidget);
        dockerButton->setObjectName(QString::fromUtf8("dockerButton"));
        dockerButton->setGeometry(QRect(160, 420, 271, 25));
        dockerButton->setStyleSheet(QString::fromUtf8("background-color: #FA6D60"));
        containerToolkitButton = new QPushButton(centralwidget);
        containerToolkitButton->setObjectName(QString::fromUtf8("containerToolkitButton"));
        containerToolkitButton->setGeometry(QRect(160, 380, 271, 25));
        containerToolkitButton->setStyleSheet(QString::fromUtf8("background-color: #FA6D60"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_pic->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Sair da instala\303\247\303\243o", nullptr));
        cudaButton->setText(QCoreApplication::translate("MainWindow", "CUDA e CUDA Toolkit", nullptr));
        dockerComposeButton->setText(QCoreApplication::translate("MainWindow", "Docker-Compose", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Segue a lista de pacotes para instala\303\247\303\243o", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "1.0.0", nullptr));
        dockerButton->setText(QCoreApplication::translate("MainWindow", "Docker", nullptr));
        containerToolkitButton->setText(QCoreApplication::translate("MainWindow", "Container Toolkit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
