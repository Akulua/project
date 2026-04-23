#include <iostream>

int main() {
	setlocale(LC_ALL, "ru_RU.UTF-8");

	long long number;
	std::cout << " Введите ваше число: ";
	std::cin >> number;
	int count = 0;

	if (number == 0) {
		count = 1;
	}
	else {
		if (number < 0) number = -number;
		while (number > 0) {
			number = number / 10;
			count++;
		}
	}
	std::cout << "Количество цифр в вашем числе: " << count << std::endl;

}
