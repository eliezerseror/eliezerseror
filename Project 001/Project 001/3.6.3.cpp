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
	cin >> day >> month >> year;
	if (year <= 3000 && month <= 12)
	{
		if (((month = 1, 3, 5, 7, 8, 10, 12 && day <= 31)

			|| (month = 4, 6, 9, 11 && day <= 30)) 
			|| ((month = 2 && (year % 4) == 0) && (day <= 29)) 
			|| (((year % 4) == 0) && (day <= 29)))
					
						year_div_4 = year / 4;
						year_p_div_4 = year_div_4 + year;
						month_code = 0;

						switch (month)
						{
						case 1: month_code = 1;
							break;
						case 2: month_code = 4;
							break;
						case 3: month_code = 4;
							break;
						case 4: month_code = 0;
							break;
						case 5: month_code = 2; 
							break;
						case 6: month_code = 5;
							break;
						case 7: month_code = 0;
							break;
						case 8: month_code = 3;
							break;
						case 9: month_code = 6;
							break;
						case 10: month_code = 1;
							break;
						case 11: month_code = 4;
							break;
						case 12: month_code = 6;
							break;
						}

					day_code = day + year_p_div_4 + month_code;
					day_in_week = day_code % 7;

					if (day_in_week == 0) cout << "The date you enter is saturday";
					if (day_in_week == 1) cout << "The date you enter is sunday";
					if (day_in_week == 2) cout << "The date you enter is munday";
					if (day_in_week == 3) cout << "The date you enter is tuesday";
					if (day_in_week == 4) cout << "The date you enter is wednesday";
					if (day_in_week == 5) cout << "The date you enter is thursday";
					if (day_in_week == 6) cout << "The date you enter is friday";

				}
				else cout << "Wrong year";

	return 0;
}