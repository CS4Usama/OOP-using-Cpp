//Write a program that explains the concept of functions memcpy() and memmove() of string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char tst1[] = "Sample String.";
	char tst2[15];
	cout<<"The Value of Test1 is: ";
	puts(tst1);
	cout<<"\nCopying Test1 to Test2....\n";
	memcpy(tst2, tst1, 15);
	cout<<"The Value of Test2 is: ";
	puts(tst2);
	cout<<"\nMoving Test1 to Test2....\n";
	memmove(tst2, tst1, 15);
	cout<<"The Value of Test2 is: ";
	puts(tst2);
	return 0;
}
