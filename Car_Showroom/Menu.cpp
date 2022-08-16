#include "Menu.h"

void Menu::selectMenuItem()
{
	bool input_error;

	do
	{
		input_error = false;
		cin >> item;
		switch (item)
		{
		case '1':
			add();
			break;
		case '2':
			break;
		case '3':
			break;
		case '4':
			break;
		case '5':
			break;
		case '6':
			input_error = false;
			break;
		default:
			cout << "������ �����\n>>> ";
			input_error = true;
			break;
		}
	} while (input_error);
}

void Menu::writing(Car &car)
{
	file.open(db_car, ios::app);
	if (file.is_open())
	{
		file << car.getCarName() << " " << car.getYearIssue() << " " <<
			car.getEngineVolume() << " " << car.getPrice() << "\n";
	}
	file.close();
}

void Menu::add()
{
	Car car;
	cout << "������� ������\n";
	cout << "�������� ����������: ";
	string car_name;
	cin >> car_name;
	car.setCarName(car_name);
	cout << "��� �������: ";
	string year;
	cin >> year;
	car.setYearIssue(year);
	cout << "����� ���������: ";
	string engine_v;
	cin >> engine_v;
	car.setEngineVolume(engine_v);
	cout << "����: ";
	string price;
	cin >> price;
	car.setPrice(price);

	car_list.push_back(car);
}

void Menu::start()
{
	cout << "�������� ����� ���� ��� ������ � �������:\n";
	cout << "1. ��������\n";
	cout << "2. �������\n";
	cout << "3. ����������\n";
	cout << "4. �����������\n";
	cout << "5. �����\n";
	cout << "6. �����\n\n";
	cout << ">>> ";
	selectMenuItem();
}
