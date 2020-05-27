# include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a, b, c, re;

	cout << "Please enter the result of the first test: ";
	cin >> a;
	cout << "Please enter the result of the second test: ";
	cin >> b;
	cout << "Please enter the result of the exam: ";
	cin >> c;

	re = (a * 0.1) + (b * 0.2) + (c * 0.7);
	cout << "Your final result of the course is :" << re;

	return 0;
}