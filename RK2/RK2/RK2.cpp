// RK2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "string.h"
#include "locale.h"
#include "stdlib.h"
using namespace std;

struct queue{
    char str[20]{};
    queue* next{}, * prev{};
};

int main()
{
    char vol[7] = { 'a', 'e', 'y', 'o', 'u', 'i', '\0' }, st[100], * space = nullptr, ans[100]{};
    int k = 0, n = 0, cnt = 0;
    queue *first, *p, *q, *last;
    cin.get(st, 100);
    setlocale(0, "russian");
    // 1) Создание списка
    first = new queue;
    first->prev = nullptr;
    first->next = nullptr;
    while ((st[k] != ' ') && (st[k] != '\0')) {
        k++;
        n++;
    }
    strncpy_s(first->str, st, n);
    k++;
    space = strchr(st, ' ');
    n = 0;
    p = first;
    while (st[k - 1] != '\0') {
        if ((st[k] == ' ') || (st[k] == '\0')) {
            q = new queue;
            q->next = nullptr;
            q->prev = p;
            p->next = q;
            strncpy_s(q->str, space + 1, n);
            space = strchr(space + 1, ' ');
            p = q;
            n = 0;
        }
        else {
            n++;
        }
        k++;
    }
    last = p;
    // 2) Вывод списка
    puts("Список: ");
    p = first;
    while (p != nullptr) {
        printf_s("%s ", p->str);
        p = p->next;
    }
    printf("%c", '\n');
    // 3) Подсчет слов и вывод
    p = first;
    while (p != nullptr) {
        if (strchr(vol, p->str[0])) {
            cnt++;
        }
        p = p->next;
    }
    puts("Количество слов, начинающихся на гласную:");
    printf_s("%d\n", cnt);
    puts("Слова, начинающиеся на гласную букву:");
    p = first;
    while (p != nullptr) {
        if (strchr(vol, p->str[0])) {
            printf_s("%s ", p->str);
        }
        p = p->next;
    }
    // 4) Освобождение памяти
    p = last;
    while (p != nullptr) {
        q = p;
        p = p->prev;
        delete q;
    }
    puts("\nПамять освобождена");
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
