#include <iostream>
using namespace std;
int sq(int a)
{
	return a*a;
}

int cub(int b)
{
	return b*b*b;
}

int main()
{
	int a, b;
	cout<<"Enter 1st Integer: ";
	cin>>a;
	cout<<"Enter 2nd Integer: ";
	cin>>b;
	int r=sq(a)+cub(b);
	cout<<"Result: "<<r;
	return 0;
}
