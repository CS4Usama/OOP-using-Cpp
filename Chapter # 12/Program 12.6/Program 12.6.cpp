#include <iostream>
using namespace std;
int main()
{
	int i=0;
	char s1[30], s2[30];
	cout<<"Enter a String: ";
	cin.getline(s1,50);
	for(i=0; s1[i]!='\0'; i++)
		s2[i] = s1[i];
	s2[i] = '\0';
	cout<<"The Value of s1 is: "<<s1<<endl;
	cout<<"The Value of s2 is: "<<s2;
	return 0;
}
