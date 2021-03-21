//Write a program that explains the concept of function strset() and strnset() of string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str[15] = "Cyber Hawk", ch ='*';
	cout<<"Before strset():  "<<str<<endl;
	strset(str,ch);
	cout<<" After strset():  "<<str<<endl;
	
	char str1[15] = "Cyber Hawk";
	strnset(str1,ch,5);
	cout<<"\nAfter strnset():  "<<str1;
	return 0;
}
