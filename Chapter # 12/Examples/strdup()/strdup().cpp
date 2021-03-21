//Write a program that explains the concept of function strdup() of string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char *ptr, str2[15], str[] = "Hello World";
	cout<<"Original String:  "<<str<<endl;
	ptr = strdup(str);
	cout<<"Duplicate String:  "<<ptr;
	return 0;
}
