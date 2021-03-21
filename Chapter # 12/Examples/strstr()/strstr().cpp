//Write a program that explains the concept of function strstr() of string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str1[40] = "Programming makes Life Exciting.";
	char str2[20];
	char *res;
	cout<<"The String to be Searched is:  ";
	puts(str1);
	cout<<"Enter the Search String:  ";
	gets(str2);
	res = strstr (str1,str2);
	if(res==NULL)
		cout<<"\nThe Searach String was not Found.";
	else
		{
			cout<<"\nMatching String found at "<<res-str1;
			cout<<"\nResult points to the String: ";
			puts(res);
		}
	return 0;
}
