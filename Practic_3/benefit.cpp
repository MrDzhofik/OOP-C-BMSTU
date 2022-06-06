#include "benefit.h"
#include "ui_benefit.h"
#include "Structure.h"
#include <QFile>

Benefit::Benefit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Benefit)
{
    ui->setupUi(this);
    setWindowTitle("Базар");
}

Benefit::~Benefit()
{
    delete ui;
}

void Benefit::on_BenefitButton_clicked(bool checked)
{
    ui->BenefitTextEdit->clear();
    QString ben = ui->BenefitEdit->text();
    float min = 1000000000;
    QFile fil("C:\\Users\\djafa\\source\\repos\\OOP-C-BMSTU\\Practic_3\\Market.dat");
    Product rec;
    fil.open(QFile::ReadOnly);
    QDataStream in(&fil);
    while (!in.atEnd()){
        in>>rec.name>>rec.provider>>rec.quantity>>rec.price;
        if ((rec.price < min) && (rec.name == ben)){
            min = rec.price;
        }
    }
    fil.close();
    fil.open(QFile::ReadOnly);
    while (!in.atEnd()){
        in>>rec.name>>rec.provider>>rec.quantity>>rec.price;
        if ((rec.price == min) && (rec.name == ben)){
            ui->BenefitTextEdit->append("Выгоднее всего брать этот товар у: ");
            ui->BenefitTextEdit->insertPlainText(rec.provider);
            ui->BenefitTextEdit->append("Цена: ");
            ui->BenefitTextEdit->insertPlainText(QString::number(rec.price));
        }
    }
    fil.close();
}

void Benefit::on_ExitButton_clicked(bool checked)
{
    ui->BenefitTextEdit->clear();
}

