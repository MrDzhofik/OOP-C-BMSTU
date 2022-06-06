  #ifndef OTHER_H
#define OTHER_H

#include <QDialog>
#include "max.h"
#include "sum.h"
#include "benefit.h"
#include "histogramm.h"


namespace Ui {
class Other;
}

class Other : public QDialog
{
    Q_OBJECT

public:
    explicit Other(QWidget *parent = nullptr);
    ~Other();
    Max *max;
    Sum *sum;
    Benefit *benefit;
    Histogramm *histogramm;

private slots:
    void on_MaxButton_clicked(bool checked);

    void on_SumButton_clicked(bool checked);

    void on_BenefitButton_clicked(bool checked);

    void on_HistogrammButton_clicked(bool checked);

private:
    Ui::Other *ui;
};

#endif // OTHER_H
