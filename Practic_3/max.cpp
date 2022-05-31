#include "max.h"
#include "ui_max.h"

Max::Max(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Max)
{
    ui->setupUi(this);
}

Max::~Max()
{
    delete ui;
}
