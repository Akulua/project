#include <iostream>
#include <chrono>
#include <cstdlib>

using namespace std;
using namespace std::chrono;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    // Инициализация 
    auto now = system_clock::now();
    auto today_sys = floor<days>(now);
    year_month_day today{ today_sys };
    auto currentYear = today.year(); // Сохраняем только год

    unsigned int dayInput;

    while (true) {
        cout << "\nВведите число мая (1-31): ";
        cin >> dayInput;

        // Формируем дату, используя уже известный год
        auto date = currentYear / month{ 5 } / day{ dayInput };

        if (!date.ok()) {
            cout << "Ошибка: в мае нет такого числа." << endl;
            system("pause");
            continue;
        }

        weekday wd{ date };
        bool isHoliday = (dayInput >= 1 && dayInput <= 5) || (dayInput >= 8 && dayInput <= 10);
        bool isWeekend = (wd == Saturday || wd == Sunday);

        cout << "Дата: " << (unsigned)date.day() << " мая, " << wd << endl;
        cout << "Результат: " << (isHoliday || isWeekend ? "Нерабочий день" : "Рабочий день") << endl;

        system("pause");
    }

    return 0;
}