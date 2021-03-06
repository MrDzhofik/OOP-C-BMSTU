#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    add = new Add();
    del = new Delete();
    other = new Other();
    print = new Print();
    setWindowTitle("Базар");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AddButton_clicked(bool checked)
{
    add->show();
}


void MainWindow::on_DeleteButton_clicked(bool checked)
{
    del->show();
}


void MainWindow::on_OtherButton_clicked(bool checked)
{
    other->show();
}


void show_message(const char* text){
    QMessageBox msgBox;
    msgBox.setWindowTitle("Базар");
    msgBox.setText(text);
    msgBox.exec();
};


void MainWindow::on_PrinButton_clicked(bool checked)
{
    print->show();
}

bool MainWindow::readrec(){
    QFile fil("C:\\Users\\djafa\\source\\repos\\OOP-C-BMSTU\\Practic_3\\Market.dat");
    fil.open(QIODevice::ReadOnly);
    fil.seek(0);
    QDataStream in(&fil); // связываем с файлом поток ввода
    if (in.atEnd()) {
        return false;
    }

    else
    {
        in>>record.name>>record.provider>>record.quantity>>record.price;
        return true;
    }
}



