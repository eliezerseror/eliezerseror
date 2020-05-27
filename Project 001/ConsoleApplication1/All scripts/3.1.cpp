# include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int num1, num2;

	cout << "Please enter first number:" << endl;
	cin >> num1;
	cout << "Please enter second number:" << endl;
	cin >>num2;

	if (num1 >= 0 && num2 >= 0)
		cout << "Both of the numbers are bigger than zero";

	if (num1 < 0 && num2 < 0)
		cout << "Both of the numbers are smaller than zero";

	if (num1 >= 0 && num2 < 0)
		cout << " The first number is bigger than zero and the second number is smaller";

	if (num1 < 0 && num2 >= 0)
		cout << "The first number is smaller than zero and the second number is bigger";


	return 0;
}