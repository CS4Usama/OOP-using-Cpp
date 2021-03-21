#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char s1[100], s2[100];
	cout<<"Enter a String:  ";
	cin.getline(s1,100);
	strcpy(s2,s1);
	strrev(s2);
	if(strcmp(s1,s2)==0)
		cout<<"The String is Palindrome.";
	else
		cout<<"The String is not Palindrome.";
	return 0;
}
