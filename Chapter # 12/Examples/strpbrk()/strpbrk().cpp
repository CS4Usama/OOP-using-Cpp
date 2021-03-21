//Write a program that explains the concept of function strpbrk() of string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char *str1 = "Cyber Hawk", *str2 = "reb";
	char *res;
	res = strpbrk(str1,str2);
	if(res)
		cout<<"strpbrk() Found First Character:  "<<*res;
	else
		cout<<"strpbrk didn't Find Character in set.";
	return 0;
}
