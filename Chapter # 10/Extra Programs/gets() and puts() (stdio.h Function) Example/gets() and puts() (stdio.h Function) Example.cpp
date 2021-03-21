//Write a program that explains the concept of gets() and puts() function of stdio.h header file.

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	char str1[10], str2[] = "\nThis is an example output string.";
	cout<<"Enter String: ";
	gets(str1);
	puts(str1);
	puts(str2);
	return 0;
}
