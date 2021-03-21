#include <iostream>
using namespace std;
int main()
{
	double tem, fah;
	cout<<"Enter Temperature in Celsius: ";
	cin>>tem;
	fah=9.0/5.0*tem+32;
	cout<<"Your entered Temperature in Fahrenheit is: "<<fah;
	return 0;
}
