//Write a program that explains the concept of getch() function of conio.h header file.

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter any Character: ";
	ch = getch();
	cout<<"\nYou Entered: "<<ch;
	return 0;
}
