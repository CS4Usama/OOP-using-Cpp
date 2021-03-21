#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char s1[50], s2[50];
	int r;
	cout<<"Enter First String: ";
	cin.getline(s1,50);
	cout<<"Enter Second String: ";
	cin.getline(s2,50);
	r=strcmp(s1,s2);
	if(r<0)
		cout<<"String_1 is less than String_2.";
	else if(r==0)
		cout<<"String_1 is equal to String_2.";
	else
		cout<<"String_1 is greater than String_2.";
	return 0;
}
