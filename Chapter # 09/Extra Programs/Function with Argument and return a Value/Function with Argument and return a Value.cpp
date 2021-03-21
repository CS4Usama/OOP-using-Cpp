/*Write a program that explains the working of a Function that accepts an Argument and return a value. Program takes an input from the user in main function
and displays its square through sub function.*/

#include <iostream>
using namespace std;
long sqr(long a)
{
	//long sq=a*a;	(Another Method)
	return (a*a);
}

int main()
{
	long no, sq;
	cout<<"Enter a Number: ";
	cin>>no;
	sq=sqr(no);
	cout<<"Square of "<<no<<" is: "<<sq;
	return 0;
}
