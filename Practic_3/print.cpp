#include "print.h"
#include "ui_print.h"
#include "mainwindow.h"

Print::Print(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Print)
{
    ui->setupUi(this);
}

Print::~Print()
{
    delete ui;
}

void Print::on_PrintButton_clicked(bool checked)
{
    FILE *fil;
    Product record;
    fil = fopen("C:\\Users\\djafa\\source\\repos\\OOP-C-BMSTU\\Practic_3\\Market.dat", "a+b");
//    long lSize = ftell(fil);
//    char * buffer = (char*) malloc(sizeof(char) * lSize);
    while (!feof(fil)){
        fread(&record, sizeof(record), 1, fil);
        qDebug("Norm");
        ui->textEdit->insertPlainText(record.name);
        /*ui->textEdit->append(record.provider);
        ui->textEdit->append(QString::number(record.quantity));
        ui->textEdit->append(QString::number(record.price)); */
    }

    fclose(fil);

}

