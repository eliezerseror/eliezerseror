#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	double a, b, c;

	cout << "Please enter 3 length of traingular: " << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	double sc, area, x;

	sc = (a + b + c) / 2;
	x = sc * (sc - a) * (sc - b) * (sc - c);
	area = sqrt(x);

	cout << "The area of the traingular is: " << area;

	return 0;
}