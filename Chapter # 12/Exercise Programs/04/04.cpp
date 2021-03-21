#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str[100];
	cout<<"Enter a String:  ";
	cin.getline(str,100);
	cout<<endl;
	int len = strlen(str);
	for(int i=0; i<len; i++)
	{
		for(int j=0;j<=i;j++)
			cout<<str[j];
		cout<<endl;
	}
	return 0;
}
