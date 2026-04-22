#include <iostream>int
main() {
using namespace std;
int numberOne;
int numberTwo;
cout << "Write one number: ";
cin >> numberOne;
cout << "Write second number: ";
cin >> numberTwo;
cout << "_______Cheking..._______ \n";
if (numberOne == numberTwo) {
	cout << "The numbers are equal";
}
else if (numberOne > numberTwo) {
	cout << "The smallest number: " << numberTwo << "\n";
}
else cout << "The smallest number: " << numberOne << "\n";
return 0;
}