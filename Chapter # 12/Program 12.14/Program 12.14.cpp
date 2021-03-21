#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str[25];
	int len;
	cout<<"Enter a String: ";
	gets(str);
	len = strlen(str);
	cout<<"The String contains "<<len<<" Characters.";
	return 0;
}
