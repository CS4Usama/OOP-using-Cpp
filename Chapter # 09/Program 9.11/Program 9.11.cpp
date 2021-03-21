#include <iostream>
using namespace std;
int mul(int a, int b)
{
	if(b%a==0)
		return 1;
	else
		return 0;
}

int main()
{
	int a, b, r;
	for(int i=1;i<=5;i++)
	{
		cout<<"Enter a Pair of Integers: ";
		cin>>a>>b;
		r=mul(a,b);
		if(r==1)
			cout<<b<<" is a Multiple of "<<a<<"."<<endl;
		else
			cout<<b<<" is not a Multiple of "<<a<<"."<<endl;
	}
	return 0;
}
