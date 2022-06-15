#ifndef FIGURES_H
#define FIGURES_H
#include <QPainter>

class Figure
{
protected:
    int x, y, dx;
    bool flag = true;
    virtual void draw(QPainter *Painter)=0;
public:
    Figure(int X,int Y): x(X), y(Y) {
        qDebug("Figure");
    }
    void move(float DX, QPainter *Painter);
    virtual ~Figure(void);
};

class MyRect: public Figure{
protected:
    void draw(QPainter *Painter);
public:
    MyRect(int x,int y) : Figure(x,y){
        qDebug("MyRect");
    }
    ~MyRect(void);
};

class MyRomb: public Figure{
private:
    int d, h;
    void draw(QPainter *Painter);
public:
    MyRomb(int X, int Y, int D, int H) : Figure(X, Y){
        d = D;
        h = H;
        qDebug("MyRomb");
    }
    ~MyRomb(void);
};
#endif // FIGURES_H
