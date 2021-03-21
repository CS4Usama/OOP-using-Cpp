//Write a program that explains the concept of function strspn() of string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char *str1 = "Cyber Hawk", *str2 = "CybHawk";
	int len;
	len = strspn(str1,str2);
	cout<<"Character where Strings differ is at Position "<<len;
	return 0;
}
