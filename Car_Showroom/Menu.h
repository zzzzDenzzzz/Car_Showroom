#pragma once

#include<list>
#include<fstream>
#include<iostream>
#include"Car.h"

class Menu
{
	const string db_car = "db_car.txt";
	fstream file;
	list<Car> car_list;
	char item;
	void selectMenuItem(); // ����� ������ ����
	void writing(Car &car); // ������ � ����
	void add(); // ���������� ������
public:
	void start(); // ������ ����
};