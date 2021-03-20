//Chapter # 09 (Program 28)
/*Write a program to use two functions Large() and Sum(). The Large() function gets two integer arguments by reference
and sets the larger number to its square. The Sum() function gets the integer argument by value and returns the sum of the
individual digits of the number. The main() function inputs two integers from the user and prints the sum of
individual digits and square of the large number.*/


#include <iostream>
using namespace std;
void Large(long &a, long &b)
{
	if(a>b)
		a=a*a;
	else
		b=b*b;
}
long Sum(long c)
{
	long ind, sum;
	for(sum=0;c!=0;c=c/10)
	{
		ind=c%10;
		sum=sum+ind;
	}
	return sum;		
}

int main()
{
	long a,b;
	cout<<"Enter Two Integers: ";
	cin>>a>>b;
	cout<<"\nSum of Individual Digits of 1st Integer: "<<Sum(a);
	cout<<"\nSum of Individual Digits of 2nd Integer: "<<Sum(b);
	cout<<"\n\nThe Square of Larger Number is: ";
	if(a>b)
	{
		Large(a,b);
		cout<<a;
	}
	else
	{
		Large(a,b);
		cout<<b;
	}
	return 0;
}
