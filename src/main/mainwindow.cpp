#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    connect(ui->actionExit, &QAction::triggered, this, close());
}

MainWindow::~MainWindow()
{
    delete ui;
}
