#include "other.h"
#include "ui_other.h"

Other::Other(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Other)
{
    ui->setupUi(this);
    max = new Max();
    sum = new Sum();
    benefit = new Benefit();
    histogramm = new Histogramm();
    setWindowTitle("Базар");
}

Other::~Other()
{
    delete ui;
}

void Other::on_MaxButton_clicked(bool checked)
{
    max->show();
}


void Other::on_SumButton_clicked(bool checked)
{
    sum->show();
}


void Other::on_BenefitButton_clicked(bool checked)
{
    benefit->show();
}


void Other::on_HistogrammButton_clicked(bool checked)
{
    histogramm->show();
}

