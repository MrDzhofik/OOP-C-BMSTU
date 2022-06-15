#ifndef STACK_H
#define STACK_H
#include <QTextEdit>
struct zap
{
    float item;
    QString ch;
    bool flagch;
};
struct input
{
    zap elem;
    input* elprev;
};

class stack
{
protected:
   input* first, *ptr, *el;
public:
   void create()
   {
      first = new input;
      first->elprev=nullptr;
      ptr=first;
   };
   void addch(QString str)
   {
       ptr=first;
       el = new input;
       el->elprev=ptr;
       el->elem.ch=str;
       el->elem.flagch=true;
       first=el;
       ptr=el;
   };
   void addit(QString str)
   {
       ptr=first;
       float f=str.toFloat();
       el = new input;
       el->elprev=ptr;
       el->elem.item=f;
       el->elem.flagch=false;
       first=el;
       ptr=el;
   };
   void del()
   {
       ptr=first;
       if(ptr->elprev!=nullptr) {first=ptr->elprev;delete(ptr);}
   };
   void outp(QTextEdit* QText)
   {
        ptr=first;
        QString toit;
        while(ptr->elprev!=nullptr){
            if(ptr->elem.flagch) QText->append(ptr->elem.ch);
            else QText->append(toit.setNum(ptr->elem.item));
            ptr=ptr->elprev;
        }
   };
   void clear()
   {
       while(ptr->elprev!=nullptr) del();
       delete(ptr);
   }
};

class newstack:public stack
{
public:
    void min(QTextEdit* QText){
        float min=999999999;
        ptr=first;
        QString toit;
        while(ptr->elprev!=nullptr){
            if(ptr->elem.flagch==false && ptr->elem.item<min) min=ptr->elem.item;
            ptr=ptr->elprev;
        }
        QText->append(toit.setNum(min));
    };
};

#endif // STACK_H
