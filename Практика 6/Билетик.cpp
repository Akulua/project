#include <iostream>

int main() {
	setlocale(LC_ALL, "ru_RU.UTF-8");
	/*const int digitsCount=6;
	
	int ticketNumber;
	int digits[digitsCount];
	std::cout << "Введите номер билета (" << digitsCount << " цифр): ";
	std::cin >> ticketNumber;
	
	for (int i = 0; i < digitsCount; i++) {
		digits[i] = ticketNumber % 10;
		ticketNumber /= 10;
	}

	int sumFirstHalf = 0, sumSecondHalf = 0;
	for (int i = 0; i < digitsCount; i++) {
		if (i >= digitsCount / 2) sumFirstHalf += digits[i];
		else sumSecondHalf += digits[i];
	}*/

	const int digitsCount = 4;
	const int halfDigitsCount = digitsCount / 2;

	int ticketNumber;
	int sumFirstHalf=0;
	int sumSecondHalf=0;
	int count = 0;

	std::cout << "Введите номер билета (" << digitsCount << " цифр): ";
	std::cin >> ticketNumber;

	while (count < halfDigitsCount) {
		sumFirstHalf += ticketNumber % 10;
		ticketNumber /= 10;
		count++;
	}
	count = 0;
	while (count < halfDigitsCount) {
		sumSecondHalf += ticketNumber % 10;
		ticketNumber /= 10;
		count++;
	}

	sumFirstHalf == sumSecondHalf ? std::cout << "Поздравляем! Ваш билет счастливый!" : std::cout << "К сожалению, ваш билет не счастливый.";
}