#include "sum.h"
#include "ui_sum.h"

Sum::Sum(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sum)
{
    ui->setupUi(this);
}

Sum::~Sum()
{
    delete ui;
}
