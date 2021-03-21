#include <iostream>
using namespace std;
int main()
{
	int i=1;
	while(i<=2)
	{
		int j=1;
		cout<<"Outer: "<<i<<endl;
		while(j<=3)
		{
			cout<<"\tInner: "<<j<<endl;
			j++;
		}
		i++;
	}
	return 0;
}
