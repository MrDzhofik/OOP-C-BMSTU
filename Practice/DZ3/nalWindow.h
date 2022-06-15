#ifndef NALWINDOW_H
#define NALWINDOW_H
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
class nalWindow : public QWidget
{
    Q_OBJECT
public:
    BookFile F;
    QLabel *author;
    QLabel *name;
    QLabel *publishment;
    QLabel *year;
    QLineEdit *Tauthor;
    QLineEdit *Tname;
    QLineEdit *Tpublishment;
    QLineEdit *Tyear;
    QPushButton *back;
    QPushButton *next;
    QPushButton *end;
    QVBoxLayout *mainlay;
    QVBoxLayout *Labellay;
    QVBoxLayout *Textlay;
    QHBoxLayout *Editlay;
    QHBoxLayout *btnlay;
    int j;
    book mas[20];
    book b;
public:
    nalWindow(QWidget *parent = 0);
    ~nalWindow();
public slots:
    void nextbutton();
    void prevbutton();
};
#endif // NALWINDOW_H
