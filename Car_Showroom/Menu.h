#pragma once

#include<list>
#include"Car.h"

class Menu
{
	struct SortPrice
	{
		bool operator()(Car &car1, Car &car2);
	};
	struct SortYearIssue
	{
		bool operator()(Car &car1, Car &car2);
	};
	list<Car> car_list;
	list<Car>::iterator it;
	char item;
	bool selectMenuItem(); // ����� ������ ����
	void writing(); // ������ � ���� db.txt
	void reading(); // ������ �� ����� db.txt
	void add(); // ���������� ������ � ������
	void del(); // �������� ������ �� list
	void print(); // ����� ������(list)!!! �� �����
	void sortMenu(); // ���� ����������
	void selectSortMenuItem(); // ����� ������ ���� ����������
	void sortCarPrice();
	void sortYearIssue();
public:
	void start(); // ������ ����
	
};