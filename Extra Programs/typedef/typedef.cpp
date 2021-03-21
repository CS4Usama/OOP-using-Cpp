//Write a program that explains the working of typedef.

#include <iostream>
using namespace std;
int main()
{
	typedef int usama;
	usama n1=100;
	int n2=50;
	usama sum=n1+n2;
	cout<<"Sum of n1 and n2 is: "<<sum;
	return 0;
}
