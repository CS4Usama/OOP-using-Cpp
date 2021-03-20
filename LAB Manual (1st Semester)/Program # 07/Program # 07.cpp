/*Problem:-   Write a program to calculate & display sum of the following series using for loop:
			  1!+2!+3!+4!+5!
			  Where the symbol "!" represents the factorial of the number.*/


#include <iostream>
using namespace std;
int main()
{
	int c, fac, num, sum=0;
	for(num=1;num<=5;num++)
	{
		fac=1;
		for(c=1;c<=num;c++)
		{
			fac=fac*c;
		}
		sum=sum+fac;
	}
	cout<<"Sum of the Series is: "<<sum;
	return 0;
}
