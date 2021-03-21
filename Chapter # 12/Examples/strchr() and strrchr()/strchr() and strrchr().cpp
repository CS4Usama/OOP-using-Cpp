//Write a program that explains the concept of functions strchr() and strrchr() of string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str[20] = "This is a string.", *res, ch;
	cout<<"String is:  "<<str<<endl;
	cout<<"Enter any Character to Search: ";
	cin>>ch;
	cout<<"\nLooking for '"<<ch<<"' in the String with strchr()....\n";
	res = strchr(str,ch);
	if(res==NULL)
		cout<<ch<<" Not Found in the String."<<endl;
	else
		cout<<ch<<" Found in the String at Index "<<res-str<<endl;
	cout<<"\nLooking for '"<<ch<<"' in the String with strrchr()....\n";
	res = strrchr(str,ch);
	if(res==NULL)
		cout<<ch<<" Not Found in the String.";
	else
		cout<<ch<<" Found in the String at Index "<<res-str;
	return 0;
}
