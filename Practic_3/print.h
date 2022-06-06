#ifndef PRINT_H
#define PRINT_H

#include <QDialog>
#include "Structure.h"
#include "QTableWidget"


namespace Ui {
class Print;
}

class Print : public QDialog
{
    Q_OBJECT

public:
    explicit Print(QWidget *parent = nullptr);
    void showall();
    void showrow(int, Product);
    ~Print();

private slots:
    void on_PrintButton_clicked(bool checked);

    void on_ExitButton_clicked(bool checked);

private:
    Ui::Print *ui;
};

#endif // PRINT_H
