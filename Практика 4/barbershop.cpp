#include <iostream>

int main() {
    using namespace std;

    int mansCount;
    int barbersCount;

    cout << "________________ Barbershop-calculator ________________\n";
    cout << "Enter the number of men on the town \n";
    cin >> mansCount;
    cout << "How many barbers have been hired so far? \n";
    cin >> barbersCount;
    int mansPerBarber = 8;
    int barberPowerMouth = mansPerBarber * 30;
    cout << "________________ Let`s count... ________________\n";
    int requiredBarbersCount=mansCount/barberPowerMouth;
    if(int remainder= mansCount % barberPowerMouth;remainder !=0) requiredBarbersCount++;
    if (requiredBarbersCount == barbersCount)
    {
        cout <<barbersCount<<" barbers is enough!\n";
    } 
    else if (requiredBarbersCount < barbersCount) {
        cout << barbersCount << " barbers is are many, need "<<requiredBarbersCount<<"!\n";
    }
    else  cout << barbersCount << " barbers is not enough, need " << requiredBarbersCount << "!\n";
}
        