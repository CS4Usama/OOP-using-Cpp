//Write a program that explains the concept of function memcmp() of string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char tst1[] = "This is Test String 1", tst2[] = "This is Test String 2";
	int res;
	cout<<"Test String 1 is: "<<tst1<<endl;
	cout<<"Test String 2 is: "<<tst2<<endl;
	cout<<"\nComparing Test1 and Test2 for 20 Bytes...."<<endl;
	res = memcmp(tst1, tst2, 20);
	if(res==0)
		cout<<"Test1 and Test2 are Same for 20 Bytes."<<endl;
	else
		cout<<"Test1 and Test2 are not Same for 20 Bytes."<<endl;
	cout<<"\nComparing Test1 and Test2 for 21 Bytes...."<<endl;
	res = memcmp(tst1, tst2, 21);
	if(res==0)
		cout<<"Test1 and Test2 are Same for 21 Bytes.";
	else
		cout<<"Test1 and Test2 are not Same for 21 Bytes.";
	return 0;
}
