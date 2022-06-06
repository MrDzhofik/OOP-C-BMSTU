#ifndef CONTAINERWIDGET_H
#define CONTAINERWIDGET_H
#include "AddWidget.h"
#include "DeleteWidget.h"
#include "PrintWidget.h"
#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

class ContainerWidget: public QDialog{ // Главный класс
    Q_OBJECT
public:
    ContainerWidget(QWidget *parent = 0);
    virtual ~ContainerWidget(){};
protected:
    QPushButton *AddButton;
    QPushButton *DeleteButton;
    QPushButton *PrintButton;
    QPushButton *ExitButton;
    QVBoxLayout *VLayout;
    QHBoxLayout *HLayout;
    AddWidget *add;
    DeleteWidget *del;
    PrintWidget *print;


public slots:
    void show_add(){
        add->show();
    };
    void show_delete(){
        del->show();
    };
    void show_print(){
        print->show();
    };
};

#endif // CONTAINERWIDGET_H
