#include <iostream>
using namespace std;
void shp(int n, char c)
{
	for(int i=1;i<=n;i++)
	{
		cout<<endl;
		for(int j=1;j<=n;j++)
			cout<<c;
	}
}

int main()
{
	int n;
	char c;
	cout<<"Enter a Number: ";
	cin>>n;
	cout<<"Enter a Character: ";
	cin>>c;
	shp(n,c);
	return 0;
}
