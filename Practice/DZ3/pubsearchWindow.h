#ifndef PUBSEARCHWINDOW_H
#define PUBSEARCHWINDOW_H
#include "file.h"
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QTextEdit>
#include <QPainter>
#include <QTableWidget>
class pubsearchWindow : public QWidget
{
    Q_OBJECT
public:
    BookFile F;
    QLabel *pub;
    QLabel *list;
    QLineEdit *Tpub;
    QPushButton *search;
    QPushButton *end;
    QTextEdit *Tlist;
    QHBoxLayout *mainlay;
    QVBoxLayout *Labellay;
    QVBoxLayout *btnlay;
    QHBoxLayout *bordlay;
    QVBoxLayout *actlay;

public:
    pubsearchWindow(QWidget *parent = 0);
    ~pubsearchWindow();
public slots:
    void searchfor();
};

#endif // PUBSEARCHWINDOW_H
