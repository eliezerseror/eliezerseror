/**********************************************************
*              A program that calculate 3 numbers 
*              ==================================
* 
* Writen by: Eliezer Seror, id: 312564776, login: xxx.
*
* Algorithm: This program reads from the user three intiger numbers,
* ========== and print their sum, difference, muiltiplication and quotient.
*
* The program assumes the second input is not zero.
*************************************************************/

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    int num1, num2, num3,          // the three inputs
        sum1, sum2, sum3;    

    // reading the inputs
    cin >> num1 >> num2 >> num3;

    // calculating the output
    sum1 = (num1 + num2) * num3;
    sum2 = (num1 + num3) * num2;
    sum3 = (num2 + num3) * num1;

    cout << "Here are the answers by order:" << endl;
    cout << "1.) (" << num1 << " + " << num2 << ") * " << num3 << " = " << sum1 << endl;
    cout << "2.) (" << num1 << " + " << num3 << ") * " << num2 << " = " << sum2 << endl;
    cout << "3.) (" << num2 << " + " << num3 << ") * " << num1 << " = " << sum3 << endl;

    return 0;
}