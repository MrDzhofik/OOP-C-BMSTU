#pragma once
#ifndef CLASSES_H

class Tower {
private:
	char name[10];
	int height;
	bool driveway;
public:
	Tower();
	Tower(const char* n, int h, bool flag);
	void Print();
	void Print_name();
	int Print_height();
	int Print_driveway();
};

class Castle {
private:
	char name[15];
	int num_of_towers;
	Tower Towers[10];
public:
	Castle(const char* n, int size, Tower tow[4]);
	void Print();
	int driveway_tow();
	void high();
};
#endif