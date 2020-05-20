# include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int num1, num2;

	cout << "Please enter 2 numbers: \n";
	cout << "num1 - \n";
	cin >> num1;
	cout << "num2 - \n";
	cin >> num2;

	bool pos, even;

	if (num1 > 0 && num2 > 0)
		pos = true;

	if (num1 % 2 == 0 && num2 % 2 == 0)
		even = true;
	
	if (pos && even)
		cout << "The numbers are positive and even !";

	if (!pos && !even)
		cout << "The numbers are not positive and not even !";

	if (!pos && even)
		cout << "The numbers are even but not positiv !";

	if (pos && !even)
		cout << "The numbers are  positive but not even !";

		return 0;
}