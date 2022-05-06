#ifndef Qstr_h
#define Qstr_h

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>

class Win : public QWidget
{
    Q_OBJECT
protected:
    QLineEdit *input_edit;
    QTextEdit *output_edit;
    QPushButton *conv;
    QPushButton *exit;
    int flag = 0;

public:
    Win(QWidget *parent = nullptr);
public slots:
    void write();
    void write_normal(QString str);
    void write_lower(QString str);
    void write_upper(QString str);
};

#endif
