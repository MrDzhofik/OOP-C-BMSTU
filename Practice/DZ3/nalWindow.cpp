#include "nalWindow.h"
nalWindow::nalWindow(QWidget *parent): QWidget(parent)
{
    author=new QLabel("Author:", this);
    name=new QLabel("Name:", this);
    publishment=new QLabel("Publishment:", this);
    year=new QLabel("Year:", this);
    Tauthor=new QLineEdit(this);
    Tname=new QLineEdit(this);
    Tpublishment=new QLineEdit(this);
    Tyear=new QLineEdit(this);
    back=new QPushButton("Back", this);
    next=new QPushButton("Next", this);
    end=new QPushButton("Exit", this);
    mainlay=new QVBoxLayout(this);
    Labellay=new QVBoxLayout;
    Textlay=new QVBoxLayout;
    Editlay=new QHBoxLayout;
    btnlay=new QHBoxLayout;
    Tauthor->setReadOnly(true);
    Tname->setReadOnly(true);
    Tpublishment->setReadOnly(true);
    Tyear->setReadOnly(true);
    Labellay->addWidget(author);
    Textlay->addWidget(Tauthor);
    Labellay->addWidget(name);
    Textlay->addWidget(Tname);
    Labellay->addWidget(publishment);
    Textlay->addWidget(Tpublishment);
    Labellay->addWidget(year);
    Textlay->addWidget(Tyear);
    btnlay->addWidget(back);
    btnlay->addWidget(next);
    Editlay->addLayout(Labellay);
    Editlay->addLayout(Textlay);
    mainlay->addLayout(Editlay);
    mainlay->addLayout(btnlay);
    mainlay->addWidget(end);
    connect(end,SIGNAL(clicked()),this,SLOT(close()));
    connect(next,SIGNAL(clicked()),this,SLOT(nextbutton()));
    connect(back,SIGNAL(clicked()),this,SLOT(prevbutton()));
    QDataStream in(F.library);
    int i=0;
    while(!in.atEnd()){
        in>>b.auth>>b.name>>b.pub>>b.year>>b.cnum;
        if(b.cnum==1){mas[i]=b;i++;}
    }
    F.library->reset();
    Tauthor->setText(mas[0].auth);
    Tname->setText(mas[0].name);
    Tpublishment->setText(mas[0].pub);
    QString yr;
    yr.setNum(mas[0].year);
    Tyear->setText(yr);
    j=0;
}

nalWindow::~nalWindow()
{

}

void nalWindow::nextbutton()
{
    if(mas[j+1].auth!="") {
        j++;
        Tauthor->setText(mas[j].auth);
        Tname->setText(mas[j].name);
        Tpublishment->setText(mas[j].pub);
        QString yr;
        yr.setNum(mas[j].year);
        Tyear->setText(yr);
    }
}

void nalWindow::prevbutton()
{
    if(j>0) {
        j--;
        Tauthor->setText(mas[j].auth);
        Tname->setText(mas[j].name);
        Tpublishment->setText(mas[j].pub);
        QString yr;
        yr.setNum(mas[j].year);
        Tyear->setText(yr);
    }
}
