// Laboratory5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "locale.h"
#include "string.h"
#include "stdlib.h"

using namespace std;

int main()
{
    char curr[50], ans[50]{}, temp[50]{}, * ptr, * deleted[100]{};
    int n = 0, i = 0, j = 0, k = 0;
    bool flag = false, first = true;
    setlocale(0, "russian");
    cin.get(curr, 50);
    ptr = curr;
    while (curr[i - 1] != '\0') {
        if (curr[i] == 'e') {
            if (!flag) {
                flag = true;
                n++;
            }
            else {
                n = 0;
                while ((curr[i] != ' ') && (curr[i] != '\0')) {
                    i++;
                }
                j++;
                ptr = strchr(ptr + 1, curr[i]);
            }
       }
        else {
            if ((curr[i] == ' ') || (curr[i] == '\0')) {
                if ((!flag) || ((curr[i - 1] = 'e') && (curr[i - 2] != 'e'))) {
                    strncpy_s(temp, ptr, n + 1);
                    strcat_s(ans, temp);
                    ptr = strchr(ptr + 1, ' ');
                    n = 0;
                    
                }
                else {
                    ptr = strchr(ptr + 1, ' ');
                }
            }
            else {
                n++;
                flag = false;
            }
        }
        i++;
    }
    i = 0;
    flag = false;
    cout << "Исходная строка: " << curr << endl;
    cout << "Полученная строка: " << ans << endl;
    cout << "Адреса: ";
    while (curr[i] != '\0') {
        if (curr[i] != 'e') {
            flag = false;
        }
        else {
            if (curr[i] == 'e') {
                if (flag) {
                    while ((curr[i] != ' ') && (i != 0)) {
                        i--;
                    }
                    printf("%p ", &curr[i]);
                    k++;
                    i++;
                    while ((curr[i] != ' ') && (curr[i] != '\0')) {
                        i++;
                    }
                }
                else {
                    flag = true;
                }
            }
        }
        i++;
    }

    //cout << "Адрес(a): ";
    //for (i = 0; i < j; i++) {
    //    //printf_s('%c ', deleted[i]);
    //    cout << &deleted[i] << ' ';
    //}
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
