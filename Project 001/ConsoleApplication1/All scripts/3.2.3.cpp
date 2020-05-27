# include <iostream>
# include <cmath>

using std::endl;
using std::cout;
using std::cin;

int main()
{
	double a, b, c,
		calc;

	cout << "Please enter 3 parameters: " << endl;
	cout << "a - " << endl;
	cin >> a;
	cout << "b - " << endl;
	cin >> b;
	cout << "c - " << endl;
	cin >> c;

	if (a == 0)
		if (b == 0)
			if (c == 0)
				cout << "Evry x is cool";
			else
				cout << "There is no answer";
		else
			cout << "x = " << -c / b;

	else
	{ 
		calc = { (b * b) - 4 * a * c };

		if (calc < 0)
			cout << "There is no answer";
		else
			if (calc == 0)
				cout << "X = " << -b / (2 * a);
			else {
				cout << "x1 = " << (-b + (sqrt(calc))) / (2 * a) << endl;
				cout << "x2 = " << (-b - (sqrt(calc))) / (2 * a);
			}
	}
	return 0;
}