// Practic2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "stdio.h"
#include "string.h"
#include "locale.h"
#include <cmath>

void yx(float a, float b) {
    printf("x");
    for (float i = a; i < b; i++) {
        printf("%6.2f", i);
    }
    puts("\n-------------------------------------------------------------------");
    printf("y");
    for (float i = a; i < b; i++) {
        printf("%6.2f", i);
    };
    puts("\n");
}

void yx2(float a, float b) {
    printf("x");
    for (float i = a; i < b; i++) {
        printf("%8.2f", i);
    }
    puts("\n-------------------------------------------------------------------");
    printf("y");
    for (float i = a; i < b; i++) {
        printf("%8.2f", i*i);
    };
    puts("\n");
}

void cosx(float a, float b) {
    printf("x");
    for (float i = a; i < b; i++) {
        printf("%8.2f", i);
    }
    puts("\n--------------------------------------------");
    printf("y");
    for (float i = a; i < b; i++) {
        printf("%8.2f", cos(i));
    };
    puts("\n");
}

void sinx(float a, float b){
    printf("x");
    for (float i = a; i < b; i++) {
        printf("%7.2f", i);
    }
    puts("\n---------------------------------------------");
    printf("y");
    for (float i = a; i < b; i++) {
        printf("%7.2f", sin(i));
    };
    puts("\n");
}

int main()
{
    int a = 1, b = 2;
    int select_fun = 0, select_op = 0;
    setlocale(0, "russian");
    while ((a != 0) || (b != 0)) {
        puts("Введите интервал");
        scanf_s("%d %d", &a, &b);
        puts("Выберите функцию: \n1) y = x \n2) y = x^2 \n3) sin(x) \n4) cos(x) \n5) Выход");
        scanf_s("%d", &select_op);
        if (select_op == 5) {
            puts("На этом наши полномочия все");
            return 0;
        }
        puts("Выберите операцию:\n1) Вычисление заданной функции на заданном интервале");
        scanf_s("%d", &select_fun);
        switch (select_fun) {
            case 1:
                if (select_op == 1) {
                    yx(a, b);
                    continue;
                }
                else if (select_op == 2) {
                    yx2(a, b);
                    continue;
                }
                else if (select_op == 3) {
                    sinx(a, b);
                    continue;
                }
                else if (select_op == 4) {
                    cosx(a, b);
                    continue;
                }
            default:
                continue;
        }
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
