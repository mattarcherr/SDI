#include "logIn.h"
#include "ui_logIn.h"
#include <QDebug>

#include "src/dbC/dbC.h"

logIn::logIn(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::logIn)
{
    ui->setupUi(this);
    
    ui->statusLabel->setVisible(false);
    connect(ui->logInButton, &QPushButton::clicked, this, &logIn::check);
}

logIn::~logIn()
{
    delete ui;
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
