#pragma once
#include "stdio.h"
#include "string.h"

class Circle{
protected:
	double diam = 0;
public:
	Circle() {
		diam = 0;
	}
	Circle(float d) {
		diam = d;
	}
	void Print() {
		printf("Diametr: %2.2f", diam);
	}
	float Square() {
		float sq;
		sq = 3.14 * ((diam / 2.0) * (diam / 2.0));
		return sq;
	}
};

class Pan : public Circle {
private:
	char material[10];
public:
	Pan() {
		diam = 0;
		material[0] = '\0';
	}
	Pan(float d, const char* mat): Circle(d) {
		strcpy_s(material, 9, mat);
	}
	void Print() {
		printf("Diametr: %2.2f\n", diam);
		printf("Material: %s", material);
	}
	int Cutlets(int sq) {
		int res;
		res = Square() / sq;
		return res;
	}
};