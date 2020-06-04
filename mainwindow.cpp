#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "calculadora.h"

//variaveis globais
Calculadora calc;

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

void MainWindow::on_btnEnter_clicked()
{
    int num = ui->inputNumeros->text().toInt(NULL);
    calc.adicionarNumero(num);
    ui->outputDados->insertPlainText(QString("%1\n").arg(num));
    ui->inputNumeros->clear();
}

void MainWindow::on_btnDivisao_clicked()
{
    calc.dividir();
    for (int i = 0; i < calc.size(); i++)
    {
        ui->outputDados->insertPlainText(QString("%1\n").arg(calc.));
    }
}
