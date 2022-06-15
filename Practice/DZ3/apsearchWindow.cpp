#include "apsearchWindow.h"
#include "file.h"
apsearchWindow::apsearchWindow(QWidget *parent): QWidget(parent)
{
    L1=new QLabel("Period: from ", this);
    L2=new QLabel(" till ", this);
    L3=new QLabel(" year.", this);
    Llist=new QLabel("Authors list:", this);
    LBord=new QLineEdit(this);
    RBord=new QLineEdit(this);
    search=new QPushButton("Search", this);
    end=new QPushButton("Exit", this);
    list=new QTextEdit(this);
    mainlay=new QVBoxLayout(this);
    Labellay=new QVBoxLayout;
    btnlay=new QVBoxLayout;
    bordlay=new QHBoxLayout;
    actlay=new QHBoxLayout;
    bordlay->addWidget(L1);
    bordlay->addWidget(LBord);
    bordlay->addWidget(L2);
    bordlay->addWidget(RBord);
    bordlay->addWidget(L3);
    Labellay->addLayout(bordlay);
    Labellay->addWidget(Llist);
    btnlay->addWidget(search);
    btnlay->addWidget(end);
    actlay->addLayout(Labellay);
    actlay->addLayout(btnlay);
    mainlay->addLayout(actlay);
    mainlay->addWidget(list);
    list->setReadOnly(true);
    connect(end,SIGNAL(clicked()),this,SLOT(close()));
    connect(search,SIGNAL(clicked()),this,SLOT(searchfor()));
}

apsearchWindow::~apsearchWindow()
{

}

void apsearchWindow::searchfor()
{
    list->clear();
    F.library->reset();
    QDataStream in(F.library);
    book b;
    int LB, RB;
    LB=(LBord->text()).toInt();
    RB=(RBord->text()).toInt();
    while(!in.atEnd()){
        in>>b.auth>>b.name>>b.pub>>b.year>>b.cnum;
        if(b.year>=LB && b.year<=RB) list->append(b.auth);
    }
}
