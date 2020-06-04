#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calcexception.h"
#include <qstack.h>

#include "calculadora.h"

//variaveis globais
Calculadora calc;

//prototipo
void recarregar_visor();

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

void MainWindow::atualizarVisor()
{
    ui->labelErro->clear();
    ui->outputDados->clear();
    for (int numero : *calc.getCopiaPilha())
    {
        ui->outputDados->insertPlainText(QString("%1\n").arg(numero));
    }
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

// --------- OPERAÇÕES --------
void MainWindow::on_btnDivisao_clicked()
{
    try {
        calc.dividir();
        this->atualizarVisor();
    } catch (CalcException *exception) {
        this->ui->labelErro->setText(exception->what());
    }
}

void MainWindow::on_btnMultiplicacao_clicked()
{
    try {
        calc.multiplicar();
        this->atualizarVisor();
    } catch (CalcException *exception) {
        this->ui->labelErro->setText(exception->what());
    }
}

void MainWindow::on_btnSubtracao_clicked()
{
    try{
        calc.subtrair();
        this->atualizarVisor();
    } catch (CalcException *exception) {
        this->ui->labelErro->setText(exception->what());
    }
}

void MainWindow::on_btnAdicao_clicked()
{
    try{
        calc.somar();
        this->atualizarVisor();
    } catch (CalcException *exception) {
        this->ui->labelErro->setText(exception->what());
    }
}


// --------- INVERTER, DELETAR, ACRESCENTAR --------
void MainWindow::on_btnInverte_clicked()
{
    try{
        calc.inverterUltimos();
        this->atualizarVisor();
    } catch (CalcException *exception) {
        this->ui->labelErro->setText(exception->what());
    }
}

void MainWindow::on_btnDelete_clicked()
{
    try{
        calc.deletarUltimo();
        this->atualizarVisor();
    } catch (CalcException *exception) {
        this->ui->labelErro->setText(exception->what());
    }
}

void MainWindow::on_btnEnter_clicked()
{
    int num = ui->inputNumeros->text().toInt(NULL);
    calc.adicionarNumero(num);
    ui->outputDados->insertPlainText(QString("%1\n").arg(num));
    ui->inputNumeros->clear();
}


void MainWindow::on_btnAnterior_clicked()
{
    ui->outputDados->moveCursor(QTextCursor::Up, QTextCursor::MoveMode::KeepAnchor);
}

void MainWindow::on_btnProximo_clicked()
{
    ui->outputDados->moveCursor(QTextCursor::Down, QTextCursor::MoveMode::KeepAnchor);
}
