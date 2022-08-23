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
			del();
			break;
		case '3':
			print();
			break;
		case '4':
			sortMenu();
			break;
		case '5':
			searchMenu();
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

	cout << "����� ����������: ";
	string line;
	cin.ignore();
	getline(cin, line);
	car.setNumberCar(line);

	cout << "�������� ����������: ";
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

	car_list.push_back(car);
}

void Menu::del()
{
	cout << "�������� ������ ��� ��������(�� ������ ����������)\n>>> ";
	string number_car;
	cin.ignore();
	getline(cin, number_car);
	for (it = car_list.begin(); it != car_list.end(); it++)
	{
		if ((*it).getNumberCar() == number_car)
		{
			car_list.erase(it);
			cout << "������ �������\n";
			return;
		}
	}
	cout << "������ �� �������\n";
}

void Menu::print()
{
	for (it = car_list.begin(); it != car_list.end(); it++)
	{
		cout << (*it) << endl;
	}
}

void Menu::sortMenu()
{
	cout << "�����������:\n";
	cout << "1. �� ����\n";
	cout << "2. �� ���� �������\n";
	cout << "3. �����\n\n";
	cout << ">>> ";

	selectSortMenuItem();
}

void Menu::selectSortMenuItem()
{
	bool input_error = false;
	do
	{
		cin >> item;
		switch (item)
		{
		case '1':
			sortCarPrice();
			print();
			break;
		case '2':
			sortYearIssue();
			print();
			break;
		case '3':
			input_error = false;
			break;
		default:
			cout << "������ �����\n>>> ";
			input_error = true;
			break;
		}
	} while (input_error);
}

void Menu::sortCarPrice()
{
	car_list.sort(SortPrice());
}

void Menu::sortYearIssue()
{
	car_list.sort(SortYearIssue());
}

void Menu::searchMenu()
{
	cout << "�����:\n";
	cout << "1. �� ��������\n";
	cout << "2. �� ������ ���������\n";
	cout << "3. �����\n\n";
	cout << ">>> ";

	selectSearchMenuItem();
}

void Menu::selectSearchMenuItem()
{
	bool input_error = false;
	do
	{
		cin >> item;
		switch (item)
		{
		case '1':
			searchCarName();
			break;
		case '2':
			searchEngineVolume();
			break;
		case '3':
			input_error = false;
			break;
		default:
			cout << "������ �����\n>>> ";
			input_error = true;
			break;
		}
	} while (input_error);
}

void Menu::searchCarName()
{
	string car_name_tmp;
	bool print_message = false;
	cout << "������� �������� ����������:\n";
	cin.ignore();
	getline(cin, car_name_tmp);
	for (it = car_list.begin();  it != car_list.end(); it++)
	{
		if ((*it).getCarName() == car_name_tmp)
		{
			cout << (*it) << endl;
			print_message = true;
		}
	}
	if (!print_message)
	{
		cout << "������ �� �������\n";
	}
}

void Menu::searchEngineVolume()
{
	string engine_volume_tmp;
	bool print_message = false;
	cout << "������� ����� ���������:\n";
	cin.ignore();
	getline(cin, engine_volume_tmp);
	for (it = car_list.begin(); it != car_list.end(); it++)
	{
		if ((*it).getEngineVolume() == engine_volume_tmp)
		{
			cout << (*it) << endl;
			print_message = true;
		}
	}
	if (!print_message)
	{
		cout << "������ �� �������\n";
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

bool Menu::SortPrice::operator()(Car &car1, Car &car2)
{
	return car1.getPrice() < car2.getPrice();
}

bool Menu::SortYearIssue::operator()(Car &car1, Car &car2)
{
	return car1.getYearIssue() < car2.getYearIssue();
}
