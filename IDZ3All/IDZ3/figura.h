#ifndef FIGURA_H
#define FIGURA_H
#include <QtGui>
class Figura
{
protected:
    int x,y,halflen,dx,dy,r;
    virtual void draw(float Alpha,QPainter *Painter)=0;
public:
    Figura(int X,int Y,int Halflen):
                                 x(X),y(Y),halflen(Halflen){}
    void move(float Alpha,QPainter *Painter);
};
class Circle:public Figura
{
protected:
    void draw(float Alpha,QPainter *Painter);
public:
    Circle(int x,int y,int halflen):Figura(x,y,halflen){}
};
class Astro:public Figura
{
protected:
    void draw(float Alpha,QPainter *Painter);
public:
    Astro(int x,int y,int halflen):Figura(x,y,halflen){}
};
class Astrocircle:public Figura
{
protected:
    void draw(float Alpha,QPainter *Painter);
public:
    Astrocircle(int x,int y,int halflen):Figura(x,y,halflen){}
};
#endif // FIGURA_H
