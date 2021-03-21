//Write a program that explains the concept of functions strcpy(), strncpy() and strcspn() of string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str1[50] = "Programming makes Life Hell", str2[50] = "Built-in Functions make it Heaven", srch[10];
	cout<<"String 1 is:  ";
	puts(str1);
	cout<<"String 2 is:  ";
	puts(str2);
	
	cout<<"\nEnter the Set of Characters for strcspn():  ";
	gets(srch);
	
	strcpy(str1,str2);
	cout<<"\nAfter strcpy(str1,str2)...."<<endl;
	cout<<"String 1 is:  ";
	puts(str1);
	cout<<"String 2 is:  ";
	puts(str2);
	
	char str3[50] = "Programming makes Life Hell", str4[50] = "Built-in Functions make it Heaven";
	strncpy(str3,str4,17);
	cout<<"\nAfter strncpy(str1,str2)...."<<endl;
	cout<<"String 3 is:  ";
	puts(str3);
	cout<<"String 4 is:  ";
	puts(str4);
	
	str1[50] = '\0';
	cout<<"\nResult of strcspn() is:"<<endl;
	int res = strcspn(str1,srch);
	if(res==strlen(str1))
		cout<<"None of the Characters Found.";
	else
		cout<<"Character Found at Index "<<res;
	return 0;
}
