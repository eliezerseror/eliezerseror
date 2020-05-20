/********************************************************************
* 
*        A program calculateing different outcomes from 4 numbers
*        =======================================================
*
* Writen by: Eliezer Seror, id:312564776, login:xxx
*
* Algorithm: This program reads from the user 4 intiger number, 
* and divide them to list of even,odd,positive,negative and zero.
*
*
******************************************************************/

# include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int num1, num2, num3, num4,              // the 4 inputs
		even, odd, pos, neg, zero;

	cout << "Please enter 4 numbers:\n";   //reading the inputs
	cin >> num1 >> num2 >> num3 >> num4;      
	
	even = odd = pos = neg = zero = 0;          // calculating the list

	if (num1 % 2 == 0)
		even = even + 1;
	if (num2 % 2 == 0)
		even = even + 1;
	if (num3 % 2 == 0)
		even = even + 1;
	if (num4 % 2 == 0)
		even = even + 1;


	if (num1 > 0)
		pos = pos + 1;
	if (num2 > 0)
		pos = pos + 1;
	if (num3 > 0)
		pos = pos + 1;
	if (num4 > 0)
		pos = pos + 1;

	if (num1 < 0)
		neg = neg + 1;
	if (num2 < 0)
		neg = neg + 1;
	if (num3 < 0)
		neg = neg + 1;
	if (num4 < 0)
		neg = neg + 1;

	odd = 4 - even;
	zero = 4 - (neg + pos);

	// printing the result

	cout << "The amount of even numbers are: " << even << " The amount of odd numbers are: " << odd << endl;
	cout << "The amount of positive numbers are: " << pos << " The amount of negativ numbers are: " << neg << " The amount of zero numbers are: " << zero ;



	return 0;
}
