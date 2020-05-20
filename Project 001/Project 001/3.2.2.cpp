# include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{

	int num1, num2;

	cout << "Pleas enter the first number: " << endl;
	cin >> num1;
	cout << "Pleas enter the second number: " << endl;
	cin >> num2;

	if (num1 > 0)
		if (num2 > 0)
			cout << "Both number are positive";
		else
			cout << "Only the first number is positive";
	else
		if (num2 >= 0)
			cout << "only the second number is positive";
		else
			cout << "Both are negative";


	return 0;
}