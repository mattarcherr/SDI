/********************************************************************************
** Form generated from reading UI file 'logIn.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_logIn
{
public:
    QWidget *centralwidget;
    QLabel *usernameLabel;
    QLabel *passwordLabel;
    QLabel *statusLabel;
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QPushButton *logInButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *logIn)
    {
        if (logIn->objectName().isEmpty())
            logIn->setObjectName(QString::fromUtf8("logIn"));
        logIn->resize(800, 600);
        centralwidget = new QWidget(logIn);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        usernameLabel = new QLabel(centralwidget);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setGeometry(QRect(290, 110, 101, 23));
        usernameLabel->setAlignment(Qt::AlignCenter);
        passwordLabel = new QLabel(centralwidget);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(290, 190, 101, 23));
        passwordLabel->setAlignment(Qt::AlignCenter);
        statusLabel = new QLabel(centralwidget);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(200, 320, 281, 23));
        statusLabel->setAlignment(Qt::AlignCenter);
        usernameInput = new QLineEdit(centralwidget);
        usernameInput->setObjectName(QString::fromUtf8("usernameInput"));
        usernameInput->setGeometry(QRect(280, 140, 121, 31));
        passwordInput = new QLineEdit(centralwidget);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));
        passwordInput->setGeometry(QRect(280, 230, 121, 31));
        logInButton = new QPushButton(centralwidget);
        logInButton->setObjectName(QString::fromUtf8("logInButton"));
        logInButton->setGeometry(QRect(300, 280, 84, 31));
        logIn->setCentralWidget(centralwidget);
        menubar = new QMenuBar(logIn);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        logIn->setMenuBar(menubar);
        statusbar = new QStatusBar(logIn);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        logIn->setStatusBar(statusbar);

        retranslateUi(logIn);

        QMetaObject::connectSlotsByName(logIn);
    } // setupUi

    void retranslateUi(QMainWindow *logIn)
    {
        logIn->setWindowTitle(QApplication::translate("logIn", "logIn", nullptr));
        usernameLabel->setText(QApplication::translate("logIn", "Username", nullptr));
        passwordLabel->setText(QApplication::translate("logIn", "Password", nullptr));
        statusLabel->setText(QApplication::translate("logIn", "status", nullptr));
        logInButton->setText(QApplication::translate("logIn", "Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logIn: public Ui_logIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
