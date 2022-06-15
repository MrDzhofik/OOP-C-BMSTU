#ifndef MAX_H
#define MAX_H

#include <QDialog>

namespace Ui {
class Max;
}

class Max : public QDialog
{
    Q_OBJECT

public:
    explicit Max(QWidget *parent = nullptr);
    ~Max();

private slots:
    void on_maxButton_clicked(bool checked);
    void on_exitButton_clicked(bool checked);

private:
    Ui::Max *ui;
};

#endif // MAX_H
