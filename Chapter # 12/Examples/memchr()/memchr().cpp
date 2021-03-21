//Write a program that explains the concept of function memchr() of string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char tst[] = "Test String";
	char srch;
	void *res;
	cout<<"Enter a Single Character to Search: ";
	cin>>srch;
	cout<<"The Test String is: ";
	puts(tst);
	cout<<"memchr() is looking for "<<srch<<" ...."<<endl;
	res = memchr(tst, srch, 12);
	if(res!=NULL)
		cout<<"The Character found in the String.";
	else
		cout<<"The Character not found in the String.";
	return 0;
}
