// Markovka.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

using namespace std;
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <locale.h>

struct spisok {
    double  number;
    spisok* prev, * next;
};

int main()
{
    spisok* first, * last, * p, * q, * first2, * last2, * p2, * q2;
    int l, f;
    char string[100];
    char ch[15];
    double num[20];
    for (l = 0; l < 100; l++) string[l] = ' ';
    for (l = 0; l < 15; l++) ch[l] = ' ';
    setlocale(LC_ALL, "Russian");
    cout << "Введите последовательность вещественных чисел:" << endl;
    cin.getline(string, 100);
    int k = 0, nc = 0;
    for (l = 0; l < 100; l++) if (string[l] != ' ' and string[l + 1] != ' ') { ch[k] = string[l]; k++; }
    else if (string[l] != ' ' and string[l + 1] == ' ') { ch[k] = string[l];  num[nc] = atof(ch); nc++;  for (f = 0; f < 15; f++) ch[f] = ' '; k = 0; }
    printf("\n");
    first = new spisok;
    first->prev = NULL;
    first->next = NULL;
    first->number = num[0];
    p = first;
    for (l = 1; l < nc; l++) {
        q = new spisok;
        q->number = num[l];
        q->next = NULL;
        q->prev = p;
        p->next = q;
        p = q;
    }
    cout << "Список 1:" << endl;
    last = p;
    q = first;
    while (q != NULL) {
        cout << q->number << " ";
        q = q->next;
    }
    printf("\n");
    q = first;
    p = last;
    first2 = new spisok;
    first2->prev = NULL;
    first2->next = NULL;
    first2->number = q->number + p->number;
    q = q->next;
    p = p->prev;
    p2 = first2;
    for (l = 1; l < nc; l++) {
        q2 = new spisok;
        q2->number = q->number + p->number;
        if (q->next != NULL) q = q->next;
        if (p->prev != NULL) p = p->prev;
        q2->next = NULL;
        q2->prev = p2;
        p2->next = q2;
        p2 = q2;
    }
    cout << "Список 2:" << endl;
    last2 = p2;
    q2 = first2;
    while (q2 != NULL) {
        cout << q2->number << " ";
        q2 = q2->next;
    }
    p = first;
    while (p != NULL) {
        q = p->next;
        delete(p);
        p = q;
    }
    p2 = first2;
    while (p2 != NULL) {
        q2 = p2->next;
        delete(p2);
        p2 = q2;
    }
    return 0;
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
