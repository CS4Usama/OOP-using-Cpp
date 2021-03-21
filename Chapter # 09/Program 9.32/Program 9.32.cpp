#include <iostream>
using namespace std;
unsigned long fact(unsigned long a)
{
	if(a==0)
		return 1;
	else
		return a*fact(a-1);
}

int main()
{
	unsigned long a;
	cout<<"Enter a Number to find its Factorial: ";
	cin>>a;
	cout<<"Factorial of "<<a<<" is: "<<fact(a);
	return 0;
}
