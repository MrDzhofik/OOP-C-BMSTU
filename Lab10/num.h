#ifndef NUM_H
#define NUM_H
#include "element.h"
class TNum:public TElement{
public:
    float num;
    TNum(float n):TElement(),num(n) {}
    ~TNum() override;
    QString Print() override;
    QString PrSt() override;
};

class TChar:public TElement{
public:
    char* ch;
    TChar(char* c):TElement() {
        ch = new char[strlen(c) + 1];
        strcpy(ch,c);
    }
    ~TChar() override;
    QString Print() override;
    QString PrSt() override;
};

void Show(TElement *e);

#endif // NUM_H
