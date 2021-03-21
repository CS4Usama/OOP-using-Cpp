//Write a program that explains the concept of function strcoll() of string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str1[] = "Borland", str2[] = "International";
	int chk = strcoll(str1,str2);
	if(chk==0)
		cout<<"The Strings are Equal.";
	if(chk<0)
		cout<<str1<<" comes before "<<str2;
	if(chk>0)
		cout<<str2<<" comes before "<<str1;
	return 0;
}
