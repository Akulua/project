#include <iostream>

int main() {
    using namespace std;

    int mansCount;
    int barbersCount;

    cout << "________________ Barbershop-calculator ________________\n";
    cout << "Enter the number of men on the town";
    cin >> mansCount;
    cout << "How many barbers have been hired so far?";
    cin >> barbersCount;
        int mansPerDay = mansCount / 30;
        int mansPerBarber = 8; 
        int requiredBarbersCount = mansPerDay / mansPerBarber;
    cout << "The required number of barbers: " << requiredBarbersCount << "\n";
        if (requiredBarbersCount > barbersCount){
           cout << "Нужно больше барберов!!!\n";
        }
        if (requiredBarbersCount <= barbersCount){
            cout << "Барберов хватает!!!\n";
        }
    int mansPerBarber = 8; // один человек в час, смена 8 часов
    itn mansPerBarberPerMonth = mansPerBarber * 30;
    std::cout << "Один барбер стрижет столько клиентов в месяц " << mansPerBarberPerMonth << "\n";

    int requiredBarbersCount = mansCount / mansPerBarberPerMonth;
    if (requiredBarbersCount * mansPerBarberPerMonth < mansCount) {
        requiredBarbersCount += 1;
    }

    std::cout << "Необходимое число барберов: " << requiredBarbersCount << "\n";

    std::cout << requiredBarbersCount << " барбера могут постричь "
        << requiredBarbersCount * mansPerBarberPerMonth << " мужчин за месяц.\n"

        if (requiredBarbersCount > barbersCount) {
            std::cout << "Нужно больше барберов!!!\n";
        }
        else if (requiredBarbersCount == barbersCount) {
            std::cout << "Барберов ровно столько, сколько нужно!!!\n";
            std::cout << "Барберов хватает!!!\n";
        }*/

    if (barbersCount > requiredBarbersCount * 2) {
        std::cout << "У вас работает в два раза больше барберов, чем это нужно!!!\n";
    }

    }
}