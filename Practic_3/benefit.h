#ifndef BENEFIT_H
#define BENEFIT_H

#include <QDialog>

namespace Ui {
class Benefit;
}

class Benefit : public QDialog
{
    Q_OBJECT

public:
    explicit Benefit(QWidget *parent = nullptr);
    ~Benefit();

private slots:
    void on_BenefitButton_clicked(bool checked);

    void on_ExitButton_clicked(bool checked);

private:
    Ui::Benefit *ui;
};

#endif // BENEFIT_H
