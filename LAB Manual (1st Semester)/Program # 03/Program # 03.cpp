/*Problem:-   Write a program to find the Largest, Smallest and Average of n whole numbers.
			  You can assume that n has already been set by the user.*/


#include <iostream>
using namespace std;
int main()
{
	long n, c=0, small, large;
	double sum=0, avg;
	cout<<"Set the value of 'n' to which Number: ";
	cin>>n;
	large=c;
	small=c;
	for(c=0;c<=n;c++)
	{
		sum=sum+c;
		if(c>large)
			large=c;
		else if(c<small)
			small=c;
	}
	c=n;
	avg=sum/c;	
	//avg=sum/n;
	cout<<"\nLargest Number between ("<<n<<") Whole Numbers is: "<<large<<endl;
	cout<<"Smallest Number between ("<<n<<") Whole Numbers is: "<<small<<endl;
	cout<<"Average of ("<<n<<") Whole Numbers is: "<<avg<<endl;
	return 0;
}
