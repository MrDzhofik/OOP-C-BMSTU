#include "add.h"
#include "ui_add.h"
#include "mainwindow.h"
#include <QMessageBox>

Add::Add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);
}

Add::~Add()
{
    delete ui;
}

void Add::on_AddButton_clicked(bool checked) {
    Product record;
    FILE *fil;
    record.name = ui->NameEdit->text();
    record.provider = ui->ProviderEdit->text();
    record.quantity = ui->QuantityEdit->text().toInt();
    record.price = ui->PriceEdit->text().toInt();
    ui->NameEdit->clear();
    ui->ProviderEdit->clear();
    ui->QuantityEdit->clear();
    ui->PriceEdit->clear();
    qDebug("Norm");
    if (fil = fopen("C:\\Users\\djafa\\source\\repos\\OOP-C-BMSTU\\Practic_3\\Market.dat", "a+b")) {
        qDebug("Open");
    }
    else {
        fil = fopen("C:\\Users\\djafa\\source\\repos\\OOP-C-BMSTU\\Practic_3\\Market.dat", "w+b");
    }
    fwrite(&record, sizeof(record), 1, fil);
    ui->NameEdit->setFocus();
    show_message("Продукт добавлен");
//      record.provider := SupplierEdit.text;
//      rec.quantity := StrToInt(QuantityEdit.text);
//      rec.price := StrToInt(PriceEdit.text);
//      NameEdit.clear;
//      SupplierEdit.clear;
//      QuantityEdit.clear;
//      PriceEdit.clear;
//      write(fil, rec);
//      NameEdit.setfocus;
//      Application.MessageBox('Продукт успешно добавлен', 'Симулятор рынка',mb_Ok);
}
