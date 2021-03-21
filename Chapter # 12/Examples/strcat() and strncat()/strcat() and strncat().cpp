//Write a program that explains the concept of functions strcat() and strncat() of string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str1[12] = "The Hacker:", str2[] = " A Power of Freedom.";
	cout<<"String 1 is: ";
	puts(str1);
	cout<<"String 2 is: ";
	puts(str2);
	cout<<"\nConcating the Strings with strcat()...."<<endl;
	strcat(str1,str2);
	cout<<"String 1 after Concatenation: ";
	puts(str1);
	str1[11] = '\0';
	cout<<"\nConcating the Strings with strncat()...."<<endl;
	strncat(str1,str2,8);
	cout<<"String 1 after Concatenation: ";
	puts(str1);
	return 0;
}
