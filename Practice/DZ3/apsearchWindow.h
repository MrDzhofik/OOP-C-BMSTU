#ifndef APSEARCHWINDOW_H
#define APSEARCHWINDOW_H
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QTextEdit>
#include <QPainter>
#include <QTableWidget>
#include "file.h"
class apsearchWindow : public QWidget
{
    Q_OBJECT
public:
    BookFile F;
    QLabel *L1;
    QLabel *L2;
    QLabel *L3;
    QLabel *Llist;
    QLineEdit *LBord;
    QLineEdit *RBord;
    QPushButton *search;
    QPushButton *end;
    QTextEdit *list;
    QVBoxLayout *mainlay;
    QVBoxLayout *Labellay;
    QVBoxLayout *btnlay;
    QHBoxLayout *bordlay;
    QHBoxLayout *actlay;

public:
    apsearchWindow(QWidget *parent = 0);
    ~apsearchWindow();
public slots:
    void searchfor();
};
#endif // APSEARCHWINDOW_H
