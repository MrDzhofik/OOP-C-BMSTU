#ifndef ELEMENT_H
#define ELEMENT_H
#include <stdio.h>
#include <QTextEdit>
#include <QLineEdit>

class TElement {
public:
    TElement *prev,*next;
    bool flag;
    TElement() {
        prev=next=NULL;
    }
    virtual ~TElement();
    virtual QString Print()=0;
    virtual QString PrSt()=0;
  };
class TList {
protected:
    TElement *first,*last,*cur;
public:
    TList() {
        first=last=cur=NULL;
    }
    ~TList();
    void Add(TElement *e);
    void DelFirst();
    void DelLast();
    void Print(QTextEdit *f);
  };

class TListImproved : public TList{
public:
    TListImproved():TList(){};
    void Sum(QLineEdit *f);
};


#endif // ELEMENT_H
