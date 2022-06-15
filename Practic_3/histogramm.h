#ifndef HISTOGRAMM_H
#define HISTOGRAMM_H

#include <QDialog>
#include <QtCharts>

namespace Ui {
class Histogramm;
}

class Histogramm : public QDialog
{
    Q_OBJECT

public:
    explicit Histogramm(QWidget *parent = nullptr);
    ~Histogramm();

private slots:
    void on_HistogrammButton_clicked(bool checked);

    void on_ExitButton_clicked(bool checked);

private:
    Ui::Histogramm *ui;
};

#endif // HISTOGRAMM_H
