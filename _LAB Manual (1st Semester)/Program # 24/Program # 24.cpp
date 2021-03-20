/*Problem:-   Write a program that accepts a character and determines whether the character is a lowercase letter.
			  A lowercase letter is any character that is greater than equal to 'a' and less than or equal to 'z'.
			  If the entered character is a lowercase letter, display the message "Entered character is a lowercase letter",
			  otherwise display the message "Entered character is not a lowercase letter".	*/


#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter any Character: ";
	cin>>ch;
	if(ch>='a' && ch<='z')
		cout<<"\tEntered Character is a Lowercase Letter.";
	else
		cout<<"\tEntered Character is not a Lowercase Letter.";
	return 0;
}
