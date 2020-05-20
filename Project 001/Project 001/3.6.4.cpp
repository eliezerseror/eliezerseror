/**************************************************************************************
*                                                                                     *
*          A program clculating the name of the day from a random date                *
*         =============================================================               *
*                                                                                     *
*      writen by: Eliezer Seror  ID: 312564776	Login: xxx                            *
*                                                                                     *
* Algorithm: this program reads from the user a date and print out                    *
* the name of the day in the week                                                     *
*                                                                                     *
***************************************************************************************/





# include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int day, month, year,
		year_div_4, year_p_div_4, month_code, month_print, day_code, day_in_week;

	cout << "Please enter the date you like: xx/xx/xx\n";
	cin >> month;

	bool status1, status2, status3, status4;
	
	status1 = status2 = status3 = status4 = false;

	if (month == 1)
	{
		status1 = true;
	}
	else 
		if (month == 2)
		{
			status2 = true;
		}
		else
			if (month == 3)
			{
				status3 = true;
			}
			else
				if (month == 4)
				{
					status4 = true;
				}

	cout << status1 << endl << status2 << endl << status3 << endl << status4;
		return 0;
}