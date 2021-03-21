#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int n;
	float f;
	cout<<"Enter an Integer: ";
	cin>>n;
	cout<<"Enter a Float: ";
	cin>>f;
	cout<<endl<<"The Absolute Value of "<<n<<" is "<<abs(n)<<endl;
	cout<<"The Absolute Value of "<<f<<" is "<<fabs(f);
	return 0;
}
