#include <iostream>
#include "conio.h"
#include "locale.h"
#include "stdio.h"
#include "time.h"
#include "string.h"
#include "stdlib.h"


using namespace std;


// 1) Функции
int get_size_2(int number){
    int size = 0;
    while (number != 0) {
        size++;
        number /= 2;
    }
    return size;
}

int get_size_10(int number){
    int size{};
    while (number != 0) {
        size++;
        number /= 10;
    }
    return size;
}

void digit(int number, int numeral[]) {
    int i = 0;
    while (number != 0) {
        numeral[i] = (number % 10);
        i++;
        number /= 10;
    }
}

int check(int *one, int size) {
    for (int i = 0; i < size / 2; i++) {
        if (one[i] != one[size - i - 1]) {
            return false;
        }
    }
    return true;
}

void reverse(int one[], int res[], int size) {
    for (int i = size; i > 0; i--) {
        res[size - i] = one[i - 1];
    }
}

void dec_to_bin(int number, int ans[]) {
    int temp{}, res[25]{}, i = 0;
    while (number != 0) {
        temp = number % 2;
        ans[i] = temp;
        i++;
        number /= 2;
    }
}

//int main()
//{
//    setlocale(0, "russian");
//    int num[25]{}, dig[10], norm_num[25];
//    int n, size_2 = 0, size_10 = 0;
//    cout << "Введите число, от которого будем искать палиндромы: ";
//    cin >> n;
//    for (int i = n; i > 0; i--) {
//        dec_to_bin(i, num);
//        digit(i, dig);
//        size_2 = get_size_2(i);
//        size_10 = get_size_10(i);
//        reverse(num, norm_num, size_2);
//        if (check(dig, size_10) && check(norm_num, size_2)) {
//            printf("%d - ", i);
//            for (int i = 0; i < size_2; i++) {
//                printf("%d", norm_num[i]);
//            }
//            printf("\n");
//        }
//    }
//}
 
/*int check(char bukva) {
    char book[53] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    char number[11] = "1234567890";
    char symbol[4] = "+-*";
    if (strchr(book, bukva) != NULL) {
        return 1;
    }
    if (strchr(number, bukva) != NULL) {
        return 2;
    }
    if (strchr(symbol, bukva) != NULL) {
        return 3;
    }
    return 0;
}

int main() {
    setlocale(0, "russian");
    char ch[2]{}, str[30]{}, ans[150]{}, vowels[7] = {'a', 'e', 'i', 'o', 'u', 'y', '\0'};
    int m = 0, group_let = 0, group_num = 0, group_spec = 0, n = 0, i = 0;
    while ((puts("Enter string or end:"), strcmp(gets_s(str, 29), "end") != 0)) {
        m = check(str[0]);
        for (int i = 1; i <= strlen(str); i++) {
            if ((check(str[i]) != m) || (str[i] == '\0')) {
                switch (m % 4) {
                case 1: group_let++; break;
                case 2: group_num++; break;
                case 3: group_spec++; break;
                }
                m = check(str[i]);
            }
        }
        m = check(str[0]);
        i = 0;
        while (i < strlen(str)) {
            if (((i == 0) || (check(str[i]) != m)) && (strchr(vowels, str[i]) != NULL)) {
                strcat_s(ans, 149, "aaaaa");
                while (check(str[i]) == 1) {
                    i++;
                }
                i--;
            }
            else {
                ch[0] = str[i];
                strcat_s(ans, 149, ch);
            }
            m = check(str[i]);
            i++;
        }
        printf_s("Исходная строка: %s\n", str);
        printf_s("Групп букв: %d\n", group_let);
        printf_s("Групп чисел: %d\n", group_num);
        printf_s("Групп знаков: %d\n", group_spec);
        printf_s("Преобразованная строка: %s\n", ans);
        group_let = 0;
        group_num = 0;
        group_spec = 0;
        ans[0] = '\0';
    }   
}*/


// 3) Files
int main() {
    FILE* f{}, * h{};
    int l = 0, n = 0;
    char ch{}, temp{};
    setlocale(0, "russian");
    printf("Введите число символов, которые запишутся в файл: ");
    const char* alphabet = "abcdaeafghajaakalamanoapqarasatuvawxyaz";
    scanf_s("%d", &n);
    srand((unsigned)time(NULL));
    fopen_s(&f, "C://Users//djafa//source//repos//DZ1-C++//first.txt", "w");
    puts("Первый файл");
    for (int i = 0; i < n; i++) {
        fputs(alphabet + (rand() % 48), f);
    }
    fclose(f);
    fopen_s(&f, "C://Users//djafa//source//repos//DZ1-C++//first.txt", "r");
    for (int i = 0; i < n; i++) {
        ch = getc(f);
        putchar(ch);
    }
    rewind(f);
    puts("\n");
    puts("Второй файл:");
    fopen_s(&h, "C://Users//djafa//source//repos//DZ1-C++//last.txt", "w");
    for (int i = 0; i < n - 1; i++) {
        ch = getc(f);
        temp = getc(f);
        if (ch == 'a') {
            fputs(&temp, h);
            l++;
            printf("%c", temp);
        }
        fseek(f, -1, 1);
    }
    fclose(h);
    printf("\nСимволов перед a: %d", l);
}