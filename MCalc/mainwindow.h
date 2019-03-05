#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_d0_clicked();
    void on_d1_clicked();
    void on_d2_clicked();
    void on_d3_clicked();
    void on_d4_clicked();
    void on_d5_clicked();
    void on_d6_clicked();
    void on_d7_clicked();
    void on_d8_clicked();
    void on_d9_clicked();
    void on_plus_clicked();
    void on_minus_clicked();
    void on_mul_clicked();
    void on_div_clicked();
    void on_eq_clicked();

private:
    Ui::MainWindow *ui;
    QString output;
    float calculate(QString out);
};

#endif // MAINWINDOW_H
