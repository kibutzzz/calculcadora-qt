#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_btnUm_clicked()
{
    ui->inputNumeros->insert("1");
}

void MainWindow::on_btnDois_clicked()
{
    ui->inputNumeros->insert("2");
}

void MainWindow::on_btnTres_clicked()
{
    ui->inputNumeros->insert("3");
}

void MainWindow::on_btnQuatro_clicked()
{
    ui->inputNumeros->insert("4");
}

void MainWindow::on_btnCinco_clicked()
{
    ui->inputNumeros->insert("5");
}

void MainWindow::on_btnSeis_clicked()
{
    ui->inputNumeros->insert("6");
}

void MainWindow::on_btnSete_clicked()
{
    ui->inputNumeros->insert("7");
}

void MainWindow::on_btnOito_clicked()
{
    ui->inputNumeros->insert("8");
}

void MainWindow::on_btnNove_clicked()
{
    ui->inputNumeros->insert("9");
}

void MainWindow::on_btnZero_clicked()
{
    ui->inputNumeros->insert("0");
}

void MainWindow::on_btnLimpar_clicked()
{
    ui->inputNumeros->clear();
}
