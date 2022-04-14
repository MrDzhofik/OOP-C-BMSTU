// RK2_Markovka.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

using namespace std;
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <locale.h>

struct spisok {
	char  word[8];
	spisok* next;
};

int main()
{
	spisok* first{}, * last, * p{}, * q;
	int l, f;
	char str[81];
	char wrd[8];
	char help[8];
	for (l = 0; l < 81; l++) str[l] = ' ';
	for (l = 0; l < 8; l++) wrd[l] = ' ';
	setlocale(LC_ALL, "Russian");
	cout << "Введите строку:" << endl;
	cin.getline(str, 81);
	int k = 0, nc = 0;
	for (l = 0; l < 81; l++) if (str[l] != ' ' and str[l + 1] != ' ') { wrd[k] = str[l]; k++; }
	else if (str[l] != ' ' and str[l + 1] == ' ') {
		if (nc != 0) {
			wrd[k] = str[l];
			q = new spisok;
			for (f = 0; f < 8; f++) q->word[f] = wrd[f];
			q->next = NULL;
			p->next = q;
			p = q;
			for (f = 0; f < 8; f++) wrd[f] = ' ';
			k = 0;
			nc++;
		}
		else {
			wrd[k] = str[l];
			first = new spisok;
			for (f = 0; f < 8; f++) first->word[f] = wrd[f];
			first->next = NULL;
			p = first;
			for (f = 0; f < 8; f++) wrd[f] = ' ';
			nc++;
			k = 0;
		}
	}
	printf("\n");
	cout << "Список:" << endl;
	last = p;
	for(l=0;l<8;l++) help[l] = first->word[l];
	for (l = 0;l < 8;l++) first->word[l] = last->word[l];
	for (l = 0;l < 8;l++) last->word[l] = help[l];
	q = first;
	while (q != NULL) {
		for(l=0;l<8;l++) printf("%c", q->word[l]);
		cout << " ";
		q = q->next;
	}
	printf("\n");
	p = first;
	while (p != NULL) {
		q = p->next;
		delete(p);
		p = q;
	}
	cout << "Память освобождена успешно";
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
