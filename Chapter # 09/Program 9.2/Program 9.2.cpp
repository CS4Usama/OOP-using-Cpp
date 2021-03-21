#include <iostream>
using namespace std;
void max(int, int);
int main()
{
	int a, b;
	cout<<"Enter Two Numbers: ";
	cin>>a>>b;
	max(a,b);
	return 0;
}

void max(int x, int y)
{
	if(x>y)
		cout<<"Maximum Number is: "<<x;
	else
		cout<<"Maximum Number is: "<<y;
}
