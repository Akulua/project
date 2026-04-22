#include <iostream>
#include <chrono>

int main() {
    using namespace std;
    using namespace std::chrono;
    setlocale(LC_ALL, "ru_RU.UTF-8");

    //задана переменная "сегодня"
    auto today_sys = floor<days>(system_clock::now());
    year_month_day today = year_month_day{ today_sys };

    //Ввод даты пользователем 
    int userDay, userMonth, userYear;
    std::cout << "_______ Калькулятор совершеннолетия _______\n";
    std::cout << "Напиши день своего рождения (1-31):";
    std::cin >> userDay;
    std::cout << "Напиши месяц своего рождения (1-12):";
    std::cin >> userMonth;
    std::cout << "Напиши год своего рождения (Например: 2004):";
    std::cin >> userYear;
    std::cout << "_______ Считаю возраст _______\n";

    //Объединение даты
    auto birthDay = year(static_cast<int>(userYear)) / month( static_cast<int>(userMonth)) / day( static_cast<int>(userDay));
    
  
    //Проверка на ошибки
    if (!birthDay.ok()) {
        std::cout << "ОШИБКА:Неверно ведена дата!";
        return 1;
    }

    //По итогу у меня теперь есть birthDay и today
    // Определние возраста
    int age;
    {
        int y1 = int(today.year());
        int y2 = int(birthDay.year());
        age = y1 - y2;
        age--;
    }
 
    //Блок подсчёта возраста
    if (today.month() > birthDay.month()) age++;
    else if ((today.month() == birthDay.month()) && (today.day() >= birthDay.day())) age++;

    // Вывод результатов
    if (age >= 18 && today.day() != birthDay.day()) {
        std::cout << "Возраст подходящий!";
    }
    else {
        std::cout << "Возраст НЕ подходит!Клиент не достиг 18 лет, либо его день рождения сегодня!\n";
    }
   
    return 0;
}