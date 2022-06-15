#include "widget.h"
biblioWindow::biblioWindow(QWidget *parent): QWidget(parent)
{
    Table=new QTableWidget(5,5,this);
    end=new QPushButton("Exit", this);
    mainlay=new QHBoxLayout(this);
    mainlay->addWidget(Table);
    mainlay->addWidget(end);
    QStringList line;
    line<<"Author"<<"Name"<<"Publishment"<<"Year"<<"Copy number";
    Table->setHorizontalHeaderLabels(line);
    connect(end,SIGNAL(clicked()),this,SLOT(close()));
}

biblioWindow::~biblioWindow()
{

}

void biblioWindow::Tshow()
{
    F.library->reset();
    QDataStream in(F.library);
    book b;
    int i=0;
    while(!in.atEnd()){
    in>>b.auth>>b.name>>b.pub>>b.year>>b.cnum;
    QTableWidgetItem *author=new QTableWidgetItem;
    author->setFlags(Qt::NoItemFlags);
    author->setText(b.auth);
    Table->setItem(i, 0, author);
    QTableWidgetItem *name=new QTableWidgetItem(b.name);
    Table->setItem(i, 1, name);
    QTableWidgetItem *pub=new QTableWidgetItem(b.pub);
    Table->setItem(i, 2, pub);
    QString yr;
    yr.setNum(b.year);
    QTableWidgetItem *year=new QTableWidgetItem(yr);
    Table->setItem(i, 3, year);
    QString nc;
    nc.setNum(b.cnum);
    QTableWidgetItem *copynum=new QTableWidgetItem(nc);
    Table->setItem(i, 4, copynum);
    i++;
    Table->setRowCount(Table->rowCount()+1);
    }
    show();
}
