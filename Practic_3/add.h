#ifndef ADD_H
#define ADD_H

#include <QDialog>

namespace Ui {
class Add;
}

class Add : public QDialog
{
    Q_OBJECT

public:
    explicit Add(QWidget *parent = nullptr);
    ~Add();

private slots:
    void on_AddButton_clicked(bool checked);

private:
    Ui::Add *ui;
};

#endif // ADD_H
