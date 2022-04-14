#include <iostream>
#include "conio.h"
#include "locale.h"

using namespace std;


// 1) Функции
//
//int get_size_2(int number){
//    int size = 0;
//    while (number != 0) {
//        size++;
//        number /= 2;
//    }
//    return size;
//}
//
//int get_size_10(int number){
//    int size{};
//    while (number != 0) {
//        size++;
//        number /= 10;
//    }
//    return size;
//}
//
//void digit(int number, int numeral[]) {
//    int i = 0;
//    while (number != 0) {
//        numeral[i] = (number % 10);
//        i++;
//        number /= 10;
//    }
//}
//
//int check(int *one, int size) {
//    for (int i = 0; i < size / 2; i++) {
//        if (one[i] != one[size - i - 1]) {
//            return false;
//        }
//    }
//    return true;
//}
//
//void reverse(int one[], int res[], int size) {
//    for (int i = size; i > 0; i--) {
//        res[size - i] = one[i - 1];
//    }
//}
//
//void dec_to_bin(int number, int ans[]) {
//    int temp{}, res[25]{}, i = 0;
//    while (number != 0) {
//        temp = number % 2;
//        ans[i] = temp;
//        i++;
//        number /= 2;
//    }
//}
//
//int main()
//{
//    setlocale(0, "russian");
//    int num[25]{}, dig[10], norm_num[25];
//    int n, size_2 = 0, size_10 = 0;
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

// 3) Файлы