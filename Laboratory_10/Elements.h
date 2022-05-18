#ifndef ELEMENTS_H
#define ELEMENTS_H
#include "stdio.h"
#include "string.h"

class TElem{
public:
    void *next, *prev;
    TElem(){
        next = nullptr;
        prev = nullptr;
    }
    virtual void Print() = 0;
    virtual ~TElem(){
        puts("Delete TElem");
    }
};

class TStNum: public TElem{
public:
    int num;
    char *st;
    TStNum(){
        num = 0;
        st = nullptr;
    }
    virtual void Print(){
        printf("%d", num);
        printf("%s", st);
    };
    virtual ~TStNum(){
        puts("Delete TStNum");
    }
};

class TSpisok{
    int len;
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
private:
    TStNum *first, *last, *curr;
};


#endif // ELEMENTS_H
