#include <iostream>
using namespace std;
int main()
{
	char str1[30], str2[30], str[60];
	int i,j;
	cout<<"Enter Your First Name: ";
	cin>>str1;
	cout<<"Enter Your Second Name: ";
	cin>>str2;
	for(i=0; str1[i]!='\0'; i++)
		str[i] = str1[i];
	str[i++] = ' ';
	for(j=0; str2[j]!='\0'; i++,j++)
		str[i] = str2[j];
	str[i] = '\0';
	cout<<"Your First Name is: "<<str1<<endl;
	cout<<"Your Second Name is: "<<str2<<endl;
	cout<<"Your Full Name is: "<<str;
	return 0;
}
