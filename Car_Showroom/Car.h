#pragma once

#include<string>
#include<iostream>
#include<fstream>

using namespace std;

class Car
{
	string number_car; // номер
	string car_name; // название
	string year_issue; // год выпуска
	string engine_volume; // объем двигателя
	string price; // цена
public:
	Car();
	Car(string number_car, string car_name, string year_issue, string engine_volume, string price);
	void setNumberCar(string number_car);
	string getNumberCar();
	void setCarName(string car_name);
	string getCarName();
	void setYearIssue(string year_issue);
	string getYearIssue();
	void setEngineVolume(string engine_volume);
	string getEngineVolume();
	void setPrice(string price);
	string getPrice();
	friend ostream &operator<<(ostream &os, Car &car);
	friend fstream &operator<<(fstream &file, Car &car);
	friend fstream &operator>>(fstream &file, Car &car);
};