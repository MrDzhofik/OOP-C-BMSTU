#ifndef ELEMENTS_H
#define ELEMENTS_H
#include "stdio.h"
#include "string.h"
#include <QString>
#include <QTextEdit>

class TElem{
public:
    void *next, *prev;
    TElem(){
        next = nullptr;
        prev = nullptr;
    }
    virtual void Print(QTextEdit *textEdit) = 0;
    virtual ~TElem(){
        puts("Delete TElem");
    }
};

class TStNum: public TElem{
public:
    int num;
    QString st;
    TStNum(){
        num = 0;
        st = nullptr;
    }
    void Print(QTextEdit *textEdit) override{
        textEdit->setText(QString::number(num));
        textEdit->setText(st);

    };
    virtual ~TStNum(){
        puts("Delete TStNum");
    }
};

class TSpisok{
protected:
    int len;
    TStNum *first, *last, *curr;
public:
    TSpisok(){
        len = 0;
        first = nullptr;
        last = nullptr;
        curr = nullptr;
    }
    void add_first(int num, const char *str);
    void add_number(TStNum *pointer, int num);
    void add_string(TStNum *pointer, const char *str);
    void add_right(int num, const char *str);
    void add_left(int num, const char *str);
    void add(bool flag, int num, const char *str);
    void Check(TStNum *pointer, int num, const char *str);
    void pop_left();
    void pop_right();
    void pop();
    void Print();
    virtual ~TSpisok(){
        delete first;
        delete last;
        delete curr;
    };
};

class TSpisokSum : public TSpisok{
public:
    TSpisokSum(void): TSpisok(){};
    ~TSpisokSum();
    int Sum();
};


#endif // ELEMENTS_H
