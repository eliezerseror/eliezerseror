/************************************************************************************
*         A program that calculate the area and scope of a rectangle
*        ============================================================
*
* Writen by: Eliezer Seror ID: 312564776 LogIn: xxx
*
* Algorithm: these program reads from the user the width and length of a rectangle,
*            in order to calculate the scope and area.
*
*************************************************************************************/          

#include <iostream>

using std::cout;
using std::endl;
using std::cin;


int main()
{
	int length, width;                       // The inputs

	// reading the inputs
	cout << "please enter the length of the rectangle: ";
	cin >> length;
	cout << "please enter the width of the rectangle: ";
	cin >> width;

	//calculating the output
	cout << "the area of the rectangle is: " << length * width << endl;
	cout << "the scope of the rectangle is: " << (length * 2) + (width * 2);

	return 0;
}