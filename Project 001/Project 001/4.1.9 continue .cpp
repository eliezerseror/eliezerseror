# include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	int num, a, b;

	
	
	num = 1;
	a = -3;
	b = 2;

	while ( a == -3)
	{
		cout << "Please enter a number: ";
		cin >> num;
		if (num <= 0)
			continue;
		else
			a = 2;
		while (num > a)
		{
			a = a * b;
		}
	}

	if (a == 2)
		cout << "The biigest number is: " << a;
	else {
		a = a / 2;
		cout << "The biigest number is: " << a;
	}

	return 0;
}