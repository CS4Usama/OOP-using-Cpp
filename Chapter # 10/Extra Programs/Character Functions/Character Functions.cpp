//Write a program that explains the working of all character functions of ctype.h

#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a Single Character: ";
	cin>>ch;
	cout<<ch<<" is: "<<endl;
	if(isalnum(ch)!=0)
		cout<<"\t an AlphaNumeric."<<endl;
	else
		cout<<"\t not an AlphaNumeric."<<endl;
	if(isalpha(ch)!=0)
		cout<<"\t an Alphabet."<<endl;
	else
		cout<<"\t not an Alphabet."<<endl;
	if(isdigit(ch)!=0)
		cout<<"\t a Digit."<<endl;
	else
		cout<<"\t not a Digit."<<endl;
	if(islower(ch)!=0)
		cout<<"\t Lower Character."<<endl;
	else
		cout<<"\t not Lower Character."<<endl;
	if(isupper(ch)!=0)
		cout<<"\t Upper Character."<<endl;
	else
		cout<<"\t not Upper Character."<<endl;
	if(isprint(ch)!=0)
		cout<<"\t a Printing Character."<<endl;
	else
		cout<<"\t not a Printing Character."<<endl;
	if(ispunct(ch)!=0)
		cout<<"\t a Punctuation Character."<<endl;
	else
		cout<<"\t not a Punctuation Character."<<endl;
	if(isspace(ch)!=0)
		cout<<"\t a Space."<<endl;
	else
		cout<<"\t not a Space."<<endl;
	if(isxdigit(ch)!=0)
		cout<<"\t a Character between 0-9, A-F or a-f."<<endl;
	else
		cout<<"\t not a Character between 0-9, A-F or a-f."<<endl;
	return 0;
}
