/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *click_me;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QPushButton *eq;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *d5;
    QPushButton *d8;
    QPushButton *d2;
    QPushButton *d1;
    QPushButton *d7;
    QPushButton *d4;
    QPushButton *d9;
    QPushButton *d6;
    QPushButton *d3;
    QPushButton *d0;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *plus;
    QPushButton *minus;
    QPushButton *mul;
    QPushButton *div;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        click_me = new QAction(MainWindow);
        click_me->setObjectName(QStringLiteral("click_me"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 20, 341, 41));
        eq = new QPushButton(centralWidget);
        eq->setObjectName(QStringLiteral("eq"));
        eq->setGeometry(QRect(20, 210, 351, 25));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 80, 254, 121));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        d5 = new QPushButton(layoutWidget);
        d5->setObjectName(QStringLiteral("d5"));

        gridLayout->addWidget(d5, 1, 1, 1, 1);

        d8 = new QPushButton(layoutWidget);
        d8->setObjectName(QStringLiteral("d8"));

        gridLayout->addWidget(d8, 2, 1, 1, 1);

        d2 = new QPushButton(layoutWidget);
        d2->setObjectName(QStringLiteral("d2"));

        gridLayout->addWidget(d2, 0, 1, 1, 1);

        d1 = new QPushButton(layoutWidget);
        d1->setObjectName(QStringLiteral("d1"));

        gridLayout->addWidget(d1, 0, 0, 1, 1);

        d7 = new QPushButton(layoutWidget);
        d7->setObjectName(QStringLiteral("d7"));

        gridLayout->addWidget(d7, 2, 0, 1, 1);

        d4 = new QPushButton(layoutWidget);
        d4->setObjectName(QStringLiteral("d4"));

        gridLayout->addWidget(d4, 1, 0, 1, 1);

        d9 = new QPushButton(layoutWidget);
        d9->setObjectName(QStringLiteral("d9"));

        gridLayout->addWidget(d9, 2, 2, 1, 1);

        d6 = new QPushButton(layoutWidget);
        d6->setObjectName(QStringLiteral("d6"));

        gridLayout->addWidget(d6, 1, 2, 1, 1);

        d3 = new QPushButton(layoutWidget);
        d3->setObjectName(QStringLiteral("d3"));

        gridLayout->addWidget(d3, 0, 2, 1, 1);

        d0 = new QPushButton(layoutWidget);
        d0->setObjectName(QStringLiteral("d0"));

        gridLayout->addWidget(d0, 3, 1, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(280, 80, 91, 121));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        plus = new QPushButton(layoutWidget1);
        plus->setObjectName(QStringLiteral("plus"));

        verticalLayout->addWidget(plus);

        minus = new QPushButton(layoutWidget1);
        minus->setObjectName(QStringLiteral("minus"));

        verticalLayout->addWidget(minus);

        mul = new QPushButton(layoutWidget1);
        mul->setObjectName(QStringLiteral("mul"));

        verticalLayout->addWidget(mul);

        div = new QPushButton(layoutWidget1);
        div->setObjectName(QStringLiteral("div"));

        verticalLayout->addWidget(div);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::BottomToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        click_me->setText(QApplication::translate("MainWindow", "Click me!", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        eq->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        d5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        d8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        d2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        d1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        d7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        d4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        d9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        d6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        d3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        d0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        plus->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        minus->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        mul->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
        div->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
