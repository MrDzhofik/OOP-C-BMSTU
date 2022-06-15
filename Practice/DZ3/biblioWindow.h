#ifndef BIBLIOWINDOW_H
#define BIBLIOWINDOW_H
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
class biblioWindow : public QWidget
{
    Q_OBJECT
public:
    BookFile F;
    QTableWidget *Table;
    QPushButton *end;
    QHBoxLayout *mainlay;

public:
    biblioWindow(QWidget *parent = 0);
    ~biblioWindow();
public slots:
    void Tshow();
};

#endif // BIBLIOWINDOW_H
