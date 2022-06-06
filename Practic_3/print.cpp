#include "print.h"
#include "ui_print.h"
#include "mainwindow.h"
#include <QFile>
#include <QDataStream>

Print::Print(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Print)
{
    ui->setupUi(this);
    setWindowTitle("Базар");
    QStringList strlist; // объект Список строк
    strlist << "Наименование" << "Поставщик" << "Количество(кг)" << "Цена(кг)";                                                                                                  //  заголовок
    ui->tableWidget->setHorizontalHeaderLabels(strlist);

}

Print::~Print(){
    delete ui;
}

void Print::on_PrintButton_clicked(bool checked){
    ui->tableWidget->clear();
    showall();
}


void Print::showrow(int i, Product r){
    QStringList strlist; // объект Список строк
    strlist << "Наименование" << "Поставщик" << "Количество(кг)" << "Цена(кг)";                                                                                                  //  заголовок
    ui->tableWidget->setHorizontalHeaderLabels(strlist);
    QTableWidgetItem *item; // элемент таблицы
    item = new QTableWidgetItem(); // создаем элемент
    item->setFlags(Qt::NoItemFlags);//запрещаем
                                                                                         // выделение
    item->setText(r.name);   // записываем текст
    ui->tableWidget->setItem(i, 0, item); qDebug("1");
    item = new QTableWidgetItem();// создаем элемент
    item->setFlags(Qt::NoItemFlags);
    item->setText(r.provider);
    ui->tableWidget->setItem(i, 1, item); qDebug("2");
    item = new QTableWidgetItem();
    item->setFlags(Qt::NoItemFlags);
    item->setText(QString::number(r.quantity));
    ui->tableWidget->setItem(i, 2, item); qDebug("3");

    item = new QTableWidgetItem();
    item->setFlags(Qt::NoItemFlags);
    item->setText(QString::number(r.price));
    ui->tableWidget->setItem(i, 3, item); qDebug("4");
}


void Print::showall(){
    int col = 0;
    MainWindow mw;
    Product rec;
    QFile fil("C:\\Users\\djafa\\source\\repos\\OOP-C-BMSTU\\Practic_3\\Market.dat");
    fil.open(QFile::ReadOnly);
    ui->tableWidget->setRowCount(fil.size() / sizeof(Product));
    QDataStream in(&fil);
    while (!in.atEnd()){
        in>>rec.name>>rec.provider>>rec.quantity>>rec.price;
        showrow(col, rec);
        col++;
    }
    qDebug("Read");
    fil.close();
}


void Print::on_ExitButton_clicked(bool checked)
{
    ui->tableWidget->clear();
}

