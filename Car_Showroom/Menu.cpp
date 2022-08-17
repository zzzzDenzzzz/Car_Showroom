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
			cout << "Ошибка ввода\n>>> ";
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

	cout << "Добавте данные\n";

	cout << "Название автомобиля: ";
	string line;
	cin.ignore();
	getline(cin, line);
	car.setCarName(line);

	cout << "Год выпуска: ";
	getline(cin, line);
	car.setYearIssue(line);

	cout << "Объем двигателя: ";
	getline(cin, line);
	car.setEngineVolume(line);

	cout << "Цена: ";
	getline(cin, line);
	car.setPrice(line);

	//writing(car); для отладки
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
	cout << "Выбирите пункт меню для работы с данными:\n";
	cout << "1. Добавить\n";
	cout << "2. Удалить\n";
	cout << "3. Отобразить\n";
	cout << "4. Сортировать\n";
	cout << "5. Поиск\n";
	cout << "6. Выход\n\n";
	cout << ">>> ";

	while (true)
	{
		selectMenuItem();
	}
}
