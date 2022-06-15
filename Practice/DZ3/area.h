#ifndef AREA_H
#define AREA_H
#include <QWidget>
class Area:public QWidget
{
public:
    Area(QWidget *parent=0);
    ~Area();
    void paint(QPaintEvent *event);
};
#endif // AREA_H
