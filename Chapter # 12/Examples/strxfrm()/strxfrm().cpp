//Write a program that explains the concept of function strxfrm() of string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char tar[20], src[] = "Hello World";
	int len;
	len = strxfrm(tar,src,20);
	cout<<tar<<" has the Length "<<len;
	return 0;
}
