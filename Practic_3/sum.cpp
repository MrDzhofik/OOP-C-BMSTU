#include "sum.h"
#include "ui_sum.h"
#include <QFile>
#include "Structure.h"

Sum::Sum(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sum)
{
    ui->setupUi(this);
    setWindowTitle("Базар");
}
Sum::~Sum()
{
    delete ui;
}

void Sum::on_SumButton_clicked(bool checked)
{
    ui->SumText->clear();
    QFile fil("C:\\Users\\djafa\\source\\repos\\OOP-C-BMSTU\\Practic_3\\Market.dat");
    Product rec;
    fil.open(QIODevice::ReadOnly);
    float sum = ui->SumEdit->text().toFloat();
    QDataStream in(&fil);
    while (!in.atEnd()){
        in>>rec.name>>rec.provider>>rec.quantity>>rec.price;
        float how_much = sum / rec.price;
        ui->SumText->append(rec.name);
        ui->SumText->insertPlainText(" ");
        ui->SumText->insertPlainText(rec.provider);
        ui->SumText->insertPlainText(" - ");
        ui->SumText->insertPlainText(QString::number(how_much));
        ui->SumText->insertPlainText(" кг");
        ui->SumText->append(" ");
   }
}

void Sum::on_ExitButton_clicked(bool checked)
{
    ui->SumText->clear();
}

