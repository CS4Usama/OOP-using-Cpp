#include <iostream>
using namespace std;
int main()
{
	int n;
	long double s=1, t;
	unsigned long fac(int);
	cout<<"Enter the Maximum Value of Denominator: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		t=1.0/fac(i);
		s+=t;
	}
	cout<<"Sum of the Series is: "<<s;
	return 0;
}

unsigned long fac(int n)
{
	unsigned long pro=1;
	for(int i=1;i<=n;i++)
		pro*=i;
	return pro;
}
