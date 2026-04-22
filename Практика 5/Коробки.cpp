#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int a[3], b[3];
    cout << "__________ Влезет ли первая во вторую коробку __________\n";
    cout << "Введи длину/ширину/высоту первой коробки: ";
    //Заполнение массивов
    for (int i = 0;i < 3; i++) cin >> a[i];
    cout << "Отлично! Теперь второй: ";
    for (int p = 0;p < 3; p++) cin >> b[p];

    //Под единый формат сторон относительно размера
    for (int i = 0;i < 3;i++) {
        for (int p = 0;p < 2;p++) {
            if ((a[p] > a[p + 1]))swap(a[p], a[p + 1]);
            if ((b[p] > b[p + 1]))swap(b[p], b[p + 1]);
        }
    }
    //логический чтобы не нагромождать if
    bool check=(a[0] < b[0] && a[1] < b[1] && a[2] < b[2]);
    //сокращенная форма if для вывода результата
    check ? cout << "Влезет!" : cout << "Увы, нет(";
    
    return 0;
}

