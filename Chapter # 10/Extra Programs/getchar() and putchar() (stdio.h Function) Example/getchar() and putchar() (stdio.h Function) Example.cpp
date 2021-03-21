//Write a program that explains the concept of getchar() and putchar() function of stdio.h header file.

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter any Character: ";
	ch = getchar();
	putchar('*');
	putchar(ch);
	putchar('*');
	return 0;
}
