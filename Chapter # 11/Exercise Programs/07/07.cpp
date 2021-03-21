#include <iostream>
using namespace std;
void prime(int *x)
{
	int p=1;
	for(int c=2; c<=*x/2; c++)
		if(*x%c==0)
		{
			p=0;
			break;
		}
	if(p==1)
		cout<<*x<<" is a Prime Number.";
	else
		cout<<*x<<" is not a Prime Number.";
}

int main()
{
	int a, *p;
	p = &a;
	cout<<"Enter an Integer: ";
	cin>>*p;
	prime(p);
	return 0;
}
