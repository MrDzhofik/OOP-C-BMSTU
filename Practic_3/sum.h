#ifndef SUM_H
#define SUM_H

#include <QDialog>

namespace Ui {
class Sum;
}

class Sum : public QDialog
{
    Q_OBJECT

public:
    explicit Sum(QWidget *parent = nullptr);
    ~Sum();

private slots:
    void on_SumButton_clicked(bool checked);

    void on_ExitButton_clicked(bool checked);

private:
    Ui::Sum *ui;
};

#endif // SUM_H
