#include "Car.h"

Car::Car()
{
	number_car = "ca000r";
	car_name = "no_name";
	year_issue = "0000";
	engine_volume = "0.0";
	price = "0";
}

Car::Car(string number_car, string car_name, string year_issue, string engine_volume, string price)
{
	this->number_car = number_car;
	this->car_name = car_name;
	this->year_issue = year_issue;
	this->engine_volume = engine_volume;
	this->price = price;
}

void Car::setNumberCar(string number_car)
{
	this->number_car = number_car;
}

string Car::getNumberCar()
{
	return number_car;
}

void Car::setCarName(string car_name)
{
	this->car_name = car_name;
}

string Car::getCarName()
{
	return car_name;
}

void Car::setYearIssue(string year_issue)
{
	this->year_issue = year_issue;
}

string Car::getYearIssue()
{
	return year_issue;
}

void Car::setEngineVolume(string engine_volume)
{
	this->engine_volume = engine_volume;
}

string Car::getEngineVolume()
{
	return engine_volume;
}

void Car::setPrice(string price)
{
	this->price = price;
}

string Car::getPrice()
{
	return price;
}

ostream &operator<<(ostream &os, Car &car)
{
	cout << "<" << car.number_car << ">\n" << 
		"Название автомобиля: " << car.car_name << "\n" <<
		"Год выпуска: " << car.year_issue << "\n" <<
		"Объем двигателя: " << car.engine_volume << "\n" <<
		"Цена: " << car.price << "\n";
	return os;
}

fstream &operator<<(fstream &file, Car &car)
{
	file << car.number_car << "\n" << car.car_name<< "\n" << car.year_issue << "\n" <<
		car.engine_volume << "\n" << car.price << "\n[...]\n";
	return file;
}

fstream &operator>>(fstream &file, Car &car)
{
	string line;
	file >> car.number_car >> car.car_name >> car.year_issue >> car.engine_volume >> car.price >> line;
	return file;
}
