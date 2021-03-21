//Write a program that copies a string into an empty string then write this string into a text file. Use seekg() to display contents from 12th position.

#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main()
{
	char text[50], ch, tx[50]= "Cyber Hawk: Programming is just a Game of Logic.";
	strcpy(text, tx);
	ofstream out("mydoc.txt", ios::binary);
	out<<text;
	out.close();
	
	ifstream in("mydoc.txt", ios::binary);
	in.seekg(12);
	cout<<"The Contents from Position 12 are:"<<endl<<endl;
	while(!in.eof())
	{
		in.get(ch);
		if(!in.eof())
			cout<<ch;
	}
	in.close();
	return 0;
}
