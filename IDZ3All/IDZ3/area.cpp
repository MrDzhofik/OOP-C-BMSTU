#include "area.h"
Area::Area(QWidget *parent):QWidget(parent)
{
    setFixedSize(QSize(450,200));
    circle=new Circle(70,70,50);
    astro=new Astro(170,95,50);
    astrocirc=new Astrocircle(270,95,50);
    alpha1=0;
    alpha2=0;
    alpha3=0;

}
void Area::showEvent(QShowEvent *)
{
    myTimer=startTimer(50);           // создать таймер
}
void Area::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(Qt::red);
    circle->move(alpha1,&painter);
    astro->move(alpha2,&painter);
    astrocirc->move(alpha3,&painter);
}
void Area::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == myTimer) // если наш таймер
    {
       alpha1=alpha1+0.2;
       alpha2=alpha2+0.1;
       alpha3=alpha3+0.4;
       if(alpha1>6.28) alpha1-=6.28;
       if(alpha2>6.28) alpha2-=6.28;
       if(alpha3>6.28) alpha3-=6.28;
       update();                     // обновить внешний вид
    }
    else
       QWidget::timerEvent(event);   // иначе передать для стандартной
                                                                                        // обработки
}
void Area::hideEvent(QHideEvent *)
{
    killTimer(myTimer);             // уничтожить таймер
}
Area::~Area()
{
    delete circle;
    delete astro;
    delete astrocirc;
}
