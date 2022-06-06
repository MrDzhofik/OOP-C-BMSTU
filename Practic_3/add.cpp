#include "add.h"
#include "ui_add.h"
#include "Structure.h"
#include "mainwindow.h"
#include <QFile>
#include <QDataStream>

Add::Add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);
    setWindowTitle("Базар");
}

Add::~Add()
{
    delete ui;
}


QDataStream & operator << ( QDataStream & out, const Product & p )
{
  out << p.name;
  out << p.provider;
  out << p.quantity;
  out << p.price;
  return out;
}


void Add::on_AddButton_clicked(bool checked) {
    Product r;
    QFile fil("C:\\Users\\djafa\\source\\repos\\OOP-C-BMSTU\\Practic_3\\Market.dat");
    fil.open(QFile::Append);

    r.name = ui->NameEdit->text();
    r.provider = ui->ProviderEdit->text();
    r.quantity = ui->QuantityEdit->text().toFloat();
    r.price = ui->PriceEdit->text().toFloat();
    ui->NameEdit->clear();
    ui->ProviderEdit->clear();
    ui->QuantityEdit->clear();
    ui->PriceEdit->clear();
    qDebug("Norm");
    QDataStream out(&fil);
    out<<r.name<<r.provider<<r.quantity<<r.price;
    fil.close();
    show_message("Продукт добавлен");
    ui->NameEdit->setFocus();
}

void Add::on_ExitButton_clicked(bool checked)
{
   qDebug("Close");
}

