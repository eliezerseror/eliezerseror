# include <iostream>

using std::cout;
using std::cin;

int main()
{
	int pos_even;

	cout << "Please enter a number:\n";
	cin >> pos_even;

	cout << ((pos_even % 2 == 0 && pos_even > 0 ) ? "1" : "-1");


	return 0;
}