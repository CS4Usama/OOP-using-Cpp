#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
class String
{
	private:
		char str[50];
	public:
		String()
		{
			str[0]='\0';
		}
		void inp()
		{
			cout<<"Enter String: ";
			gets(str);
		}
		void disp()
		{
			cout<<str<<endl;
		}
		int operator == (String s)
		{
			if(strlen(s.str)==strlen(str))
				return 1;
			else
				return 0;
		}
};

int main()
{
	String s1, s2;
	s1.inp();
	s2.inp();
	cout<<"s1 = ";
	s1.disp();
	cout<<"s2 = ";
	s2.disp();
	if(s1==s2)
		cout<<"Both Strings are of Equal Length.";
	else
		cout<<"Both Strings are of Different Length.";
	return 0;
}
