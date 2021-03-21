#include <iostream>
using namespace std;
int main()
{
	char str[]="Cyber Hawk";
	char ch, *ptr, s;
	s='n';
	ptr=str;
	cout<<"Enter Any Character to Find: ";
	cin>>ch;
	while(*ptr++ != '\0')
		if(*ptr==ch)
			s='y';
	if(s=='y')
		cout<<"The Character is Found in the Array.";
	else
		cout<<"The Character is Not Found in the Array.";
	return 0;
}
