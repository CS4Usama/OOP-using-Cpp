#include <iostream>
using namespace std;
int main()
{
	char line[80];
	int uc, lc, uv, lv;
	uc=lc=uv=lv=0;
	cout<<"Enter a Sentence: ";
	cin.getline(line,80);
	for(int x=0;line[x]!='\0';x++)
	{
		if(line[x]=='A' || line[x]=='E' || line[x]=='I' || line[x]=='O' || line[x]=='U')
			uv++;
		else if(line[x]=='a' || line[x]=='e' || line[x]=='i' || line[x]=='o' || line[x]=='u')
			lv++;
		else if(line[x]>+65 && line[x]<=90)
			uc++;
		else if(line[x]>+97 && line[x]<=122)
			lc++;
	}
	cout<<"Uppercase Consonants: "<<uc<<endl;
	cout<<"Lowercase Consonants: "<<lc<<endl;
	cout<<"Uppercase Vowels: "<<uv<<endl;
	cout<<"Lowercase Vowels: "<<lv;
	return 0;
}
