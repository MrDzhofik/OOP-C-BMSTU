#ifndef ADDWIDGET_H
#define ADDWIDGET_H
#include "Elements.h"
#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QRadioButton>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include "Elements.h"

class AddWidget: public QDialog{ // Класс добавления
    Q_OBJECT
public:
    AddWidget(QWidget *parent = 0);
    virtual ~AddWidget(){};
protected:
    QLabel *IntLabel;
    QLabel *StrLabel;
    QLineEdit *IntEdit;
    QLineEdit *StrEdit;
    QLabel *SelectLabel;
    QHBoxLayout *IntLayout, *StrLayout, *HSelectLayout, *ButtonLayout;
    QVBoxLayout *EditLayout, *VSelectLayout, *AllLayout;
    QRadioButton *Begin, *End;
    QPushButton *AddButton, *ExitButton;
public slots:
    void add();
};

#endif // ADDWIDGET_H
