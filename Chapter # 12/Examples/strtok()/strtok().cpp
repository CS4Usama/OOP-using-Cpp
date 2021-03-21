//Write a program that explains the concept of function strtok() of string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str[20] = "C++,Programming";
	char *p;
	p = strtok(str,",");
	if(p)
		cout<<p<<endl;
	//A second call to strtok() using a NULL as the first parameter returns a pointer to the character following the token
	p = strtok(NULL,",");
	if(p)
		cout<<p;
	return 0;
}
