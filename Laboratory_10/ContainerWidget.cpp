#include "ContainerWidget.h"
#include "AddWidget.h"
#include "DeleteWidget.h"
#include "PrintWidget.h"
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>

ContainerWidget::ContainerWidget(QWidget *parent){
    setFixedSize(420, 297);
    AddButton = new QPushButton();
    AddButton->setText("Добавить");
    DeleteButton = new QPushButton();
    DeleteButton->setText("Удалить");
    PrintButton = new QPushButton();
    PrintButton->setText("Вывод");
    ExitButton = new QPushButton();
    ExitButton->setText("Выход");
    VLayout = new QVBoxLayout(this);
    HLayout = new QHBoxLayout();
    add = new AddWidget();
    del = new DeleteWidget();
    print = new PrintWidget();
    HLayout->addWidget(AddButton);
    HLayout->addWidget(DeleteButton);
    HLayout->addWidget(PrintButton);
    VLayout->addLayout(HLayout);
    VLayout->addWidget(ExitButton);
    connect(ExitButton, SIGNAL(clicked(bool)), this, SLOT(close()));
    connect(AddButton, SIGNAL(clicked(bool)), this, SLOT(show_add()));
    connect(DeleteButton, SIGNAL(clicked(bool)), this, SLOT(show_delete()));
    connect(PrintButton, SIGNAL(clicked(bool)), this, SLOT(show_print()));
}
