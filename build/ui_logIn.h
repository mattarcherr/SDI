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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logIn
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *LogIn;
    QLineEdit *passwordInput;
    QLabel *passwordLabel;
    QPushButton *logInButton;
    QLineEdit *usernameInput;
    QLabel *statusLabel;
    QLabel *usernameLabel;
    QPushButton *profilePageButton;
    QWidget *CreateProfile;
    QLabel *profileStatusLabel;
    QLabel *profileUsernameLabel;
    QLineEdit *profileUsernameInput;
    QLineEdit *profilePasswordInput;
    QPushButton *profileCreateButton;
    QLabel *profilePasswordLabel;
    QLabel *profileFullnameLabel;
    QLineEdit *profileFullnameInput;
    QPushButton *profileBackButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *logIn)
    {
        if (logIn->objectName().isEmpty())
            logIn->setObjectName(QString::fromUtf8("logIn"));
        logIn->resize(800, 600);
        centralwidget = new QWidget(logIn);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, -1, 801, 581));
        LogIn = new QWidget();
        LogIn->setObjectName(QString::fromUtf8("LogIn"));
        passwordInput = new QLineEdit(LogIn);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));
        passwordInput->setGeometry(QRect(320, 240, 121, 31));
        passwordLabel = new QLabel(LogIn);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(330, 200, 101, 23));
        passwordLabel->setAlignment(Qt::AlignCenter);
        logInButton = new QPushButton(LogIn);
        logInButton->setObjectName(QString::fromUtf8("logInButton"));
        logInButton->setGeometry(QRect(340, 290, 84, 31));
        usernameInput = new QLineEdit(LogIn);
        usernameInput->setObjectName(QString::fromUtf8("usernameInput"));
        usernameInput->setGeometry(QRect(320, 150, 121, 31));
        statusLabel = new QLabel(LogIn);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(240, 410, 281, 23));
        statusLabel->setAlignment(Qt::AlignCenter);
        usernameLabel = new QLabel(LogIn);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setGeometry(QRect(330, 110, 101, 23));
        usernameLabel->setAlignment(Qt::AlignCenter);
        profilePageButton = new QPushButton(LogIn);
        profilePageButton->setObjectName(QString::fromUtf8("profilePageButton"));
        profilePageButton->setGeometry(QRect(340, 350, 84, 31));
        stackedWidget->addWidget(LogIn);
        CreateProfile = new QWidget();
        CreateProfile->setObjectName(QString::fromUtf8("CreateProfile"));
        profileStatusLabel = new QLabel(CreateProfile);
        profileStatusLabel->setObjectName(QString::fromUtf8("profileStatusLabel"));
        profileStatusLabel->setGeometry(QRect(240, 390, 281, 23));
        profileStatusLabel->setAlignment(Qt::AlignCenter);
        profileUsernameLabel = new QLabel(CreateProfile);
        profileUsernameLabel->setObjectName(QString::fromUtf8("profileUsernameLabel"));
        profileUsernameLabel->setGeometry(QRect(310, 160, 141, 23));
        profileUsernameLabel->setAlignment(Qt::AlignCenter);
        profileUsernameInput = new QLineEdit(CreateProfile);
        profileUsernameInput->setObjectName(QString::fromUtf8("profileUsernameInput"));
        profileUsernameInput->setGeometry(QRect(320, 200, 121, 31));
        profilePasswordInput = new QLineEdit(CreateProfile);
        profilePasswordInput->setObjectName(QString::fromUtf8("profilePasswordInput"));
        profilePasswordInput->setGeometry(QRect(320, 290, 121, 31));
        profileCreateButton = new QPushButton(CreateProfile);
        profileCreateButton->setObjectName(QString::fromUtf8("profileCreateButton"));
        profileCreateButton->setGeometry(QRect(340, 340, 84, 31));
        profilePasswordLabel = new QLabel(CreateProfile);
        profilePasswordLabel->setObjectName(QString::fromUtf8("profilePasswordLabel"));
        profilePasswordLabel->setGeometry(QRect(310, 250, 141, 23));
        profilePasswordLabel->setAlignment(Qt::AlignCenter);
        profileFullnameLabel = new QLabel(CreateProfile);
        profileFullnameLabel->setObjectName(QString::fromUtf8("profileFullnameLabel"));
        profileFullnameLabel->setGeometry(QRect(300, 70, 161, 23));
        profileFullnameLabel->setAlignment(Qt::AlignCenter);
        profileFullnameInput = new QLineEdit(CreateProfile);
        profileFullnameInput->setObjectName(QString::fromUtf8("profileFullnameInput"));
        profileFullnameInput->setGeometry(QRect(320, 110, 121, 31));
        profileBackButton = new QPushButton(CreateProfile);
        profileBackButton->setObjectName(QString::fromUtf8("profileBackButton"));
        profileBackButton->setGeometry(QRect(340, 430, 84, 31));
        stackedWidget->addWidget(CreateProfile);
        logIn->setCentralWidget(centralwidget);
        menubar = new QMenuBar(logIn);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        logIn->setMenuBar(menubar);
        statusbar = new QStatusBar(logIn);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        logIn->setStatusBar(statusbar);

        retranslateUi(logIn);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(logIn);
    } // setupUi

    void retranslateUi(QMainWindow *logIn)
    {
        logIn->setWindowTitle(QApplication::translate("logIn", "logIn", nullptr));
        passwordLabel->setText(QApplication::translate("logIn", "Password", nullptr));
        logInButton->setText(QApplication::translate("logIn", "Log in", nullptr));
        statusLabel->setText(QApplication::translate("logIn", "status", nullptr));
        usernameLabel->setText(QApplication::translate("logIn", "Username", nullptr));
        profilePageButton->setText(QApplication::translate("logIn", "Create profile", nullptr));
        profileStatusLabel->setText(QApplication::translate("logIn", "status", nullptr));
        profileUsernameLabel->setText(QApplication::translate("logIn", "Enter your username", nullptr));
        profileCreateButton->setText(QApplication::translate("logIn", "Create Profile", nullptr));
        profilePasswordLabel->setText(QApplication::translate("logIn", "Enter your password", nullptr));
        profileFullnameLabel->setText(QApplication::translate("logIn", "Enter your full name", nullptr));
        profileBackButton->setText(QApplication::translate("logIn", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logIn: public Ui_logIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
