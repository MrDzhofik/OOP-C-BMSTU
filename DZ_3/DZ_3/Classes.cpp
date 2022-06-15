#include "Classes.h"
#include "string.h"
#include "stdlib.h"
#include "stdio.h"



Tower::Tower() {
	name[0] = '\0';
	height = 0;
	driveway = false;
}

Tower::Tower(const char* n, int h, bool flag) {
	strcpy_s(name, 10, n);
	height = h;
	driveway = flag;
}

void Tower::Print_name(){
	printf("��������: %s\n", name);
}

int Tower::Print_height() {
	return height;
}


int Tower::Print_driveway() {
	return driveway;
}

void Tower::Print() {
	Print_name();
	printf("������: %u\n", Print_height());
	printf("���������: %u\n", Print_driveway());
}


Castle::Castle(const char* n, int size, Tower tow[4]) {
	strcpy_s(name, 15, n);
	num_of_towers = size;
	for (int i = 0; i < num_of_towers; i++) {
		Towers[i] = tow[i];
	}
}

void Castle::Print() {
	printf("�������� ��������: %s\n", name);
	printf("���������� �����: %d\n", num_of_towers);
}

int Castle::driveway_tow() {
	int num_of_dr = 0;
	for (int i = 0; i < num_of_towers; i++) {
		if (Towers[i].Print_driveway() > 0) {
			num_of_dr++;
		}
	}
	return num_of_dr;
}

void Castle::high(){
	int max = 0;
	puts("����� ������� �����:");
	for (int i = 0; i < num_of_towers; i++) {
		if (Towers[i].Print_height() > max) {
			max = Towers[i].Print_height();
		}
	}
	for (int i = 0; i < num_of_towers; i++) {
		if (Towers[i].Print_height() == max) {
			Towers[i].Print_name();
			printf("������: %u", Towers[i].Print_height());
		}
	}
}