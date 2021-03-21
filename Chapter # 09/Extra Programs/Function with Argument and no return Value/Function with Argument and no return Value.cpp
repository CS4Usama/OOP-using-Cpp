/*Write a program that explains the working of a Function that pass an Argument and return no value. Program takes two number input in main function
and adds them in other function then, display its answer.*/

#include <iostream>
using namespace std;
void sum(long a, long b)
{
	long s=a+b;		//(if I use other Method then this Statment is Skipped)
	cout<<"Sum of "<<a<<" + "<<b<<" is: "<<s;	//(if I use other Method then this Statment is Skipped)
	/*(Another Method)*/	//cout<<"Sum of "<<a<<" + "<<b<<" is: "<<a+b;
}

int main()
{
	long a, b;
	cout<<"Enter 1st Number: ";
	cin>>a;
	cout<<"Enter 2nd Number: ";
	cin>>b;
	sum(a,b);
	return 0;
}
