#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    Win=new QWidget;
    inputEdit=new QLineEdit(this);
    text=new QTextEdit(this);
    mintext=new QTextEdit(this);
    itbutton=new QPushButton("Input float",this);
    chbutton=new QPushButton("Input char",this);
    delbutton=new QPushButton("Delete",this);
    Hlayout = new QHBoxLayout;
    Hminlayout = new QHBoxLayout;
    Vlayout = new QVBoxLayout;
    minlabel=new QLabel("Min:",this);
    Hlayout->setContentsMargins(5,5,5,5);
    Hlayout->setSpacing(5);
    Win->setLayout(Hlayout);
    Vlayout->addWidget(inputEdit);
    Vlayout->addWidget(itbutton);
    Vlayout->addWidget(chbutton);
    Vlayout->addWidget(delbutton);
    QFont font = minlabel->font();
    font.setPointSize(18);
    minlabel->setFont(font);
    Hminlayout->addWidget(minlabel);
    Hminlayout->addWidget(mintext);
    Vlayout->addLayout(Hminlayout);
    Hlayout->addLayout(Vlayout);
    Hlayout->addWidget(text);
    mintext->setReadOnly ( true );
    text->setReadOnly ( true );
    S.create();
    connect(itbutton, SIGNAL(clicked()), this, SLOT(addit()));
    connect(chbutton, SIGNAL(clicked()), this, SLOT(addch()));
    connect(delbutton, SIGNAL(clicked()), this, SLOT(del()));
}

Widget::~Widget()
{
    S.clear();
}

void Widget::addch()
{
    S.addch(inputEdit->text());
    inputEdit->clear();
    text->clear();
    S.outp(text);
    mintext->clear();
    S.min(mintext);
}

void Widget::addit()
{
    S.addit(inputEdit->text());
    inputEdit->clear();
    text->clear();
    S.outp(text);
    mintext->clear();
    S.min(mintext);
}


void Widget::del()
{
    S.del();
    text->clear();
    S.outp(text);
    mintext->clear();
    S.min(mintext);
};
