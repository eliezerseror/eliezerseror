#include <iostream>
#include <cstdlib>
#include <ctime>


using std::cin;
using std::cout;
using std::endl;

const int AMOUNT_OF_NUMBER = 10,
          AMOUNT_OF_DUPLICATES = 5;

int main()
{
	int number_counter = 0;
	int duplicates_counter = 1;

	while (number_counter != AMOUNT_OF_NUMBER)
	{
		duplicates_counter = 1;
		number_counter++;
		cout << endl;

		while (duplicates_counter < (AMOUNT_OF_DUPLICATES + 1))
		{
			cout << (number_counter * duplicates_counter) << " ";
			duplicates_counter++;
		}
	}

	return 0;
	}