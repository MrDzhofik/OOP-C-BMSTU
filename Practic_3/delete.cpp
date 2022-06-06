#include "delete.h"
#include "ui_delete.h"
#include <QFile>
#include "Structure.h"
#include <QDataStream>
#include "add.h"
#include "mainwindow.h"

Delete::Delete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete)
{
    ui->setupUi(this);
    setWindowTitle("Базар");
}

Delete::~Delete()
{
    delete ui;
}

void Delete::on_DeleteButton_clicked(bool checked)
{
    // 0) Create QVector and QFile
    QFile fil("C:\\Users\\djafa\\source\\repos\\OOP-C-BMSTU\\Practic_3\\Market.dat");
    fil.open(QFile::ReadOnly);
    QVector<Product> products;
    Product r, rec;
    r.name = ui->NameEdit->text();
    r.provider = ui->ProviderEdit->text();
    // 1) Read from Market
    // 2) Write in QVector
    ui->NameEdit->clear();
    ui->ProviderEdit->clear();
    QDataStream in(&fil);
        while (!in.atEnd()) {
            in>>rec.name>>rec.provider>>rec.quantity>>rec.price;
            products.push_back(rec);
        }
    fil.close();
    // 3) Modify elements in QVector
    bool flag = false;
    int size = products.size();
        for (int i = 0; i < size; ++i) {
            if ((products.at(i).name == r.name) && (products.at(i).provider == r.provider) && (r.name != "")){
                 products.remove(i);
                 size--;
                 flag = true;

            }
        }
    // 4) Write from QVector in Market
    fil.remove();
    fil.open(QIODevice::Append);
    QDataStream out(&fil);
    if (flag){
        show_message("Продукт успешно удален");
        for (int i = 0; i < size; ++i) {
            out<< products[i].name << products[i].provider << products[i].quantity << products[i].price;
        }
    }
    else {
        show_message("Продукт не найден");
    }
}

