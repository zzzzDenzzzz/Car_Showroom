#include "Car.h"

Car::Car()
{
	car_name = "no_name";
	year_issue = "0000";
	engine_volume = "0.0";
	price = "0";
}

Car::Car(string car_name, string year_issue, string engine_volume, string price)
{
	this->car_name = car_name;
	this->year_issue = year_issue;
	this->engine_volume = engine_volume;
	this->price = price;
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
