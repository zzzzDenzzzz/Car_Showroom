#pragma once

#include<string>

using namespace std;

class Car
{
	string car_name; // ��������
	string year_issue; // ��� �������
	string engine_volume; // ����� ���������
	string price; // ����
public:
	Car();
	Car(string car_name, string year_issue, string engine_volume, string price);
	void setCarName(string car_name);
	string getCarName();
	void setYearIssue(string year_issue);
	string getYearIssue();
	void setEngineVolume(string engine_volume);
	string getEngineVolume();
	void setPrice(string price);
	string getPrice();
};