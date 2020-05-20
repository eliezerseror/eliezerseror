# include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int a, b, c;
	
	cout << "please enter 3 diffrent number: " << endl;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	cout << "1 - " << a - a << "   2 - " << a - b << "   3 - " << a - c << endl;
	cout << "1 - " << b - b << "   2 - " << b - a << "   3 - " << b - c << endl;
	cout << "1 - " << c - c << "   2 - " << c - a << "   3 - " << c - b << endl;
	
	return 0;
}