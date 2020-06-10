#include <iostream>

#include <cstdlib>

#include < ctime>




	int main()

{

	int i = 0;



	srand((unsigned)time(NULL));      // ‘turn the machine on’ 



	while (i < 10) {

		std::cout << rand() % 101 << " ";     //gen a random val

		i++;

	}

	return 0;

}