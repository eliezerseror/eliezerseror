#include<iostream>
#include<cstdlib>
#include<ctime>


using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a, b;

	a = 0;
	b = 1;
	srand(time(NULL));

	while (b != 0)
	{
		a++;
		b = ((rand()) % 20);
		cout <<" "<< a << "." << b;
	}

	cout << endl << "The number of times the system work was: " << a;
	



	return 0;
}