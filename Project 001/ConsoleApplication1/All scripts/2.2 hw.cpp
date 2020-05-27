#include <iostream>
 
using std::cout;
using std::endl;

int main()
{
    int num1, num2, num3, sum1, sum2, sum3;

    num1 = 10;
    num2 = 2;
    num3 = 50;

    sum1 = (num1 + num2) * num3;
    sum2 = (num1 + num3) * num2;
    sum3 = (num2 + num3) * num1;

    cout << "Here are the answers by order:" <<endl;
    cout << "1.) (" << num1 << " + " << num2 << ") * " << num3 << " = " << sum1 << endl;
    cout << "2.) (" << num1 << " + " << num3 << ") * " << num2 << " = " << sum2 << endl;
    cout << "3.) (" << num2 << " + " << num3 << ") * " << num1 << " = " << sum3 << endl;

    return 0;
}