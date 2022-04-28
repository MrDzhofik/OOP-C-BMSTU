#pragma once
#include "stdio.h"

class A{
protected:
	int d[10];
	A() {
		d[0] = 0;
	}
	A(int a[10]);
	virtual char* Out(int i) = 0;
public:
	void Print(const char* sep);
};
class B: public A{
public:
	B(int a[10]): A(a) {}
	char* Out(int i) override;
};
class C: public A{
public:
	C(int a[10]) : A(a) {}
	char* Out(int i) override;
};