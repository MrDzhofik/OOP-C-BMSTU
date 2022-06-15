#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QTextEdit>
#include <QPainter>
#include <QTableWidget>
#include "addWindow.h"
#include "apsearchWindow.h"
#include "biblioWindow.h"
#include "deleteWindow.h"
#include "graphWindow.h"
#include "nalWindow.h"
#include "pubsearchWindow.h"


class Widget : public QWidget
{
    Q_OBJECT
public:
    QLabel *welcome;
    QPushButton *add;
    QPushButton *del;
    QPushButton *nal;
    QPushButton *authper;
    QPushButton *izd;
    QPushButton *graph;
    QPushButton *biblio;
    QPushButton *end;
    QVBoxLayout *btnlay;
    QVBoxLayout *endlay;
    QHBoxLayout *mainlay;
    addWindow aw;
    deleteWindow dw;
    nalWindow nw;
    apsearchWindow apw;
    pubsearchWindow psw;
    graphWindow gw;
    biblioWindow bw;
public:
    Widget(QWidget *parent = 0);
    ~Widget();
public slots:
    void addWindowActivate();
    void deleteWindowActivate();
    void nalWindowActivate();
    void apsearchWindowActivate();
    void pubsearchWindowActivate();
    void graphWindowActivate();
    void biblioWindowActivate();
};

#endif // WIDGET_H
