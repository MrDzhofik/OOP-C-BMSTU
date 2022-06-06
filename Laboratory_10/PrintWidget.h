#ifndef PRINTWIDGET_H
#define PRINTWIDGET_H
#include <QDialog>
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>

class PrintWidget: public QDialog{
    Q_OBJECT
public:
    PrintWidget(QWidget *parent = 0);
    virtual ~PrintWidget(){};
protected:
    QTextEdit *PrintEdit;
    QPushButton *ExitButton;
    QVBoxLayout *mainLayout;
};

#endif // PRINTWIDGET_H
