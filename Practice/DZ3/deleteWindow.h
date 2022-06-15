#ifndef DELETEWINDOW_H
#define DELETEWINDOW_H
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
class deleteWindow : public QWidget
{
    Q_OBJECT
public:
    BookFile F;
    QLabel *name;
    QLineEdit *Tname;
    QPushButton *del;
    QPushButton *end;
    QPushButton *delAll;
    QVBoxLayout *mainlay;
    QHBoxLayout *namelay;
    QHBoxLayout *btnlay;

public:
    deleteWindow(QWidget *parent = 0);
    ~deleteWindow();
public slots:
    void delbook();
    void delall();
};

#endif // DELETEWINDOW_H
