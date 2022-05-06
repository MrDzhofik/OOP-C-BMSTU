#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>
#include "string.h"
#include "Qstr.h"
Win::Win(QWidget *parent)
{
    setWindowTitle("IUUUUuuu");
    input_edit = new QLineEdit(" ", this);
    output_edit = new QTextEdit(" ", this);
    conv = new QPushButton("Convert", this);
    exit = new QPushButton("Exit", this);
    QVBoxLayout *main_layout = new QVBoxLayout(this);
    QHBoxLayout *button_layout = new QHBoxLayout();
    output_edit->setReadOnly(true);
    button_layout->addWidget(conv);
    button_layout->addWidget(exit);
    main_layout->addWidget(input_edit);
    main_layout->addWidget(output_edit);
    main_layout->addLayout(button_layout);
    connect(conv, SIGNAL(clicked(bool)), this, SLOT(write()));
    connect(exit, SIGNAL(clicked(bool)), this, SLOT(close()));
}


void Win::write(){
    QString str = input_edit->text();
    if (flag == 3){
        flag = 0;
        output_edit->clear();
    }
    switch(flag){
    case 0:{
       write_normal(str);
       break;
    }
    case 1:{
        write_lower(str);
        break;
    }
    case 2:
        write_upper(str);
        break;
    }
    flag += 1;
}

void Win::write_normal(QString str){
    input_edit->setReadOnly(true);
    QString st = {"Input: "};
    output_edit->setText(st + str);
}

void Win::write_lower(QString str){
    QString st = {"Lower case: "};
    str = str.toLower();
    output_edit->append(st + str);
}
void Win::write_upper(QString str){
    QString st = {"Upper case: "};
    str = str.toUpper();
    output_edit->append(st + str);
    input_edit->setReadOnly(false);
}

