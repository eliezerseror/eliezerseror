#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

	int num1, total1, total2;
	total1 = 1;

	while (total1 != 0)
	{
		cout << "Please enter a number: \n";
		cin >> num1;
		total2 = total2 + num1;
		total1 = total2;
		cout << "The total sum is: " << total1 << endl;
	}

	cout << "The total sum is equal to zero";




	return 0;
}