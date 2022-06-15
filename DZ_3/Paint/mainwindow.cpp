#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setMinimumSize(QSize(1000, 750));
    this->setWindowTitle("Пейнт");
    area = new Area(this);
    btn = new QPushButton(("Завершить"), this);
    btn->setGeometry(QRect(QPoint(900, 700), QSize(80, 35)));
//    QVBoxLayout *layout = new QVBoxLayout(this);
//    layout->addWidget(area);
//    layout->addWidget(btn);
    connect(btn, SIGNAL(clicked(bool)),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}





