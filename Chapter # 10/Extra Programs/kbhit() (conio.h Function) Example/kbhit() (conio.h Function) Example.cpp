//Write a program that explains the concept of kbhit() function of conio.h header file.


#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	while(!kbhit())
		cout<<"Cyber Hawk\t";
	return 0;
}
