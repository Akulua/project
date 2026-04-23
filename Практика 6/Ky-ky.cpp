#include <iostream>

int main() {
	setlocale(LC_ALL, "ru_RU.UTF-8");
	int times;
	int count = 1;
	std::cout << " Введите, который час (1-12): ";
	std::cin >> times;

	if (times <= 0) {
		std::cout << "ОШИБКА: Необходимо положительное число!" << std::endl;
		return 1;
	}	
	while (count <= times) {
		std::cout << "Ky-ky!" << std::endl;
		count++;
	}
}