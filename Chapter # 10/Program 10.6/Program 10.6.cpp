#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
	char ch[50];
	cout<<"Enter a Sentence:  ";
	gets(ch);
	cout<<"\nThe Sentence in Lowercase is:  ";
	for(int i=0; ch[i]!='\0'; i++)
		ch[i] = tolower(ch[i]);
	puts(ch);
	cout<<"The Sentence in Uppercase is:  ";
	for(int i=0; ch[i]!='\0'; i++)
		ch[i] = toupper(ch[i]);
	puts(ch);
	return 0;
}
