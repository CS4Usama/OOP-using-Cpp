#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	int n, g;
	if(a<b)
		n=a;
	else
		n=b;
	for(int i=1;i<=n;i++)
		if(a%i==0 && b%i==0)
			g=i;
	return g;
}

int main()
{
	int a, b;
	cout<<"Enter 1st Integer: ";
	cin>>a;
	cout<<"Enter 2nd Integer: ";
	cin>>b;
	cout<<"Greatest Common Divisor is: "<<gcd(a,b);;
	return 0;
}
