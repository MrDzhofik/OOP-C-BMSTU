#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QWidget>

class Win : public QWidget
{
    Q_OBJECT
public:
    QLineEdit* inputEdit;
    QPushButton* Button;
    QTextEdit* Text;
    QVBoxLayout* VLAD;
    QWidget* Widget;
public:
    Win(QWidget *parent = 0);
    ~Win();
public slots:
    void convert();
};
#endif // MAINWINDOW_H
