#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main() {
	int num = 2;

	for (num; (num % 2 == 0) && (num < 101 ); num=num +2)
		if (num % 10 == 0)
			cout << endl << num;
		else
			cout << num;


	return 0;
}