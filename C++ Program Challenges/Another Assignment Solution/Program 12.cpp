#include <iostream>
using namespace std;
int main()
{
	long int n,a,b,c;
	cout<<"Enter 4-Digit Number: ";
	cin>>n;
	a=n/1000;
	n=n%1000;
	b=n/100;
	n=n%100;
	c=n/10;
	n=n%10;
	cout<<"Sum of All Digits is: "<<a+b+c+n;
	return 0;
}
