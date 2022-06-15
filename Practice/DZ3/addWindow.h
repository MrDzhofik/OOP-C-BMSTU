#ifndef ADDWINDOW_H
#define ADDWINDOW_H
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
class addWindow : public QWidget
{
    Q_OBJECT
public:
    BookFile F;
    QWidget *addWin;
    QLabel *author;
    QLabel *name;
    QLabel *publishment;
    QLabel *year;
    QLabel *copynum;
    QLineEdit *Tauthor;
    QLineEdit *Tname;
    QLineEdit *Tpublishment;
    QLineEdit *Tyear;
    QLineEdit *Tcopynum;
    QPushButton *add;
    QPushButton *end;
    QVBoxLayout *mainlay;
    QVBoxLayout *Labellay;
    QVBoxLayout *Textlay;
    QHBoxLayout *Editlay;
    QHBoxLayout *btnlay;

public:
    addWindow(QWidget *parent = 0);
    ~addWindow();

public slots:
    void addbook();
};
#endif // ADDWINDOW_H
