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
			cout << "Ошибка ввода\n>>> ";
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
	cout << "Добавте данные\n";
	cout << "Название автомобиля: ";
	string car_name;
	cin >> car_name;
	car.setCarName(car_name);
	cout << "Год выпуска: ";
	string year;
	cin >> year;
	car.setYearIssue(year);
	cout << "Объем двигателя: ";
	string engine_v;
	cin >> engine_v;
	car.setEngineVolume(engine_v);
	cout << "Цена: ";
	string price;
	cin >> price;
	car.setPrice(price);

	car_list.push_back(car);
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
	selectMenuItem();
}
