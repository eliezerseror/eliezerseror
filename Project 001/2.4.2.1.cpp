#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int num1, num2;

	cout << "Please enter the first number:";
	cin >> num1;
	cout << "Please enter the second number:";
	cin >> num2;
	
	num1 = num1 - num2;
	num2 = num2 + num1;
	num1 = num2 - num1;

	cout << "The first new number is: " << num1 << endl;
	cout << "The second new number is: " << num2;

	return 0;
}