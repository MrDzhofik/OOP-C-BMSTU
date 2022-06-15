#ifndef GRAPHWINDOW_H
#define GRAPHWINDOW_H
#include "file.h"
#include <QtCharts>
#include <QMainWindow>
#include <QLegend>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

class graphWindow : public QMainWindow
{
    Q_OBJECT
public:
    BookFile F;
    QPushButton *paint;
    QPushButton *end;
    QHBoxLayout *mainlay;
    QVBoxLayout *btnlay;
    QBarSeries *graph;
public:
    graphWindow(QWidget *parent = 0);
    ~graphWindow();
public slots:
    void activate();
};

#endif // GRAPHWINDOW_H
