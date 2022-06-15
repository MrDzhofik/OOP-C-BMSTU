#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "num.h"
#include "element.h"
#include <stdlib.h>
#include <string.h>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
bool Define(char* str){
    bool flag = true;
    for (int i = 0; i < strlen(str); i++)
        if ((str[i] < '0') || (str[i] > '9'))
            flag = false;
    return flag;
}

MainWindow::~MainWindow()
{
    delete ui;
}

TListImproved N;


void MainWindow::on_pushButton_clicked()
{
    char str[50];
    float k;
    TElement *p;
    strcpy_s(str, 10, ui->lineEdit->text().toStdString().c_str());
    if (Define(str) == true){
        k = atof(str);
        p = new TNum(k);
    }
    else
        p = new TChar(str);

    p->flag=true;
    ui->lineEdit->clear();
    N.Add(p);
}

void MainWindow::on_pushButton_2_clicked()
{
    char str[50];
    double k;
    TElement *p;
    strcpy_s(str, 10, ui->lineEdit->text().toStdString().c_str());
    if (Define(str) == true){
        k = atof(str);
        p = new TNum(k);
    }
    else
        p = new TChar(str);
    p->flag=false;
    ui->lineEdit->clear();
    N.Add(p);
}

void MainWindow::on_pushButton_3_clicked()
{
    N.DelFirst();
}

void MainWindow::on_pushButton_4_clicked()
{
    N.DelLast();
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->textEdit->clear();
    N.Print(ui->textEdit);
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit_3->clear();
    N.Sum(ui->lineEdit_3);
}

