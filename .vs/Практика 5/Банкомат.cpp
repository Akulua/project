#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int amountMoney;
    cout << "Введите вашу сумму: ";
    cin >> amountMoney;
    cout << "________ Считаем... _________ ";


    //Проверка суммы 
    if ((amountMoney % 100) != 0 && amountMoney > 150000)
    {
        cout << "ОШИБКА:Сумма должна быть кратная 100 р, и быть не больше 150 000 р!" << endl;
        return 1;
    }

    //Расчет кол-ва купюр
    int bankNumb5th, bankNumb2th, bankNumb1th, bankNumb5h, bankNumb2h, bankNumb1h;

    bankNumb5th=amountMoney / 5000;
    amountMoney %= 5000;
    bankNumb2th = amountMoney / 2000;
    amountMoney %= 2000;
    bankNumb1th = amountMoney / 1000;
    amountMoney %= 1000;
    bankNumb5h = amountMoney / 500;
    amountMoney %= 500;
    bankNumb2h = amountMoney / 200;
    amountMoney %= 200;
    bankNumb1h = amountMoney / 100;
    
    //Вывод
    cout << "Нужно: " << bankNumb5th << " по 5000 р\n";
    cout << "Нужно: " << bankNumb2th << " по 2000 р\n";
    cout << "Нужно: " << bankNumb1th << " по 1000 р\n";
    cout << "Нужно: " << bankNumb5h << " по 500 р\n";
    cout << "Нужно: " << bankNumb2h << " по 200 р\n";
    cout << "Нужно: " << bankNumb1h << " по 100 р\n";
}
