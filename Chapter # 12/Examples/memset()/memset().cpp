//Write a program that explains the concept of function memset() of string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char buffer[15] = "Cyber Hawk";
	cout<<"Buffer before memset(): ";
	puts(buffer);
	memset(buffer, 'x', 5);
	cout<<"\nBuffer after memset(): ";
	puts(buffer);
	return 0;
}
