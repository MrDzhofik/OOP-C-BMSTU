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

private:
    Ui::Max *ui;
};

#endif // MAX_H
