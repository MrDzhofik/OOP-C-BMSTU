// RK1_2022.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include "stdio.h"
#include "time.h"
#include "conio.h"
#include "locale.h"

using namespace std;

int main()
{
	int curr_mult, max_mult, max_i, max_j, *ptrmax;
	setlocale(0, "russian");
	srand((unsigned)time(NULL));
	int matr[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			matr[i][j] = rand() % 100;
		}
	}
	puts("Исходная матрица:");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << setw(3) << matr[i][j] << ' ';
 		}
		cout << endl;
	}
	max_mult = 1;
	ptrmax = &matr[0][0];
	for (int i = 1; i < 4; i++) {
		curr_mult = matr[i][i] * matr[i - 1][i - 1];
		if (curr_mult >= max_mult) {
			max_mult = curr_mult;
			max_i = i;
			max_j = i;
			ptrmax = &matr[i][i];
		}
	}
	printf("Максимальный элемент: %-5d \n", matr[max_i][max_j]);
	printf("Столбец и строка: %d %d \n", max_i, max_j);
	printf("Адрес элемента: %p \n", ptrmax);

	cout << "Адреса " << max_i << " строки: ";
	for (int i = 0, *ptri; i < 4; i++) {
		ptri = &(matr[max_i][i]);
		printf("%p ", ptri);
	}

	cout << "\nАдреса " << max_i << " столбца: ";
	for (int i = 0, *ptri; i < 4; i++) {
		ptri = &(matr[i][max_j]);
		printf("%p ", ptri);
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
