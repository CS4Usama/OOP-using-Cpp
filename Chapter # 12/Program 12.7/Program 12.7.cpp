#include <iostream>
using namespace std;
int main()
{
	char str[30];
	int v=0;
	cout<<"Enter a String: ";
	cin.getline(str,30);
	for(int i=0; str[i]!='\0'; i++)
	{
		switch(str[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				v++;
		}
	}
	cout<<"The String has "<<v<<" Vowels.";
	return 0;
}
