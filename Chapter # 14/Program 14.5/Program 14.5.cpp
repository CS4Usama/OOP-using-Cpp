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
		String operator + (String s)
		{
			String tmp;
			strcpy(tmp.str, str);	//We can also use strcat() function here
			/*strcat() string function saves his own value and copy other string's value as well as.
			But strcpy() string function copy other variable's value completely and lost his own*/
			strcat(tmp.str, s.str);
			return tmp;
		}
};

int main()
{
	String s1, s2, s3;
	s1.inp();
	s2.inp();
	cout<<"s1 = ";
	s1.disp();
	cout<<"s2 = ";
	s2.disp();
	cout<<"s3 = ";
	s3.disp();
	cout<<"Concatenating s1 and s2 in s3..."<<endl;
	s3 = s1 + s2;
	cout<<"s3 = ";
	s3.disp();
	return 0;
}
