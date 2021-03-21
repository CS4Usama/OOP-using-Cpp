//Write a program that displays the value stored in a pointer using Derefrence Operator.

#include <iostream>
using namespace std;
int main()
{
	int a, *ptr = &a;
	cout<<"Enter an Integer: ";
	cin>>*ptr;
	cout<<"You Entered: "<<*ptr;
	return 0;
}
