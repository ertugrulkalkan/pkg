#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_push_me_btn_clicked()
{
    QMessageBox* msg = new QMessageBox();
    msg->exec();
}

void MainWindow::on_exit_btn_clicked()
{
    exit(EXIT_SUCCESS);
}
