//Write a program that explains the concept of function strerror() of errno.h

#include <iostream>
#include <errno.h>
#include <string.h>
using namespace std;
int main()
{
	char *str;
	str = strerror(5);
	cout<<"Error: "<<str;
	return 0;
}
