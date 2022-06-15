#include "widget.h"
#include "area.h"
#include "stdlib.h"
#include "file.h"
#include <iostream>
#include <fstream>
#include <string>

BookFile F;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
        welcome=new QLabel("Welcome to the library!", this);
        add=new QPushButton("Add book", this);
        del=new QPushButton("Delete book", this) ;
        nal=new QPushButton("Availiability", this) ;
        authper=new QPushButton("Sort authors by period", this) ;
        izd=new QPushButton("Sort by publisher", this) ;
        graph=new QPushButton("Publication graph", this) ;
        biblio=new QPushButton("Library", this) ;
        end=new QPushButton("Exit", this) ;
        btnlay=new QVBoxLayout;
        endlay=new QVBoxLayout;
        mainlay=new QHBoxLayout(this);
        btnlay->addWidget(add);
        btnlay->addWidget(del);
        btnlay->addWidget(nal);
        btnlay->addWidget(authper);
        btnlay->addWidget(izd);
        btnlay->addWidget(graph);
        btnlay->addWidget(biblio);
        endlay->addWidget(welcome);
        endlay->addWidget(end);
        mainlay->addLayout(btnlay);
        mainlay->addLayout(endlay);
        connect(add,SIGNAL(clicked()),this,SLOT(addWindowActivate()));
        connect(del,SIGNAL(clicked()),this,SLOT(deleteWindowActivate()));
        connect(nal,SIGNAL(clicked()),this,SLOT(nalWindowActivate()));
        connect(authper,SIGNAL(clicked()),this,SLOT(apsearchWindowActivate()));
        connect(izd,SIGNAL(clicked()),this,SLOT(pubsearchWindowActivate()));
        connect(graph,SIGNAL(clicked()),this,SLOT(graphWindowActivate()));
        connect(biblio,SIGNAL(clicked()),this,SLOT(biblioWindowActivate()));
        connect(end,SIGNAL(clicked()),this,SLOT(close()));
}

Widget::~Widget()
{
}

void Widget::addWindowActivate()
{
     aw.show();
};

void Widget::deleteWindowActivate()
{
    dw.show();
};

void Widget::nalWindowActivate()
{
    nw.show();
};

void Widget::apsearchWindowActivate()
{
    apw.show();
};

void Widget::pubsearchWindowActivate()
{
    psw.show();
};

void Widget::graphWindowActivate()
{
    gw.show();
};

void Widget::biblioWindowActivate()
{
    bw.Tshow();
};
