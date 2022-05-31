#ifndef OTHER_H
#define OTHER_H

#include <QDialog>

namespace Ui {
class Other;
}

class Other : public QDialog
{
    Q_OBJECT

public:
    explicit Other(QWidget *parent = nullptr);
    ~Other();

private:
    Ui::Other *ui;
};

#endif // OTHER_H
