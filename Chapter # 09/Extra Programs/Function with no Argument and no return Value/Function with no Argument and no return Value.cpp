/*Write a program that explains the working of a Function that pass no Argument and return no value. Program takes input and process in other function and calls
it in main function.*/

#include <iostream>
using namespace std;
//Another Method:	void sqr(void)
void sqr()
{
	long a;
	cout<<"Enter a Number: ";
	cin>>a;
	cout<<"Square of "<<a<<" is "<<a*a;
}

int main()
{
	sqr();
	return 0;
}
