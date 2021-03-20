/*Problem:-   Write a program that gets the number and a letter. If the letter is 'f', the program should treat
			  the number entered as temperature in degrees Fahrenheit and convert it to the temperature in
			  degree Celsius and print a suitable message. If the letter is 'c' the program should consider
			  the number as Celsius temperature and convert it to Fahrenheit temperature and print a suitable message.
			  The program should display error message and then exit if the user enters any other letter.*/


#include <iostream>
using namespace std;
int main()
{
	double tem, cel, fah;
	char ch;
	cout<<"Enter Temperature: ";
	cin>>tem;
	cout<<"Enter Letter ('f' or 'F' for Fahrenheit Conversion and 'c' or 'C' for Celsius Conversion): ";
	cin>>ch;
	if(ch=='f' || ch=='F')
	{
		cout<<endl<<"Your entered Temperature is in Fahrenheit."<<endl;
		cel=5.0/9.0*(tem-32);
		cout<<"Your entered Temperature in Celsius is: "<<cel;
	}
	else if(ch=='c' || ch=='C')
	{
		cout<<endl<<"Your entered Temperature is in Celsius."<<endl;
		fah=9.0/5.0*tem+32;
		cout<<"Your entered Temperature in Fahrenheit is: "<<fah;
	}
	else
		cout<<endl<<"Invalid Input";
	return 0;
}
