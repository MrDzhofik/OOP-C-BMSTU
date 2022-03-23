// Laboratory6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "string.h"
#include "locale.h"
#include "stdlib.h"

using namespace std;

struct arr_ch { char mas[20]; arr_ch* ptrc; };
struct arr_int { int mas; arr_int* ptri; };

int main()
{
    arr_ch a, * first, * p, * q, *last;
    arr_int b, *second, * f, *l;
    char* space;
    int k = 0, n = 0, sum = 0, temp_int = 0;
    char str[50], temp[20];
    setlocale(0, "russian");
    cin.get(str, 50);
    first = new arr_ch;
    first->ptrc = nullptr;
    while ((str[k] != ' ') && (str[k] != '\0')) {
        k++;
        n++;
    }
    strncpy_s(first->mas, str, n);
    k++;
    space = strchr(str, ' ');
    n = 0;
    p = first;
    while (str[k - 1] != '\0'){
        if ((str[k] == ' ') || (str[k] == '\0')) {
            q = new arr_ch;
            q->ptrc = nullptr;
            p->ptrc = q;
            strncpy_s(q->mas, space + 1, n);
            space = strchr(space + 1, ' ');
            p = q;
            n = 0;
        }
        else {
            n++;
        }
        k++;
    }
    p = first;
    k = 1;
    while ((k != 0) || (p != NULL)) {
        q = p->ptrc;
        k = 0;
        while (q != NULL) {
            if (strlen(p->mas) > strlen(q->mas)) {
                strcpy_s(temp, q->mas);
                strcpy_s(q->mas, p->mas);
                strcpy_s(p->mas, temp);
                k++;
            }
            q = q->ptrc;
        }
        p = p->ptrc;
    }
    second = new arr_int;
    second->ptri = nullptr;
    second->mas = atoi(first->mas);
    p = first->ptrc;
    f = second;
    while (p != NULL){
        l = new arr_int;
        f->ptri = l;
        l->mas = atoi(p->mas);
        l->ptri = nullptr;
        f = l;
        p = p->ptrc;
    }
    p = first;
    f = second;
    puts("Список слов: ");
    while (p != NULL) {
        printf("%-4s ", p->mas);
        p = p->ptrc;
    }
    puts("\nСписок чисел: ");
    while (f != NULL) {
        printf("%-4d ", f->mas);
        f = f->ptri;
    }
    f = second;
    p = first;
    puts("\nСумма цифр: ");
    while (f != NULL) {
        temp_int = f->mas;
        while (temp_int != 0) {
            sum += (temp_int % 10);
            temp_int /= 10;
        }
        printf("%-4d ", sum, strlen(p->mas));
        f = f->ptri;
        p = p->ptrc;
        sum = 0;
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
