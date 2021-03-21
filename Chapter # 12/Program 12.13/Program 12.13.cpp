#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char s1[50], s2[50];
	int ch, r;
	cout<<"Enter First String: ";
	cin.getline(s1,50);
	cout<<"Enter Second String: ";
	cin.getline(s2,50);
	cout<<"Enter Number of Characters to Compare: ";
	cin>>ch;
	r=strncmp(s1,s2,ch);
	if(r>0)
		cout<<"String_1 is Greater than String_2.";
	else if(r==0)
		cout<<"String_1 is Equal to String_2.";
	else
		cout<<"String_1 is Less than String_2.";
	return 0;
}
