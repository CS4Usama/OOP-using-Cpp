#include <iostream>
using namespace std;
int main()
{
	char s[100];
	int w, ch, i;
	w=ch=i=0;
	cout<<"Enter a String: ";
	cin.getline(s,100);
	for(;s[i]!='\0';i++)
	{
		if(s[i]==' ')
			w++;
		else
			ch++;
	}
	cout<<"Number of Words in Above String is: "<<w+1<<endl;
	cout<<"Number of Characters in Above String is: "<<ch;
	return 0;
}
