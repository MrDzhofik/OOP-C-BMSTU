﻿// Practic2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "stdio.h"
#include "string.h"
#include "locale.h"

void interval() {
    puts("Введите интервал или 0 0 для завершения:");
}

void select_func() {
    puts("Выберите функцию: \n1) y = kx + b \n2) y = ax^2 + bx + c \n3) sin(x) \n4) cos(x) \n 5) Назад");
}

void select_oper() {
    puts("Выберите операцию: \n1) Преобразование во внутреннее представление\n2) Вычисление заданной функции на заданном интервале\n3) Назад");
}

int main()
{
    float a = 0, b = 0;
    int select_fun = 0, select_op = 0;
    setlocale(0, "russian");
    interval();
    scanf_s("%f %f", &a, &b);
    while ((a != 0) && (b != 0)) {
        select_func();
        scanf_s("%d", &select_fun);
        if (select_fun == 5) {
            puts("На этом наши полномочия все");
        }

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