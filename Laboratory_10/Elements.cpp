#include "Elements.h"
#include "stdio.h"
#include "string.h"

void TSpisok::add_number(TStNum *pointer, int num){
    pointer->num = num;
}

void TSpisok::add_string(TStNum *pointer, const char *str){
    strcpy_s(pointer->st, 20, str);
}


void TSpisok::Check(TStNum *pointer, int num = 0, const char *str = nullptr){
    if ((str != nullptr) && (num != 0)){
        add_number(pointer, num);
        add_string(pointer, str);
    }
    if ((num == 0) && (str != nullptr)){
        add_number(pointer, num);
    }
    if ((str == nullptr) && (num != 0)){
        add_number(pointer, strlen(str));
        add_string(pointer, str);
    }
}

void TSpisok::add_first(int num = 0, const char* str = nullptr){
    first = new TStNum;
    Check(first, num, str);
    first->next = nullptr;
    first->prev = nullptr;
    last = first;
}

void TSpisok::add_left(int num = 0, const char *str = nullptr){
    curr = new TStNum;
    Check(curr, num, str);
    curr->next = first;
    curr->prev = nullptr;
    first->prev = curr;
    first = curr;
}

void TSpisok::add_right(int num = 0, const char* str = nullptr){
    curr = new TStNum;
    Check(curr, num, str);
    curr->prev = last;
    curr->next = nullptr;
    last->next = curr;
    last = curr;
}

void TSpisok::add(bool flag, int num = 0, const char *str = nullptr){
    if (len == 0){
        add_first(num, str);
    }
    else if (flag){
        add_right(num, str);
    }
    else{
        add_left(num, str);
    }
    len++;
}

void TSpisok::pop_right(){
    if (len > 1){
        curr = last;
        last = (TStNum*)curr->prev;
        delete curr;
    }
}

void TSpisok::pop_left(){
    if (len > 1){
        curr = first;
        first = (TStNum*)curr->next;
        delete curr;
    }
}

void TSpisok::Print(){
    curr = first;
    while (curr != nullptr){
        curr->Print();
        curr = (TStNum*)curr->next;
    }
}

int TSpisokSum::Sum(){
    int sum = 0;
    curr = first;
    while (curr != nullptr){
        sum += curr->num;
        curr = (TStNum*)curr->next;
    }
    return sum;
}

