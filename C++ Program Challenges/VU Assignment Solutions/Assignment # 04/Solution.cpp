#include <iostream>
using namespace std;
int main()
{
	// Here 'count' variable will be used for Loop Iteration's count
	int x=2, y=1, count=1;
	int z = (x*x) + (2*x*y) - (x/y);
	cout<<"After Evaluation of given Expression, The Value of 'z' is:  "<<z<<endl;
	cout<<"Last Digit of My VU-ID is:  2"<<endl;

	// variable 'i' store the sum of z (6) and last digit of my VU ID which is 2 (6+2)
	int i = z+2;

	if((i % 2) != 0)
	{
		cout<<"\nI got an odd number "<<i<<endl<<endl;
		while(i != 0)
		{
			cout<<count<<". My VU-ID:  MC200400002"<<endl;
			i--;
			count++;
		}
	}
	else
	{
		cout<<"\nI got an even number "<<i<<endl<<endl;
		while(i != 0)
		{
			cout<<count<<". My Name is:  Abdullah Mushtaq"<<endl;
			i--;
			count++;
		}
	}

	return 0;
}
