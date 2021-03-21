#include <iostream>
using namespace std;
int fun(int a[], int s, char c='+')
{
	int sum=0;
	for(int i=0;i<s;i++)
	{
		if(c=='+')
		{
			if(a[i]>0)
				sum+=a[i];
		}
		else
		{
			if(a[i]<0)
				sum+=a[i];
		}
	}
	return sum;
}

int main()
{
	int s, a[20];
	cout<<"Enter Array Dimension: ";
	cin>>s;
	for(int i=0;i<s;i++)
	{
		cout<<"Enter Any Integer (Positive/Negative): ";
		cin>>a[i];
	}
	
//	int s1=fun(a,s);
//	int s2=fun(a,s,'-');	Another Method.

	cout<<"\nThe Sum of the Positive Integer: "<<fun(a,s)<<endl;
	cout<<"The Sum of the Negative Integer: "<<fun(a,s,'-');
	return 0;
}
