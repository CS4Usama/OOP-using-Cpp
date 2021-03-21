#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char s1[50], s2[50];
	int ch, r;
	void chk_eq(char str1[], char str2[]);
	cout<<"Enter String_1: ";
	gets(s1);
	cout<<"Enter String_2: ";
	gets(s2);
	chk_eq(s1, s2);
	return 0;
}

void chk_eq(char str1[], char str2[])
{
	int l1, l2;
	l1=strlen(str1);
	l2=strlen(str2);
	if(l1!=l2)
	{
		cout<<"Two Strings are NOT Equal.";
		exit(1);
	}
	for(int i=0;i<=l1-1;i++)
	{
		if(str1[i]!=str2[i])
		{
			cout<<"Two Strings are NOT Equal.";
			exit(1);
		}
	}
	cout<<"Two Strings are EQUAL.";
}
