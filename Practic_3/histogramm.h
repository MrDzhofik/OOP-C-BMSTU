#ifndef HISTOGRAMM_H
#define HISTOGRAMM_H

#include <QDialog>

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

private:
    Ui::Histogramm *ui;
};

#endif // HISTOGRAMM_H
