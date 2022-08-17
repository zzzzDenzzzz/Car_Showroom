#include "Menu.h"

bool Menu::selectMenuItem()
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
			return false;
			break;
		default:
			cout << "������ �����\n>>> ";
			input_error = true;
			break;
		}
	} while (input_error);
	return true;
}

void Menu::writing()
{
	fstream file;
	file.open("db_car.txt", ios::out);
	if (file.is_open())
	{
		for (it = car_list.begin(); it != car_list.end(); it++)
		{
			file << (*it) << endl;
		}
	}
	file.close();
}

void Menu::reading()
{
	fstream file;
	Car car;
	file.open("db_car.txt");
	if (file.is_open())
	{
		while (file >> car)
		{
			car_list.push_back(car);
		}
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
	for (it = car_list.begin(); it != car_list.end(); it++)
	{
		cout << (*it) << endl;
	}
}

void Menu::start()
{
	reading();

	cout << "�������� ����� ���� ��� ������ � �������:\n";
	cout << "1. ��������\n";
	cout << "2. �������\n";
	cout << "3. ����������\n";
	cout << "4. �����������\n";
	cout << "5. �����\n";
	cout << "6. �����\n\n";
	cout << ">>> ";

	while (selectMenuItem());
}
