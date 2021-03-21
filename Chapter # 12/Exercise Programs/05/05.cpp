#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char ch, c, str[100];
	cout<<"Enter a String:  ";
	cin.getline(str,100);
	cout<<"Enter a Character:  ";
	cin>>ch;
	int len = strlen(str);
	for(int i=0; i<len; i++)
	{
		if(toupper(str[i])==ch || tolower(str[i])==ch)
		{
			c = str[i];
			if(c>=65 && c<=90)
				c=c+32;
			else if(c>=97 && c<=122)
			c=c-32;
			str[i] = c;
		}
	}
	cout<<str;
	return 0;
}
