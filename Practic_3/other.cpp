#include "other.h"
#include "ui_other.h"

Other::Other(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Other)
{
    ui->setupUi(this);
}

Other::~Other()
{
    delete ui;
}
