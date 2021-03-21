#include <iostream>
using namespace std;
int main()
{
	for(int i=1;i<=2;i++)
	{
		for(int j=1;j<=3;j++)
			cout<<"Outer: "<<i<<"\tInner: "<<j<<endl;
	}
	return 0;
}
