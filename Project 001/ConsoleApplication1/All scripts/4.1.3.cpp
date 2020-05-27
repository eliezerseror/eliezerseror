#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main()
{
	int num1, num2, 
		variable1, variable2;

	variable1 = 0;

	cout << "Please enter the first number:\n";
	cin >> num1;
	cout << "Please enter the second number:\n";
	cin >> num2;

	while (variable1 != num1) {
		variable2 = 0;
		while (variable2 != num2) {
			cout << "*";
			variable2++;
		}
		cout << endl;
		variable1++;

	}





	return 0;
}