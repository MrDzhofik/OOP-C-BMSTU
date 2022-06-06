#include "max.h"
#include "ui_max.h"
#include "Structure.h"
#include <QFile>
#include <QTextEdit>

Max::Max(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Max)
{
    ui->setupUi(this);
    setWindowTitle("Базар");
}

Max::~Max()
{
    delete ui;
}

void Max::on_maxButton_clicked(bool checked){
    float max = 0;
    ui->MaxEdit->clear();
    QFile fil("C:\\Users\\djafa\\source\\repos\\OOP-C-BMSTU\\Practic_3\\Market.dat");
    Product rec;
    fil.open(QFile::ReadOnly);
    QDataStream in(&fil);
    while (!in.atEnd()){
        in>>rec.name>>rec.provider>>rec.quantity>>rec.price;
        if (rec.quantity > max){
            max = rec.quantity;
        }
    }
    fil.close();
    fil.open(QFile::ReadOnly);
    while (!in.atEnd()){
        in>>rec.name>>rec.provider>>rec.quantity>>rec.price;
        if (rec.quantity == max){
            max = rec.quantity;
            ui->MaxEdit->append(rec.name);
            ui->MaxEdit->append(rec.provider);
            ui->MaxEdit->append(QString::number(rec.quantity));
            ui->MaxEdit->append(QString::number(rec.price));
        }
    }
    fil.close();
}

void Max::on_exitButton_clicked(bool checked)
{
    ui->MaxEdit->clear();
}

