#pragma once

#include<list>
#include"Car.h"

class Menu
{
	list<Car> car_list;
	list<Car>::iterator it;
	char item;
	bool selectMenuItem(); // ����� ������ ����
	void writing(); // ������ � ���� db.txt
	void reading(); // ������ �� ����� db.txt
	void add(); // ���������� ������ � ������
	void print(); // ����� ������(list)!!! �� �����
public:
	void start(); // ������ ����
};