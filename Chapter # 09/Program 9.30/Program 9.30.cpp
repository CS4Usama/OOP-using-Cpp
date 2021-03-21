#include <iostream>
using namespace std;
void line()
{
	for(int i=1;i<=10;i++)
		cout<<"*";
	cout<<endl;
}

void line(int n)
{
	for(int i=1;i<=n;i++)
		cout<<"*";
	cout<<endl;
}

void line(int n, char c)
{
	for(int i=1;i<=n;i++)
		cout<<c;
	cout<<endl;
}

int main()
{
	line();
	line(3);
	line(5,'@');
	return 0;
}
