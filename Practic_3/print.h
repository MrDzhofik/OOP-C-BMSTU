#ifndef PRINT_H
#define PRINT_H

#include <QDialog>

namespace Ui {
class Print;
}

class Print : public QDialog
{
    Q_OBJECT

public:
    explicit Print(QWidget *parent = nullptr);
    ~Print();

private slots:
    void on_PrintButton_clicked(bool checked);

private:
    Ui::Print *ui;
};

#endif // PRINT_H
