#include "addWindow.h"
#include "file.h"
addWindow::addWindow(QWidget *parent): QWidget(parent)
{
    author=new QLabel("Author:", this);
    name=new QLabel("Name:", this);
    publishment=new QLabel("Publishment:", this);
    year=new QLabel("Year:", this);
    copynum=new QLabel("Number of copies:", this);
    Tauthor=new QLineEdit(this);
    Tname=new QLineEdit(this);
    Tpublishment=new QLineEdit(this);
    Tyear=new QLineEdit(this);
    Tcopynum=new QLineEdit(this);
    add=new QPushButton("Add book", this);
    end=new QPushButton("Exit", this);
    mainlay=new QVBoxLayout(this);
    Labellay=new QVBoxLayout;
    Textlay=new QVBoxLayout;
    Editlay=new QHBoxLayout;
    btnlay=new QHBoxLayout;
    Labellay->addWidget(author);
    Textlay->addWidget(Tauthor);
    Labellay->addWidget(name);
    Textlay->addWidget(Tname);
    Labellay->addWidget(publishment);
    Textlay->addWidget(Tpublishment);
    Labellay->addWidget(year);
    Textlay->addWidget(Tyear);
    Labellay->addWidget(copynum);
    Textlay->addWidget(Tcopynum);
    btnlay->addWidget(add);
    btnlay->addWidget(end);
    Editlay->addLayout(Labellay);
    Editlay->addLayout(Textlay);
    mainlay->addLayout(Editlay);
    mainlay->addLayout(btnlay);
    connect(add,SIGNAL(clicked()),this,SLOT(addbook()));
    connect(end,SIGNAL(clicked()),this,SLOT(close()));

}

addWindow::~addWindow()
{

}

void addWindow::addbook()
{
    book b;
    QString yr, num;
    b.auth=Tauthor->text();
    b.name=Tname->text();
    b.pub=Tpublishment->text();
    yr=Tyear->text();
    b.year=yr.toInt();
    num=Tcopynum->text();
    b.cnum=num.toInt();
    F.library->seek(F.library->size());
    QDataStream out(F.library);
    out<<b.auth<<b.name<<b.pub<<b.year<<b.cnum;
    Tauthor->clear();
    Tname->clear();
    Tpublishment->clear();
    Tyear->clear();
    Tcopynum->clear();
}
