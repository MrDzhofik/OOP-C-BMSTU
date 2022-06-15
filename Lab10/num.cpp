#include "num.h"

TNum::~TNum() {};

QString TNum::Print() {
   QString s;
   s.setNum(num);
   return s;
}

QString TNum::PrSt()
{
    return QString::number(num);
}

TChar::~TChar() {};

QString TChar::Print() {
   QString s1(ch);
   return s1;
}

QString TChar::PrSt()
{
    QString s(ch);
    return s;
}

void Show(TElement *e) {
   e->Print();
}
