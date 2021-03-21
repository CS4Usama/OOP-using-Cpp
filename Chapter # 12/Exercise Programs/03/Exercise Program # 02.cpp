#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char s[100];
	cout<<"Enter a String: ";
	cin.getline(s,100);
	cout<<endl<<"Original String:  "<<s<<endl;
	cout<<endl<<"Reversed String:  "<<strrev(s)<<endl;
	return 0;
}
