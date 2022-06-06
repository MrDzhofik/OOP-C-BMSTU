#include "AddWidget.h"
#include "Elements.h"
#include "ContainerWidget.h"
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QRadioButton>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include "stdio.h"
#include <QString>

AddWidget::AddWidget(QWidget *parent){
    setFixedSize(420, 297);
    // Добавление строк ввода
    (IntLabel = new QLabel())->setText("Число: ");
    IntEdit = new QLineEdit();
    (StrLabel = new QLabel())->setText("Строка:");
    StrEdit = new QLineEdit();
    IntLayout = new QHBoxLayout();
    IntLayout->addWidget(IntLabel);
    IntLayout->addWidget(IntEdit);
    StrLayout = new QHBoxLayout();
    StrLayout->addWidget(StrLabel);
    StrLayout->addWidget(StrEdit);
    EditLayout = new QVBoxLayout();
    EditLayout->addLayout(IntLayout);
    EditLayout->addLayout(StrLayout);
    // Добавление кнопок выбора
    (SelectLabel = new QLabel())->setText("Добавить в:");
    (Begin = new QRadioButton())->setText("Начало");
    (End = new QRadioButton())->setText("Конец");
    VSelectLayout = new QVBoxLayout();
    VSelectLayout->addWidget(Begin);
    VSelectLayout->addWidget(End);
    HSelectLayout = new QHBoxLayout();
    HSelectLayout->addWidget(SelectLabel);
    HSelectLayout->addLayout(VSelectLayout);
    // Добавление кнопок
    (AddButton = new QPushButton())->setText("Иоушьҭ");
    ExitButton = new QPushButton();
    ExitButton->setText("Уца наҟ");
    ButtonLayout = new QHBoxLayout();
    ButtonLayout->addWidget(AddButton);
    ButtonLayout->addWidget(ExitButton);
    // Добавление в общий ящик
    AllLayout = new QVBoxLayout(this);
    AllLayout->addLayout(EditLayout);
    AllLayout->addLayout(HSelectLayout);
    AllLayout->addLayout(ButtonLayout);
    // Соединяем кнопки со слотами
    connect(ExitButton, SIGNAL(clicked(bool)), this, SLOT(close()));
    connect(AddButton, SIGNAL(clicked(bool)), this, SLOT(add()));
};


void AddWidget::add(){ // Слот добавления
    int num = (((this->IntEdit->text().size()) != 0)? IntEdit->text().toInt(): 0);
    printf("%d", num);
    QString str1 = StrEdit->text();
    QByteArray ba = str1.toLatin1();
    const char *st = ba.data();
//    ContainerWidget::spisok->add(1, num, st);
    IntEdit->clear();
    StrEdit->clear();
}
