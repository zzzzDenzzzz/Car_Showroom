#pragma once

#include<list>
#include<fstream>
#include"Car.h"

class Menu
{
	list<Car> car_list;
	char item;
	void selectMenuItem(); // ����� ������ ����
	void writing(); // ������ � ���� db.txt
	void add(); // ���������� ������ � ������
	void print(); // ����� ������(list)!!! �� �����
public:
	void start(); // ������ ����
};