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

float MainWindow::getOperando1() {
    return ui->operando1->text().toFloat(NULL);
}

float MainWindow::getOperando2() {
    return ui->operando2->text().toFloat(NULL);
}

void MainWindow::setResult(float result)
{
    ui->resultado->setText(QString("=%1").arg(result));
}

void MainWindow::setResult(std::string result) {
    ui->resultado->setText(QString("%1").fromStdString(result));
}

void MainWindow::on_btnAdicao_clicked()
{
    float num1, num2;
    num1 = getOperando1();
    num2 = getOperando2();

    this->setResult(num1 + num2);

}

void MainWindow::on_btnSubtracao_clicked()
{
    float num1, num2;
    num1 = getOperando1();
    num2 = getOperando2();

    this->setResult(num1 - num2);
}

void MainWindow::on_btnDivisao_clicked()
{
    float num1, num2;
    num1 = getOperando1();
    num2 = getOperando2();

    if(num2 == 0) {
        this->setResult("Denominador não pode ser 0");
    } else {
        this->setResult(num1/num2);
    }
}

void MainWindow::on_btnMultiplicacao_clicked()
{
    float num1, num2;
    num1 = getOperando1();
    num2 = getOperando2();

    this->setResult(num2 * num2);
}
