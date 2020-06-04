#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void atualizarVisor();

private slots:


    void on_btnUm_clicked();

    void on_btnDois_clicked();

    void on_btnTres_clicked();

    void on_btnQuatro_clicked();

    void on_btnCinco_clicked();

    void on_btnSeis_clicked();

    void on_btnSete_clicked();

    void on_btnOito_clicked();

    void on_btnNove_clicked();

    void on_btnZero_clicked();

    void on_btnLimpar_clicked();

    void on_btnEnter_clicked();

    void on_btnDivisao_clicked();

    void on_btnMultiplicacao_clicked();

    void on_btnSubtracao_clicked();

    void on_btnAdicao_clicked();

    void on_btnInverte_clicked();

    void on_btnDelete_clicked();

    void on_btnAnterior_clicked();

    void on_btnProximo_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
