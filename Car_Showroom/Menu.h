#pragma once

#include<list>
#include<fstream>
#include"Car.h"

class Menu
{
	list<Car> car_list;
	char item;
	void selectMenuItem(); // выбор пункта меню
	void writing(); // запись в файл db.txt
	void add(); // добавление данных в список
	void print(); // вывод списка(list)!!! на экран
public:
	void start(); // запуск меню
};