#ifndef DELETEWIDGET_H
#define DELETEWIDGET_H
#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QRadioButton>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

class DeleteWidget: public QDialog{
    Q_OBJECT
public:
    DeleteWidget(QWidget *parent = 0);
    virtual ~DeleteWidget(){};
protected:
    QRadioButton *Begin, *End;
    QLabel *SelectLabel;
    QPushButton *DeleteButton, *ExitButton;
    QHBoxLayout *HSelectLayout, *ButtonLayout;
    QVBoxLayout *VSelectLayout, *mainLayout;
};

#endif // DELETEWIDGET_H
