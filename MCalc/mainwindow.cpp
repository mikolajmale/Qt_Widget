#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTextEdit>
#include <QPushButton>
#include <QMessageBox>
#include <QShortcut>
#include <iostream>
#include <string>
#include <vector>

#define BTN(d,x) d ## x
#define SLO(a,b,c) a ## b ## c

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWidget::setWindowTitle("MCalc");

    new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_Q) , this , SLOT(close()));

    new QShortcut(QKeySequence(Qt::Key_0) , this , SLOT(on_d0_clicked()));
    new QShortcut(QKeySequence(Qt::Key_1) , this , SLOT(on_d1_clicked()));
    new QShortcut(QKeySequence(Qt::Key_2) , this , SLOT(on_d2_clicked()));
    new QShortcut(QKeySequence(Qt::Key_3) , this , SLOT(on_d3_clicked()));
    new QShortcut(QKeySequence(Qt::Key_4) , this , SLOT(on_d4_clicked()));
    new QShortcut(QKeySequence(Qt::Key_5) , this , SLOT(on_d5_clicked()));
    new QShortcut(QKeySequence(Qt::Key_6) , this , SLOT(on_d6_clicked()));
    new QShortcut(QKeySequence(Qt::Key_7) , this , SLOT(on_d7_clicked()));
    new QShortcut(QKeySequence(Qt::Key_8) , this , SLOT(on_d8_clicked()));
    new QShortcut(QKeySequence(Qt::Key_9) , this , SLOT(on_d9_clicked()));
    new QShortcut(QKeySequence(Qt::Key_Equal) , this , SLOT(on_plus_clicked()));
    new QShortcut(QKeySequence(Qt::Key_Space) , this , SLOT(on_eq_clicked()));
    new QShortcut(QKeySequence(Qt::Key_Minus) , this , SLOT(on_minus_clicked()));
    new QShortcut(QKeySequence(Qt::Key_multiply) , this , SLOT(on_mul_clicked()));

    ui->textEdit->setReadOnly(true);
    QMenu *click_me = menuBar()->addMenu("About");

    QAction * menu_action = new QAction("Click me!");
    connect(menu_action , &QAction::triggered ,[=](){
       QMessageBox::information(this ,"Message", "Thansk for using my calculator :)", QMessageBox::Ok);
    });

    click_me->addAction(menu_action);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::SLO(on_d,0,_clicked)()
{
    output = output + "0";
    qDebug() <<output;
    ui->textEdit->setText(output);
    ui->textEdit->setAlignment(Qt::AlignCenter);

}

void MainWindow::SLO(on_d,1,_clicked)()
{
    output = output + "1";
    qDebug() <<output;
    ui->textEdit->setText(output);
    ui->textEdit->setAlignment(Qt::AlignCenter);

}

void MainWindow::SLO(on_d,2,_clicked)()
{
    output = output + "2";
    qDebug() <<output;
    ui->textEdit->setText(output);
    ui->textEdit->setAlignment(Qt::AlignCenter);

}

void MainWindow::SLO(on_d,3,_clicked)()
{
    output = output + "3";
    qDebug() <<output;
    ui->textEdit->setText(output);
    ui->textEdit->setAlignment(Qt::AlignCenter);

}

void MainWindow::SLO(on_d,4,_clicked)()
{
    output = output + "4";
    qDebug() <<output;
    ui->textEdit->setText(output);
    ui->textEdit->setAlignment(Qt::AlignCenter);

}

void MainWindow::SLO(on_d,5,_clicked)()
{
    output = output + "5";
    qDebug() <<output;
    ui->textEdit->setText(output);
    ui->textEdit->setAlignment(Qt::AlignCenter);
}

void MainWindow::SLO(on_d,6,_clicked)()
{
    output = output + "6";
    qDebug() <<output;
    ui->textEdit->setText(output);
    ui->textEdit->setAlignment(Qt::AlignCenter);

}
void MainWindow::SLO(on_d,7,_clicked)()
{
    output = output + "7";
    qDebug() <<output;
    ui->textEdit->setText(output);
    ui->textEdit->setAlignment(Qt::AlignCenter);

}
void MainWindow::SLO(on_d,8,_clicked)()
{
    output = output + "8";
    qDebug() <<output;
    ui->textEdit->setText(output);
    ui->textEdit->setAlignment(Qt::AlignCenter);

}

void MainWindow::SLO(on_d,9,_clicked)()
{
    output = output + "9";
    qDebug() <<output;
    ui->textEdit->setText(output);
    ui->textEdit->setAlignment(Qt::AlignCenter);

}

void MainWindow::on_plus_clicked()
{
    output = output + "+";
    qDebug() <<output;
    ui->textEdit->setText(output);
    ui->textEdit->setAlignment(Qt::AlignCenter);

}

void MainWindow::on_minus_clicked()
{
    output = output + "-";
    qDebug() <<output;
    ui->textEdit->setText(output);
    ui->textEdit->setAlignment(Qt::AlignCenter);

}

void MainWindow::on_mul_clicked()
{
    output = output + "*";
    qDebug() <<output;
    ui->textEdit->setText(output);
    ui->textEdit->setAlignment(Qt::AlignCenter);

}

void MainWindow::on_div_clicked()
{
    output = output + "/";
    qDebug() <<output;
    ui->textEdit->setText(output);
    ui->textEdit->setAlignment(Qt::AlignCenter);

}

void MainWindow::on_eq_clicked()
{
    std::cout << "calculated number: " << MainWindow::calculate(output) << std::endl;
    ui->textEdit->clear();

    output = QString::fromStdString(std::to_string(MainWindow::calculate(output)));
    ui->textEdit->setText(output);
    ui->textEdit->setAlignment(Qt::AlignCenter);

}

float MainWindow::calculate(QString output){
    std::vector<std::string> numbers;
    std::vector<char> sign;
    unsigned int iterator = 0;
    float result;

    std::string m_string = output.toUtf8().constData();


    for (size_t i = m_string.size(); i != 0; i--) {
        if(!isdigit(m_string[i])){
            m_string.erase(i,1);
        }else {
            break;
            }
    }
    for (size_t i = 0; i != m_string.size(); i++) {
        if(!isdigit(m_string[i])){
            m_string.erase(i,1);
        }else {
            break;
            }
    }

    while (1) {
        size_t position = m_string.find_first_of("+-/*");
        if(position == std::string::npos){
            numbers.push_back(m_string);
            break;
        }
        sign.push_back(m_string[position]);

        numbers.push_back(m_string.substr(0 , position));
        m_string.erase(0 , position + 1);
        iterator++;
    }


    for(unsigned int i = 0 ; i < iterator ; i++){
            char operation = sign[i];

            switch (operation) {
            case '+':
                result = std::stof(numbers[i]) + std::stof(numbers[i + 1]);
                numbers[i+1] = std::to_string(result);
                break;

            case '-':
                result = std::stof(numbers[i]) - std::stof(numbers[i + 1]);
                numbers[i+1] = std::to_string(result);
                break;

            case '*':
                result = std::stof(numbers[i]) * std::stof(numbers[i + 1]);
                numbers[i+1] = std::to_string(result);
                break;

            case '/':
                if(std::stof(numbers[i+1]) == 0){
                    QMessageBox::information(this ,"Message", "You cannot divide by 0", QMessageBox::Ok);
                    return 0;
                }
                result = std::stof(numbers[i]) / std::stof(numbers[i + 1]);
                numbers[i+1] = std::to_string(result);
                break;
            }

    }
    return std::stof(numbers[iterator]);
}
