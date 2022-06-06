#include "DeleteWidget.h"
#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QRadioButton>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

DeleteWidget::DeleteWidget(QWidget *parent){
    setFixedSize(420, 297);
    // RadioButtons
    (SelectLabel = new QLabel())->setText("Добавить в:");
    (Begin = new QRadioButton())->setText("Начало");
    (End = new QRadioButton())->setText("Конец");
    VSelectLayout = new QVBoxLayout();
    VSelectLayout->addWidget(Begin);
    VSelectLayout->addWidget(End);
    HSelectLayout = new QHBoxLayout();
    HSelectLayout->addWidget(SelectLabel);
    HSelectLayout->addLayout(VSelectLayout);
    // PushButtons
    (DeleteButton = new QPushButton())->setText("Еимых");
    ExitButton = new QPushButton();
    ExitButton->setText("Уца наҟ");
    ButtonLayout = new QHBoxLayout();
    ButtonLayout->addWidget(DeleteButton);
    ButtonLayout->addWidget(ExitButton);
    // mainLayout
    mainLayout = new QVBoxLayout(this);
    mainLayout->addLayout(HSelectLayout);
    mainLayout->addLayout(ButtonLayout);
    // Signals and slots
    connect(ExitButton, SIGNAL(clicked(bool)), this, SLOT(close()));
}
