#include <iostream>
using namespace std;
int main()
{
	char cnt[5][30], ch;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter Country Name: ";
		cin>>cnt[i];
	}
	cout<<"\nThe Name of Countries starts with Vowel Character are as follows:"<<endl;
	for(int i=0; i<5; i++)
	{
		ch = cnt[i][0];
		switch(ch)
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				cout<<cnt[i]<<endl;
		}
	}
	return 0;
}
