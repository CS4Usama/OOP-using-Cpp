//Write a program that explains the concept of function stricmp() of string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char tst1[] = "this is a test string", tst2[] = "THIS IS A TEST STRING";
	int res;
	cout<<"Test String 1 is:  ";
	puts(tst1);
	cout<<"Test String 2 is:  ";
	puts(tst2);
	cout<<"\nComparing String1 and String2 using strcmp()...."<<endl;
	res = strcmp(tst1,tst2);
	if(res==0)
		cout<<"String 1 is Equal to String 2."<<endl;
	else if(res<0)
		cout<<"String 1 is Less than to String 2."<<endl;
	else
		cout<<"String 1 is Greater than to String 2."<<endl;
	cout<<"\nComparing String1 and String2 using stricmp()...."<<endl;
	res = stricmp(tst1,tst2);
	if(res==0)
		cout<<"String 1 is Equal to String 2."<<endl;
	else if(res<0)
		cout<<"String 1 is Less than to String 2."<<endl;
	else
		cout<<"String 1 is Greater than to String 2."<<endl;
	return 0;
}
