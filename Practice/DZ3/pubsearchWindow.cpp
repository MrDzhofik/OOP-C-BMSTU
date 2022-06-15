#include "pubsearchWindow.h"
pubsearchWindow::pubsearchWindow(QWidget *parent): QWidget(parent)
{
    pub=new QLabel("Publisher: ", this);
    list=new QLabel("Book list:", this);
    Tpub=new QLineEdit(this);
    search=new QPushButton("Search", this);
    end=new QPushButton("Exit", this);
    Tlist=new QTextEdit(this);
    mainlay=new QHBoxLayout(this);
    Labellay=new QVBoxLayout;
    btnlay=new QVBoxLayout;
    bordlay=new QHBoxLayout;
    actlay=new QVBoxLayout;
    bordlay->addWidget(pub);
    bordlay->addWidget(Tpub);
    Labellay->addWidget(list);
    Labellay->addWidget(Tlist);
    actlay->addLayout(bordlay);
    actlay->addLayout(Labellay);
    btnlay->addWidget(search);
    btnlay->addWidget(end);
    mainlay->addLayout(actlay);
    mainlay->addLayout(btnlay);
    Tlist->setReadOnly(true);
    connect(end,SIGNAL(clicked()),this,SLOT(close()));
    connect(search,SIGNAL(clicked()),this,SLOT(searchfor()));
}

pubsearchWindow::~pubsearchWindow()
{

}

void pubsearchWindow::searchfor()
{
    Tlist->clear();
    F.library->reset();
    QDataStream in(F.library);
    book b;
    while(!in.atEnd()){
        in>>b.auth>>b.name>>b.pub>>b.year>>b.cnum;
        if(Tpub->text()==b.pub) {
            QString info;
            QString yr;
            yr.setNum(b.year);
            info=b.name+", "+yr;
            Tlist->append(info);
        }
    }
}
