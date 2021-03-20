/*Problem:-   Write a program that inputs four numbers and calculate the sum, average, and product of all the numbers.*/


#include <iostream>
using namespace std;
int main()
{
	long double a, b, c, d, sum, avg, pro;
	cout<<"Enter First Number: ";
	cin>>a;
	cout<<"Enter Second Number: ";
	cin>>b;
	cout<<"Enter Third Number: ";
	cin>>c;
	cout<<"Enter Fourth Number: ";
	cin>>d;
	sum=a+b+c+d;
	cout<<"\n    Sum of above Four Numbers is: "<<sum;
	avg=sum/4;
	cout<<"\nAverage of above Four Numbers is: "<<avg;
	pro=a*b*c*d;
	cout<<"\nProduct of above Four Numbers is: "<<pro;
	return 0;
}
