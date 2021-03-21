//Write a program that explains the concept of function strrev() of string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str[] = "C++ Programming";
	cout<<"Before strrev():  "<<str<<endl;
	cout<<"After strrev():  "<<strrev(str);
	return 0;
}
