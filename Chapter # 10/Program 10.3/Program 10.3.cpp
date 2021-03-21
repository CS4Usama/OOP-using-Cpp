#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a,b,r;
	cout<<"Enter 1st double Value: ";
	cin>>a;
	cout<<"Enter 2nd double Value: ";
	cin>>b;
	r = fmod(a,b);
	cout<<"The Result of fmod() is: "<<r;
	//cout<<"The Result of fmod() is: "<<fmod(a,b);
	return 0;
}
