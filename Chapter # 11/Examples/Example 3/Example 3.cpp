//Write a program that inputs two integers and adds them using Derefrence Operator.

#include <iostream>
using namespace std;
int main()
{
	int a, b, s, *p1, *p2;
	p1=&a;
	p2=&b;
	cout<<"Enter an Integer: ";
	cin>>*p1;
	cout<<"Enter an Integer: ";
	cin>>*p2;
	s= *p1 + *p2;
	cout<<*p1<<" + "<<*p2<<" = "<<s;
	return 0;
}
