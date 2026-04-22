#include <iostream>

int main() {
    using namespace std;
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int heightFly;
    int speedFly;

    cout << "_____Программа для определения верного эшелона. _____ \n";
    cout << "Введете скорость самолета:";
    cin >> speedFly;
    cout << "Введете высоту самолета:";
    cin >> heightFly;

    if ((speedFly >= 750 && speedFly <= 850) && (heightFly >= 9000 && heightFly <= 9500)) 
    {
        cout << "Полет нормальный!";
    }
    else {
        cout << "Эшелон неверный!"<< endl;
        if (speedFly <= 750 || speedFly >= 850) 
            cout << "Неподходящая скорость, ваша "<< speedFly<< " необходима: 750-850 км/ч!\n";
        if (heightFly <= 9000 || heightFly >= 9500)
            cout << "Неподходящая высота, ваша " << heightFly << " необходима: 9 000-9 500 м!\n";
         }

    return 0;
}