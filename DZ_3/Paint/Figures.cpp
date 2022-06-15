#include "Figures.h"

void Figure::move(float dx, QPainter *Painter){
    if (x >= 850) {
       flag = true;
    }
    else if (x <= 150){
       flag = false;
    }
    if (flag){
        x -= dx;
    }
    else {
        x += dx;
    }
    draw(Painter);
}
Figure::~Figure(void){
    qDebug("Delete Figure");
}
void MyRect::draw(QPainter *Painter)
{
    Painter->drawLine(x, y, x + 100, y);
    Painter->drawLine(x + 100, y, x + 100, y + 100);
    Painter->drawLine(x + 100, y + 100, x, y + 100);
    Painter->drawLine(x , y + 100, x, y);
}
MyRomb::~MyRomb(void){
    qDebug("Delete MyRomb");
}
void MyRomb::draw(QPainter *Painter){
    Painter->drawLine(x, y - h/2, x + d / 2, y);
    Painter->drawLine(x + d/2, y, x, y + h/2);
    Painter->drawLine(x, y + h/2, x - d/2, y);
    Painter->drawLine(x - d/2, y, x, y - h/2);
}
MyRect::~MyRect(void){
    qDebug("Delete MyRect");
}

