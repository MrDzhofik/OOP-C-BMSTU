#include <math.h>
#include "figura.h"
void Figura::move(float Alpha,QPainter *Painter)
{
    dx=(halflen-25)*cos(Alpha);
    dy=(halflen-25)*sin(Alpha);
    draw(Alpha,Painter);
}
void Circle::draw(float Alpha,QPainter *Painter)
{
    if(abs(Alpha)<=3.14) Painter->drawEllipse(x+dx,y+dy,50,50);
    else Painter->drawEllipse(x+dx,y-dy,50,50);
}
void Astro::draw(float Alpha,QPainter *Painter)
{
    if(abs(Alpha)<=3.14) {

        Painter->drawArc(x+dx,y+dy,50,50,0*16,90*16);
        Painter->drawArc(x+50+dx,y+dy,50,50,90*16,90*16);
        Painter->drawArc(x+50+dx,y-50+dy,50,50,180*16,90*16);
        Painter->drawArc(x+dx,y-50+dy,50,50,270*16,90*16);
    }
    else {

        Painter->drawArc(x+dx,y-dy,50,50,0*16,90*16);
        Painter->drawArc(x+50+dx,y-dy,50,50,90*16,90*16);
        Painter->drawArc(x+50+dx,y-50-dy,50,50,180*16,90*16);
        Painter->drawArc(x+dx,y-50-dy,50,50,270*16,90*16);
    };
}
void Astrocircle::draw(float Alpha,QPainter *Painter)
{
    if(abs(Alpha)<=3.14) {
        Painter->drawEllipse(x+dx+25,y+dy-25,50,50);
        Painter->drawArc(x+dx,y+dy,50,50,0*16,90*16);
        Painter->drawArc(x+50+dx,y+dy,50,50,90*16,90*16);
        Painter->drawArc(x+50+dx,y-50+dy,50,50,180*16,90*16);
        Painter->drawArc(x+dx,y-50+dy,50,50,270*16,90*16);
    }
    else {
        Painter->drawEllipse(x+dx+25,y-dy-25,50,50);
        Painter->drawArc(x+dx,y-dy,50,50,0*16,90*16);
        Painter->drawArc(x+50+dx,y-dy,50,50,90*16,90*16);
        Painter->drawArc(x+50+dx,y-50-dy,50,50,180*16,90*16);
        Painter->drawArc(x+dx,y-50-dy,50,50,270*16,90*16);
    };
}
