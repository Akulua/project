#include <iostream>
#include <string>

int main() {
	setlocale(LC_ALL, "ru_RU.UTF-8");
	
	int debt;
	std::string name, surname, patronymic;
	std::cout << " Введите ФИО: ";
	std::cin >> surname >> name >> patronymic;
	std::cout << " Введите задолженность: ";
	std::cin >> debt;
	int bankAccount;

	if (debt <= -1) {
		debt = -debt;
		std::cout << "Сумма изменена на положительную (долг не может быть отрицательным): " << debt << std::endl;
	}

	std::cout << "Имя: " << surname << " " << name << " " << patronymic << ", Задолженность: " << debt << std::endl;
	while (debt >= 0) {
		int payment;
		std::cout << "Введите сумму для погашения задолженности: ";
		std::cin >> payment;
		debt -= payment;

		if (debt >= 0) {
			std::cout << "Вы все ещё должны!" << std::endl;
			std::cout << "Остаток задолженности: " << debt << std::endl;
		}
		else {
			std::cout << "Поздравляем! Вы полностью погасили задолженность!" << std::endl;
			bankAccount = -debt;
			std::cout << "Остаток на счете: " << bankAccount << std::endl;
		}
	}
	
}