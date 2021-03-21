/*Write a program that explains the working of a Function that pass no Argument but return a value. Program takes input and process in other function and calls
it in main function.*/

#include <iostream>
using namespace std;
long sum()
{
	long a, b;
	cout<<"Enter 1st Number: ";
	cin>>a;
	cout<<"Enter 2nd Number: ";
	cin>>b;
	return (a+b);
}

int main()
{
	long ans=sum();
	cout<<"Sum is: "<<ans;
	return 0;
}
