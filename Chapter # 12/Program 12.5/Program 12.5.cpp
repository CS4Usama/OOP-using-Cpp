#include <iostream>
using namespace std;
int main()
{
	char s[50];
	int i=0;
	cout<<"Enter a String: ";
	cin.getline(s,50);
	while(s[i]!='\0')
		i++;
	cout<<"The Length of string is: "<<i;
	return 0;
}
