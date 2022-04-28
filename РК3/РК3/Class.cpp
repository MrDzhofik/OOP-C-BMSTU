#include "Classes.h"
#include "stdio.h"
#include "string.h"
#include <iostream>
using namespace std;

A::A(int a[10]) {
	for (int i = 0; i < 10; i++) {
		d[i] = a[i];
	}
}

void A::Print(const char* sep) {
	char num[7]{};
	for (int i = 0; i < 10; i++) {
		strcpy_s(num, 7, Out(i));
		cout << num;
	}
	printf("\n");
}

char* B::Out(int index) {
	char str[7]{};
	sprintf_s(str, 5, "%d ", d[index]);
	strcat_s(str, 7, " ");
	return str;
}

char* C::Out(int index) {
	char str[7]{};
	sprintf_s(str, 5, "%d ", d[index]);
	strcat_s(str, 7, "\n");
	return str;
}