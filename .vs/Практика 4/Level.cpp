#include <iostream>
int main() {
	using namespace std;
	int numberUser;
	cout << "Давай проверим крастность числа! \n";
	cout << "Напиши свое число ";
	cin >> numberUser;
	int remainder = numberUser % 5;
	cout << "_______ Проверяем... _______ \n";
	if (remainder == 0) {
		cout << "Число: " << numberUser "кратное.";
	}
	else {
		cout << "Число не подходит, при делении будет остаток";
	}
	return 0;
}


		


		
		
		
