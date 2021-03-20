/*Problem:-   Write a program that inputs pounds from the user and converts it into kilograms.*/


#include <iostream>
using namespace std;
int main()
{
	double pon, kilo;
	cout<<"Enter Weight in Pounds: ";
	cin>>pon;
	kilo=pon/2.205;
	cout<<"\nYour entered Weight in Kilograms is: "<<kilo;
	return 0;
}
