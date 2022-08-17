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
			print();
			break;
		case '4':
			break;
		case '5':
			break;
		case '6':
			writing();
			input_error = false;
			break;
		default:
			cout << "������ �����\n>>> ";
			input_error = true;
			break;
		}
	} while (input_error);
}

void Menu::writing()
{
	list<Car>::iterator it;
	fstream file;
	for (it = car_list.begin(); it != car_list.end(); it++)
	{
		file << (*it) << endl;
	}
	file.close();
}

void Menu::add()
{
	Car car;

	cout << "������� ������\n";

	cout << "�������� ����������: ";
	string line;
	cin.ignore();
	getline(cin, line);
	car.setCarName(line);

	cout << "��� �������: ";
	getline(cin, line);
	car.setYearIssue(line);

	cout << "����� ���������: ";
	getline(cin, line);
	car.setEngineVolume(line);

	cout << "����: ";
	getline(cin, line);
	car.setPrice(line);

	//writing(car); ��� �������
	car_list.push_back(car);
}

void Menu::print()
{
	list<Car>::iterator it;
	for (it = car_list.begin(); it != car_list.end(); it++)
	{
		cout << (*it) << endl;
	}
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

	while (true)
	{
		selectMenuItem();
	}
}
