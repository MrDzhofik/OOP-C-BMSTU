#ifndef AREA_H
#define AREA_H
#include "figura.h"
#include "qwidget.h"
class Area : public QWidget
{
    int myTimer; // идентификатор таймера
    float alpha1;
    float alpha2;
    float alpha3;// угол поворота
    Circle *circle;
    Astro *astro;
    Astrocircle *astrocirc;
public:
    Area(QWidget *parent = 0);
    ~Area();
    protected:
//	обработчики событий
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void showEvent(QShowEvent *event);
    void hideEvent(QHideEvent *event);
};

#endif // AREA_H
