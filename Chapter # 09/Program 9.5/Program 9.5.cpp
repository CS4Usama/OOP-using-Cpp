#include <iostream>
using namespace std;
void fac(int);
int main()
{
	int num;
	cout<<"Enter a Number: ";
	cin>>num;
	fac(num);
	return 0;
}

void fac(int n)
{
	long fac=1;
	for(int c=1;c<=n;c++)
		fac*=c;
	cout<<"Factorial of "<<n<<" is: "<<fac;
}
