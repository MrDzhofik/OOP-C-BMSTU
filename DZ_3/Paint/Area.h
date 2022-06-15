#ifndef AREA_H
#define AREA_H
#include "Figures.h"
#include <QWidget>
#include <QTimerEvent>

class Area : public QWidget
{
    int myTimer; // идентификатор таймера
public:
    Area(QWidget *parent = nullptr);
    ~Area(void);
    MyRect *myrect;
    MyRomb *myromb, *myromb2, *myromb3;
protected:
//	обработчики событий
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void showEvent(QShowEvent *event);
    void hideEvent(QHideEvent *event);
};

#endif // AREA_H
