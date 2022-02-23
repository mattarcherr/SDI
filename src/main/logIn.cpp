#include "logIn.h"
#include "ui_logIn.h"

#include "../dbC/dbC.h"

#include "mainwindow.h"

logIn::logIn(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::logIn)
{
    ui->setupUi(this);

    ui->statusLabel->setVisible(false);
    ui->profileStatusLabel->setVisible(false);
    ui->stackedWidget->setCurrentIndex(0);

    connect(ui->logInButton, &QPushButton::clicked, this, &logIn::check);
    connect(ui->profileCreateButton, &QPushButton::clicked, this, &logIn::createProfile);
    connect(ui->profilePageButton, &QPushButton::clicked, this, &logIn::swapPage);
    connect(ui->profileBackButton, &QPushButton::clicked, this, &logIn::swapPage);

}

void logIn::swapPage()
{
    if (ui->stackedWidget->currentIndex() == 0){
        ui->stackedWidget->setCurrentIndex(1);
    }
    else { ui->stackedWidget->setCurrentIndex(0); }
}

void logIn::check()
{
    if(ui->usernameInput->text()=="" || ui->passwordInput->text()=="") {
        ui->statusLabel->setVisible(true);
        ui->statusLabel->setText("Username or password cannot be blank");
        return;
    }
    database con;
    if (cnst_failed) {
        ui->statusLabel->setVisible(true);
        ui->statusLabel->setText("Database connection failed");
        return;
    }
    cnst_failed = false;
    if(con.check(ui->usernameInput->text(),"") == 1){
        if(con.check(ui->usernameInput->text(),ui->passwordInput->text()) == 1){
            ui->statusLabel->setVisible(true);
            ui->statusLabel->setText("Logging in");
            accept();
            logIn::mainWindow();
            return;
        }
        qDebug() << "username and password do not match";
        ui->statusLabel->setVisible(true);
        ui->statusLabel->setText("Username and password do not match");
        return;
    }
    qDebug() << "username is incorrect";
    ui->statusLabel->setVisible(true);
    ui->statusLabel->setText("Username is incorrect");
    return;
}

void logIn::createProfile()
{
    if(ui->profileFullnameInput->text() =="" || ui->profileUsernameInput->text()=="" || ui->profilePasswordInput->text()=="") {
        ui->profileStatusLabel->setVisible(true);
        ui->profileStatusLabel->setText("Field cannot be blank");
        return;
    }
    database con;
    if (cnst_failed) {
        ui->profileStatusLabel->setVisible(true);
        ui->profileStatusLabel->setText("Database connection failed");
        return;
    }
    cnst_failed = false;
    if(!con.check(ui->profileUsernameInput->text(),"")){
        if(con.add(ui->profileFullnameInput->text(),ui->profileUsernameInput->text(),ui->profilePasswordInput->text(),"user") == 1){
            ui->profileStatusLabel->setVisible(true);
            ui->profileStatusLabel->setText("Profile successfully created");
            return;
        }
    }
    ui->profileStatusLabel->setVisible(true);
    ui->profileStatusLabel->setText("Username already in use");
    return;
}

void logIn::mainWindow()
{
    MainWindow* window = new MainWindow;
    window->show();
}

logIn::~logIn()
{
    delete ui;
}

