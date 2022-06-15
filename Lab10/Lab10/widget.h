#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <stack.h>
#include <QLabel>


class Widget : public QWidget
{
    Q_OBJECT
public:
    QWidget *Win;
    QLineEdit *inputEdit;
    QPushButton *chbutton;
    QPushButton *itbutton;
    QPushButton *delbutton;
    QLabel *minlabel;
    QTextEdit *text;
    QTextEdit *mintext;
    QHBoxLayout *Hlayout;
    QHBoxLayout *Hminlayout;
    QVBoxLayout *Vlayout;
    newstack S;
public:
    Widget(QWidget *parent = 0);
    ~Widget();
public slots:
    void addch();
    void addit();
    void del();
};
#endif // WIDGET_H
