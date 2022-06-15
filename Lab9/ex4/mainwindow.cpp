#include "mainwindow.h"

Win::Win(QWidget *parent)
    : QWidget(parent)
{
    Widget=new QWidget;
    Button=new QPushButton("Button",this);
    Text=new QTextEdit(this);
    VLAD=new QVBoxLayout(this);
    inputEdit=new QLineEdit(this);
    VLAD->setContentsMargins(5,5,5,5);
    VLAD->setSpacing(5);
    Widget->setLayout(VLAD);
    VLAD->addWidget(inputEdit);
    VLAD->addWidget(Button);
    VLAD->addWidget(Text);
    Text->setReadOnly(true);
    connect(Button, SIGNAL(clicked()), this, SLOT(convert()));

}

Win::~Win()
{
}

void Win::convert()
{
QString str;
str=inputEdit->text();
Text->setText("input: "+str);
for(int i=0;i<(int)str.length();i++) str[i]=str[i].toLower();
Text->append("all lower: "+str);
for(int i=0;i<(int)str.length();i++) str[i]=str[i].toUpper();
Text->append("ALL UPPER: "+str);
}
