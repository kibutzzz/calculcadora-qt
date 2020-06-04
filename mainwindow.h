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

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
