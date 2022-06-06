#include "PrintWidget.h"
#include <QWidget>
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>

PrintWidget::PrintWidget(QWidget *parent){
    setFixedSize(420, 297);
    (PrintEdit = new QTextEdit())->setReadOnly(true);
    (ExitButton = new QPushButton())->setText("Уца наҟ");
    mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(PrintEdit);
    mainLayout->addWidget(ExitButton);
    connect(ExitButton, SIGNAL(clicked(bool)), this, SLOT(close()));
}
