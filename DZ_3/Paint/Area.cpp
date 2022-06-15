#include "Area.h"

Area::Area(QWidget *parent):QWidget(parent)
{
    setFixedSize(QSize(1200, 750));
    myromb = new MyRomb(150, 250, 150, 150);
    myromb2 = new MyRomb(150, 475, 250, 150);
    myromb3 = new MyRomb(150, 475, 150, 250);
    myrect = new MyRect(100, 50);
}

void Area::showEvent(QShowEvent *){
    myTimer=startTimer(50);           // создать таймер
}
void Area::paintEvent(QPaintEvent *){
    QPainter painter(this);
    painter.setPen(Qt::black);
    myromb2->move(4, &painter);
    myromb3->move(4, &painter);
    myromb->move(2, &painter);
    myrect->move(3, &painter);
}
void Area::timerEvent(QTimerEvent *event){
    if (event->timerId() == myTimer) // если наш таймер
    {
       update();                     // обновить внешний вид
    }
    else
       QWidget::timerEvent(event);   // иначе передать для стандартной
                                                                                        // обработки
}
void Area::hideEvent(QHideEvent *){
    killTimer(myTimer);             // уничтожить таймер
}
Area::~Area(void)
{
    delete myromb;
    delete myromb2;
    delete myromb3;
    delete myrect;
}
