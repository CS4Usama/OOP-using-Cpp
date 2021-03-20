/*Problem:-   Write a program that inputs temperature from the user in Fahrenheit and
			  converts it into Celsius degree using formula C=5/9(F-32).*/


#include <iostream>
using namespace std;
int main()
{
	double fah, cel;
	cout<<"Enter Temperature in Fahrenheit: ";
	cin>>fah;
	cel=5.0/9.0*(fah-32);
	cout<<"\nTemperature in Celsius is: "<<cel;
	return 0;
}
