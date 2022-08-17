#pragma once

#include<list>
#include"Car.h"

class Menu
{
	list<Car> car_list;
	list<Car>::iterator it;
	char item;
	bool selectMenuItem(); // выбор пункта меню
	void writing(); // запись в файл db.txt
	void reading(); // чтение из файла db.txt
	void add(); // добавление данных в список
	void print(); // вывод списка(list)!!! на экран
public:
	void start(); // запуск меню
};