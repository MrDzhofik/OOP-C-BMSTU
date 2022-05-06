#ifndef Qstr_h
#define Qstr_h

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>

class Win : public QWidget
{
protected:
    QLineEdit *input_edit;
    QTextEdit *output_edit;
    QPushButton *conv;
    QPushButton *exit;

public:
    Win(QWidget *parent = nullptr);
};

#endif