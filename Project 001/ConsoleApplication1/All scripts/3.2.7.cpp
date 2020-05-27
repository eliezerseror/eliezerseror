# include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	double age;

	cout << "Please enter your age: \n";
	cin >> age;

	if (age <= 0)
		cout << "Bad age please try again";
	else if (age < 2)
		cout << "Its a baby!";
	else if (age < 12)
		cout << "Its a child!";
	else if (age < 18)
		cout << "Its a teenager!";
	else if (age < 65)
		cout << "Its a grown up!";
	
	else cout << "its an old age";



	return 0;
}