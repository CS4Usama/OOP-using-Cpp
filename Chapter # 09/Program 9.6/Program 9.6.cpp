#include <iostream>
using namespace std;
void chk(long n)
{
	int c=0;	
	if(n>=0)
	{
		for(long i=2;i<n/2;i++)
		{
			if(n%i==0)
			{
				c=1;
				break;
			}
		}
		if(n==0 || n==1)
		{
			if(n==0)
				cout<<n<<" is only an Even Number... Not a Prime Number.";
			else
				cout<<n<<" is only a Positive Odd Number... Not a Prime Number.";
		}
		else if(n%2==0 && c==0)
			cout<<n<<" is a Positive Even Prime Number.";
		else if(n%2!=0 && c==0)
			cout<<n<<" is a Positive Odd Prime Number.";
		else if(n%2==0 && c!=0)
			cout<<n<<" is only a Positive Even Number... Not a Prime Number.";
		else if(n%2!=0 && c!=0)
			cout<<n<<" is only a Positive Odd Number... Not a Prime Number.";
		else
			cout<<n<<" is not a Prime Number.";
	}
	else
	{
		c=0;
		for(long i=-2;i<n/2;i--)
		{
			if(n%i==0)
			{
				c=1;
				break;
			}
		}
		if(n==-1)
			cout<<n<<" is only a Negative Odd Number... Not a Prime Number.";
		else if(n%2==0 && c==0)
			cout<<n<<" is only a Negative Even Number... Not a Prime Number.";
		else if(n%2!=0 && c==0)
			cout<<n<<" is only a Negative Odd Number... Not a Prime Number.";
		else if(n%2==0 && c!=0)
			cout<<n<<" is a Negative Even Prime Number.";
		else if(n%2!=0 && c!=0)
			cout<<n<<" is a Negative Odd Prime Number.";
		else
			cout<<n<<" is not a Prime Number.";
	}
}

int main()
{
	long n;
	cout<<"Enter a Number: ";
	cin>>n;
	cout<<"\nNature of the Number\n";
	cout<<"---------------------------\n  ";
	chk(n);
	cout<<endl;
	return 0;
}
