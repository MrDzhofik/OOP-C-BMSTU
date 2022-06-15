#include "deleteWindow.h"
#include "file.h"
deleteWindow::deleteWindow(QWidget *parent): QWidget(parent)
{
    name=new QLabel("Name:", this);
    Tname=new QLineEdit(this);
    del=new QPushButton("Delete book", this);
    end=new QPushButton("Exit", this);
    delAll=new QPushButton("Delete all", this);
    mainlay=new QVBoxLayout(this);
    namelay=new QHBoxLayout;
    btnlay=new QHBoxLayout;
    namelay->addWidget(name);
    namelay->addWidget(Tname);
    btnlay->addWidget(del);
    btnlay->addWidget(end);
    mainlay->addLayout(namelay);
    mainlay->addLayout(btnlay);
    mainlay->addWidget(delAll);
    connect(delAll,SIGNAL(clicked()),this,SLOT(delall()));
    connect(end,SIGNAL(clicked()),this,SLOT(close()));
}

deleteWindow::~deleteWindow()
{

}

void deleteWindow::delbook()
{

}

void deleteWindow::delall()
{
    F.library->remove("library.txt");
}
