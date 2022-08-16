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
	void selectMenuItem(); // выбор пункта меню
	void writing(Car &car); // запись в файл
	void add(); // добавление данных
public:
	void start(); // запуск меню
};