#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sWindow = new Dialog();
    connect(sWindow, &Dialog::firstWindow,this,&MainWindow::show);

    thirdWindow = new pfile();
    connect(thirdWindow, &pfile::firstWindow,this, &MainWindow::show);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
        sWindow->show();
        this->close();
}

void MainWindow::on_pushButton_2_clicked()
{
    thirdWindow->show();
    this->close();
}
