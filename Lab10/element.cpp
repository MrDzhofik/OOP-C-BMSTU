#include "element.h"
#include "stdio.h"

TElement::~TElement(){};

TList::~TList(){

}

void TList::Add(TElement *e){
    if (first == nullptr){
        last=e;
        first=e;
        first->prev=nullptr;
        last->next=nullptr;
    }
    else {
        if (e->flag){
            first->prev = e;
            e->next = first;
            e->prev = nullptr;
            first = e;
        }
        else {
            last->next = e;
            e->prev = last;
            e->next = nullptr;
            last = e;
        }
    }
}

void TList::DelFirst(){
    if (first != nullptr){
        cur = first;
        first=first->next;
        first->prev = nullptr;
        delete cur;
    }
}

void TList::DelLast(){
    if (last != nullptr){
        cur = last;
        last=last->prev;
        last->next = nullptr;
        delete cur;
    }
}

void TList::Print(QTextEdit *f)
{
    cur = first;
    while (cur != nullptr){
        f->append(cur->Print());
        cur=cur->next;
    }
}


void TListImproved::Sum(QLineEdit *f)
{
    int sum = 0, j = 0;
    bool ok;
    for (TElement *i = first; i != nullptr; i = i->next){
        j = i->PrSt().toInt(&ok);
        if (ok){
            sum += i->PrSt().toInt();
        }
    }
    f->setText(QString::number(sum));
}
