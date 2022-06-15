#include "area.h"
#include <QPainter>

Area::Area(QWidget *parent):QWidget(parent)
{
    setFixedSize(QSize(1200,600));
}

void Area::paint(QPaintEvent *event)
{
    QPainter Painter(this);
}

Area::~Area()
{

}

