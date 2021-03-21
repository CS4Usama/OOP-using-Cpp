//Write a program that explains the concept of function strlwr() and strupr() of string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str[15] = "Cyber Hawk";
	cout<<"String Before strlwr() and strupr():  "<<str<<endl;
	cout<<"String After strlwr():  "<<strlwr(str)<<endl;
	cout<<"String After strupr():  "<<strupr(str);
	return 0;
}
