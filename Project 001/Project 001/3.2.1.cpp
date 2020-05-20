#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int num1;

	cout << "Please entar a number:" << endl;
	cin >> num1;

	if (num1 > 0)
		cout << "The number is positive.";
	else
		cout << "the number is not positiv.";



	return 0;
}