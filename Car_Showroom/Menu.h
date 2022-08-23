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
	bool selectMenuItem(); // выбор пункта меню
	void writing(); // запись в файл db.txt
	void reading(); // чтение из файла db.txt
	void add(); // добавление данных в список
	void del(); // удаление записи из list
	void print(); // вывод списка(list)!!! на экран
	void sortMenu(); // меню сортировки
	void selectSortMenuItem(); // выбор пункта меню сортировки
	void sortCarPrice(); // сортировка по цене
	void sortYearIssue(); // сортировка по году выпуска
	void searchMenu(); // меню поиска
	void selectSearchMenuItem(); // выбор пункта меню поиска
	void searchCarName(); // поиск по названию и вывод в консоль
	void searchEngineVolume(); // поиск по объему двигателя и вывод в консоль
public:
	void start(); // запуск меню
	
};